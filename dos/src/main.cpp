#include "engine.hpp"
#include "checks.hpp"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

static mc::Game game;
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
    for(int y=0;y<mc::HEIGHT;y++)for(int x=0;x<mc::WIDTH;x++) {
        unsigned char c=game.frame[y*mc::WIDTH+x];unsigned i=unsigned(y*640+x*2);
        screen[i]=screen[i+1]=screen[i+320]=screen[i+321]=c;
    }
    dosmemput(screen,64000,0xa0000);
}
static bool mouseInit() { __dpmi_regs r;memset(&r,0,sizeof r);__dpmi_int(0x33,&r);return r.x.ax==0xffff; }
static unsigned mouse(float& yaw,float& pitch) {
    __dpmi_regs r;memset(&r,0,sizeof r);r.x.ax=11;__dpmi_int(0x33,&r);
    yaw+=short(r.x.cx)*.0025f;pitch-=short(r.x.dx)*.0025f;
    memset(&r,0,sizeof r);r.x.ax=3;__dpmi_int(0x33,&r);return r.x.bx;
}
#endif

int main(int argc,char** argv) {
    if(!game.loadAtlas("ATLAS.DAT")){puts("Missing/invalid ATLAS.DAT. Extract the complete DOS package.");return 1;}
    bool test=argc>1&&!strcmp(argv[1],"--test");
    if(test) {
        FILE* report=fopen("RESULT.TXT","w");if(!report)return 2;
#ifdef __DJGPP__
        fprintf(report,"PLATFORM=DJGPP MS-DOS DPMI\nFREE_PHYSICAL_BYTES=%lu\n",(unsigned long)_go32_dpmi_remaining_physical_memory());
#else
        fprintf(report,"PLATFORM=host\n");
#endif
        int failed=checkGame(game,report);bool frame=writeFrame(game,"FRAME.PPM");
        fprintf(report,"FRAME_WRITTEN=%d\n",frame?1:0);fclose(report);return failed||!frame?3:0;
    }
#ifdef __DJGPP__
    bool smoke=argc>1&&!strcmp(argv[1],"--smoke");
    game.generate(42);game.load("WORLD.SAV");
    puts("Minecraft DOS - initial playable reconstruction\nWASD move, arrows look, Space jump, X/C break/place, 1-7 blocks\nMouse optional. F5 save. Escape save and exit. Press Enter.");
    if(!smoke)getchar();atexit(cleanup);video(0x13);
    outportb(0x3c8,0);for(int i=0;i<768;i++)outportb(0x3c9,game.palette[i]>>2);
    if(!keyboard()){cleanup();puts("Cannot install keyboard IRQ.");return 4;}
    bool hasMouse=mouseInit();unsigned lastButtons=0;bool lastMine=false,lastPlace=false,lastSave=false;
    uclock_t previous=uclock();float accumulator=0;
    const unsigned char choices[7]={mc::Stone,mc::Dirt,mc::Cobble,mc::Planks,mc::Sand,mc::Log,mc::Glass};
    unsigned frames=0,mismatches=0;uclock_t start=uclock();
    while(!keys[1]) {
        uclock_t now=uclock();float dt=float(now-previous)/UCLOCKS_PER_SEC;previous=now;
        if(dt>.25f)dt=.25f;accumulator+=dt;
        game.player.yaw+=(int(keys[77])-int(keys[75]))*dt*1.7f;
        game.player.pitch+=(int(keys[72])-int(keys[80]))*dt*1.4f;
        unsigned buttons=hasMouse?mouse(game.player.yaw,game.player.pitch):0;
        if(game.player.pitch>1.3f)game.player.pitch=1.3f;if(game.player.pitch< -1.3f)game.player.pitch=-1.3f;
        for(int i=0;i<7;i++)if(keys[2+i])game.selected=choices[i];
        while(accumulator>=.02f){game.update(int(keys[17])-int(keys[31]),int(keys[32])-int(keys[30]),keys[57]!=0,.02f);accumulator-=.02f;}
        bool mine=keys[45]||((buttons&1)&&!(lastButtons&1));bool place=keys[46]||((buttons&2)&&!(lastButtons&2));
        if(mine&&!lastMine)game.mine();if(place&&!lastPlace)game.place();
        if(keys[63]&&!lastSave){if(!game.save("WORLD.SAV"))sound(220);else sound(880);delay(40);nosound();}
        lastMine=mine;lastPlace=place;lastSave=keys[63]!=0;lastButtons=buttons;
        game.render();show();
        if(smoke) {
            unsigned char scanline[320];
            for(int y=0;y<200;y++){dosmemget(0xa0000+y*320,320,scanline);for(int x=0;x<320;x++)if(scanline[x]!=screen[y*320+x])mismatches++;}
            if(++frames==4)break;
        }
    }
    if(smoke){FILE* f=fopen("SMOKE.TXT","w");if(f){__dpmi_regs r;memset(&r,0,sizeof r);r.h.ah=15;__dpmi_int(0x10,&r);fprintf(f,"VIDEO_MODE=%u\nKEYBOARD_INSTALLED=%u\nFRAMES=%u\nVGA_READBACK_MISMATCHES=%u\nEMULATED_SECONDS=%.3f\n",unsigned(r.h.al),keyboardInstalled?1:0,frames,mismatches,double(uclock()-start)/UCLOCKS_PER_SEC);fclose(f);}writeFrame(game,"VGA.PPM");}
    bool saved=game.save("WORLD.SAV");cleanup();
    puts(saved?"World saved to WORLD.SAV.":"SAVE FAILED. Check free disk space; previous backup is WORLD.BAK.");
    return saved?0:5;
#else
    puts("Host build supports --test. Use MCDOS.EXE for interactive DOS graphics.");return 0;
#endif
}
