#include "engine.hpp"
#include "checks.hpp"
#include "gui.hpp"
#include "features_checks.hpp"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <unistd.h>
#include <sys/stat.h>
#include <dirent.h>

static mc::Game game;
static mc::Gui gui(game);
#ifdef __DJGPP__
#include <dpmi.h>
#include <dos.h>
#include <go32.h>
#include <pc.h>
#include <sys/movedata.h>
#include <time.h>

unsigned _stklen=65536;
static volatile unsigned char keys[128];
static _go32_dpmi_seginfo oldKeyboard,newKeyboard;
static bool keyboardInstalled=false,graphics=false;
static unsigned char screen[64000];
static void keyboardHandler() {
    unsigned char code=inportb(0x60);
    if(code!=0xe0&&code!=0xe1)keys[code&127]=(code&128)?0:1;
    outportb(0x20,0x20);
}
static void keyboardEnd() {}
static void video(int mode) { __dpmi_regs r;memset(&r,0,sizeof r);r.x.ax=mode;__dpmi_int(0x10,&r);graphics=mode==0x13; }
static void cleanup() {
    if(keyboardInstalled){_go32_dpmi_set_protected_mode_interrupt_vector(9,&oldKeyboard);_go32_dpmi_free_iret_wrapper(&newKeyboard);keyboardInstalled=false;}
    if(graphics)video(3);
}
static bool keyboard() {
    memset((void*)keys,0,sizeof keys);
    if(_go32_dpmi_lock_data((void*)keys,sizeof keys)!=0)return false;
    if(_go32_dpmi_lock_code((void*)keyboardHandler,(long)keyboardEnd-(long)keyboardHandler)!=0)return false;
    _go32_dpmi_get_protected_mode_interrupt_vector(9,&oldKeyboard);
    newKeyboard.pm_offset=(int)keyboardHandler;newKeyboard.pm_selector=_go32_my_cs();
    if(_go32_dpmi_allocate_iret_wrapper(&newKeyboard)!=0)return false;
    if(_go32_dpmi_set_protected_mode_interrupt_vector(9,&newKeyboard)!=0){_go32_dpmi_free_iret_wrapper(&newKeyboard);return false;}
    keyboardInstalled=true;return true;
}
static void show() {
    static unsigned char activePalette[768];
    if(memcmp(activePalette,game.palette,768)){outportb(0x3c8,0);for(int i=0;i<768;i++)outportb(0x3c9,game.palette[i]>>2);memcpy(activePalette,game.palette,768);}
    memcpy(screen,gui.pixels,64000);
    dosmemput(screen,64000,0xa0000);
}
static bool mouseInit() { __dpmi_regs r;memset(&r,0,sizeof r);__dpmi_int(0x33,&r);return r.x.ax==0xffff; }
static unsigned mouse(float& yaw,float& pitch) {
    __dpmi_regs r;memset(&r,0,sizeof r);r.x.ax=11;__dpmi_int(0x33,&r);
    yaw+=short(r.x.cx)*(.0005f+gui.sensitivity*.00004f);pitch+=(gui.invert?1:-1)*short(r.x.dx)*(.0005f+gui.sensitivity*.00004f);
    memset(&r,0,sizeof r);r.x.ax=3;__dpmi_int(0x33,&r);return r.x.bx;
}
static char asciiFor(int scan){char c=0;if(scan>=2&&scan<=11)c="1234567890"[scan-2];if(scan>=16&&scan<=25)c="qwertyuiop"[scan-16];if(scan>=30&&scan<=38)c="asdfghjkl"[scan-30];if(scan>=44&&scan<=50)c="zxcvbnm"[scan-44];if(scan==57)c=' ';if(scan==12)c='-';if(scan==52)c='.';if(keys[42]||keys[54]){if(c>='a'&&c<='z')c-=32;}return c;}
#endif

int main(int argc,char** argv) {
    if(!game.loadAtlas("ATLAS.DAT")){puts("Missing/invalid ATLAS.DAT. Extract the complete DOS package.");return 1;}
    if(!gui.load("GUI.DAT")){puts("Missing/invalid GUI.DAT. Extract the complete DOS package.");return 1;}
    bool test=argc>1&&!strcmp(argv[1],"--test");
    if(test) {
        FILE* report=fopen("RESULT.TXT","w");if(!report)return 2;
#ifdef __DJGPP__
        fprintf(report,"PLATFORM=DJGPP MS-DOS DPMI\nFREE_PHYSICAL_BYTES=%lu\n",(unsigned long)_go32_dpmi_remaining_physical_memory());
#else
        fprintf(report,"PLATFORM=host\n");
#endif
        char directory[16];bool isolated=false;
        for(int i=0;i<100;i++){sprintf(directory,"MCTST%03d",i);if(mkdir(directory,0700)==0){isolated=chdir(directory)==0;break;}}
        if(!isolated){fclose(report);return 6;}
        int failed=checkGame(game,report);failed+=checkFeatures(game,gui,report);
        DIR* dir=opendir(".");if(dir){struct dirent* entry;while((entry=readdir(dir))!=0)if(strcmp(entry->d_name,".")&&strcmp(entry->d_name,".."))remove(entry->d_name);closedir(dir);}chdir("..");rmdir(directory);
        bool frame=writeFrame(game,"FRAME.PPM");
        fprintf(report,"FRAME_WRITTEN=%d\n",frame?1:0);fclose(report);return failed||!frame?3:0;
    }
#ifdef __DJGPP__
    bool smoke=argc>1&&!strcmp(argv[1],"--smoke");
    if(smoke){game.generate(42);gui.screen=mc::Playing;}
    atexit(cleanup);video(0x13);
    outportb(0x3c8,0);for(int i=0;i<768;i++)outportb(0x3c9,game.palette[i]>>2);
    if(!keyboard()){cleanup();puts("Cannot install keyboard IRQ.");return 4;}
    bool hasMouse=mouseInit();unsigned lastButtons=0;bool previousKeys[128]={false};
    uclock_t previous=uclock();float accumulator=0,attackWait=0;
    int breakX=-1,breakY=-1,breakZ=-1;float breakSeconds=0;
    unsigned frames=0,mismatches=0;uclock_t start=uclock();
    while(!gui.quit) {
        uclock_t now=uclock();float dt=float(now-previous)/UCLOCKS_PER_SEC;previous=now;
        if(dt>.25f)dt=.25f;
        bool savePressed=keys[63]&&!previousKeys[63];
        for(int i=1;i<128;i++){if(keys[i]&&!previousKeys[i])gui.key(i,asciiFor(i));previousKeys[i]=keys[i]!=0;}
        unsigned buttons=0;
        if(hasMouse){__dpmi_regs r;memset(&r,0,sizeof r);r.x.ax=3;__dpmi_int(0x33,&r);buttons=r.x.bx;
            if(gui.screen==mc::Playing)buttons=mouse(game.player.yaw,game.player.pitch);
            else{gui.mouseX=r.x.cx/2;gui.mouseY=r.x.dx;if((buttons&1)&&!(lastButtons&1))gui.click(gui.mouseX,gui.mouseY);if((buttons&2)&&!(lastButtons&2))gui.click(gui.mouseX,gui.mouseY,true);}}
        if(gui.screen==mc::Playing) {
            game.player.yaw+=(int(keys[77])-int(keys[75]))*dt*1.7f;
            game.player.pitch+=(int(keys[72])-int(keys[80]))*dt*1.4f;
            if(game.player.pitch>1.3f)game.player.pitch=1.3f;if(game.player.pitch< -1.3f)game.player.pitch=-1.3f;
            for(int i=0;i<9;i++)if(keys[2+i])game.progress.slot=i;
            accumulator+=dt;while(accumulator>=.02f){game.update(int(keys[17])-int(keys[31]),int(keys[32])-int(keys[30]),keys[57]!=0,.02f);accumulator-=.02f;}
            attackWait-=dt;
            if(keys[45]||(buttons&1)){
                bool animal=attackWait<=0&&game.attackAnimal();if(animal){attackWait=.5f;breakSeconds=0;gui.mining=0;}
                else{mc::Hit h=game.target();if(!h.found){breakSeconds=0;gui.mining=0;}else{if(h.x!=breakX||h.y!=breakY||h.z!=breakZ){breakX=h.x;breakY=h.y;breakZ=h.z;breakSeconds=0;}breakSeconds+=dt;gui.mining=breakSeconds/game.breakingTime(h);if(gui.mining>=1){game.mine();breakSeconds=0;gui.mining=0;}}}
            }else{breakSeconds=0;gui.mining=0;}
            if((keys[46]||(buttons&2))&&attackWait<=0){mc::Hit target=game.target();if(game.attackAnimal(true)){}else if(target.found&&target.block==58)gui.open(mc::Crafting);else game.place();attackWait=.3f;}
            if(keys[19])game.progress.eat();
            if(savePressed)gui.saveWorld();
            game.render();gui.drawAnimals();if(!game.progress.health)gui.open(mc::Dead);
        }else if(gui.screen==mc::Inventory||gui.screen==mc::Crafting){accumulator+=dt;while(accumulator>=.02f){game.update(0,0,false,.02f);accumulator-=.02f;}game.render();gui.drawAnimals();if(!game.progress.health)gui.open(mc::Dead);attackWait=.15f;}
        else{accumulator=0;attackWait=.15f;}
        gui.draw();show();lastButtons=buttons;
        if(smoke) {
            unsigned char scanline[320];
            for(int y=0;y<200;y++){dosmemget(0xa0000+y*320,320,scanline);for(int x=0;x<320;x++)if(scanline[x]!=screen[y*320+x])mismatches++;}
            if(++frames==4)break;
        }
    }
    if(smoke){FILE* f=fopen("SMOKE.TXT","w");if(f){__dpmi_regs r;memset(&r,0,sizeof r);r.h.ah=15;__dpmi_int(0x10,&r);fprintf(f,"VIDEO_MODE=%u\nKEYBOARD_INSTALLED=%u\nFRAMES=%u\nVGA_READBACK_MISMATCHES=%u\nEMULATED_SECONDS=%.3f\n",unsigned(r.h.al),keyboardInstalled?1:0,frames,mismatches,double(uclock()-start)/UCLOCKS_PER_SEC);fclose(f);}writeFrame(game,"VGA.PPM");gui.screenshot("HUD.PPM");}
    bool saved=smoke?game.save("SMOKE.SAV"):true;cleanup();
    puts(saved?"Minecraft DOS closed.":"SAVE FAILED. Check free disk space; previous backup is WORLD.BAK.");
    return saved?0:5;
#else
    puts("Host build supports --test. Use MCDOS.EXE for interactive DOS graphics.");return 0;
#endif
}
