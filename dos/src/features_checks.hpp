#ifndef MC_FEATURE_CHECKS_HPP
#define MC_FEATURE_CHECKS_HPP
#include "gui.hpp"
inline int checkFeatures(mc::Game& g,mc::Gui& ui,FILE* report){
    int failed=0,checks=0;
#define FEATURE(x) do{checks++;if(!(x)){fprintf(report,"FEATURE_FAIL %d: %s\n",__LINE__,#x);failed++;}}while(0)
    mc::Progress& p=g.progress;p.reset();
    unsigned count=0;FEATURE(mc::Progress::recipes(count)!=0&&count==151);
    p.grid[4]={17,1,0,0};const mc::Recipe* r=p.match(2);FEATURE(r&&r->output==5&&r->count==4);
    FEATURE(p.craft(2));FEATURE(p.inventory[0].id==5&&p.inventory[0].count==4&&!p.grid[4].count);
    memset(p.grid,0,sizeof p.grid);p.grid[1]={5,1,0,0};p.grid[4]={5,1,0,0};r=p.match(2);FEATURE(r&&r->output==280&&r->count==4);
    p.grid[0]={5,1,0,0};p.grid[3]={5,1,0,0};p.unlock(mc::OpenInventory);p.unlock(mc::GetWood);FEATURE(p.craft(2));FEATURE(p.achievements&(1U<<mc::BuildWorkbench));
    memset(p.grid,0,sizeof p.grid);p.grid[0]={5,1,0,0};p.grid[1]={5,1,0,0};p.grid[2]={5,1,0,0};p.grid[4]={280,1,0,0};p.grid[7]={280,1,0,0};FEATURE(!p.match(2));r=p.match(3);FEATURE(r&&r->output==270);FEATURE(p.craft(3));FEATURE(p.achievements&(1U<<mc::BuildPickaxe));
    memset(p.grid,0,sizeof p.grid);p.grid[0]={263,1,2,0};p.grid[3]={280,1,0,0};FEATURE(!p.match(2));p.grid[0].data=1;r=p.match(2);FEATURE(r&&r->output==50&&r->count==4);
    FEATURE(mc::Progress::icon(354)==29&&mc::Progress::icon(355)==45&&mc::Progress::icon(270)==96);
    // Mirrored axe at the right-hand side of the grid.
    memset(p.grid,0,sizeof p.grid);p.grid[1]={4,1,0,0};p.grid[2]={4,1,0,0};p.grid[4]={280,1,0,0};p.grid[5]={4,1,0,0};p.grid[7]={280,1,0,0};r=p.match(3);FEATURE(r&&r->output==275);
    memset(p.grid,0,sizeof p.grid);p.grid[0]={296,1,0,0};p.grid[1]={351,1,3,0};p.grid[2]={296,1,0,0};r=p.match(3);FEATURE(r&&r->output==357&&r->count==8);p.grid[1].data=4;FEATURE(!p.match(3));
    memset(p.grid,0,sizeof p.grid);p.grid[0]={39,1,0,0};p.grid[4]={40,1,0,0};p.grid[8]={281,1,0,0};r=p.match(3);FEATURE(!r); // Beta recipe is vertical, not modern shapeless stew.
    memset(p.grid,0,sizeof p.grid);p.grid[0]={39,1,0,0};p.grid[3]={40,1,0,0};p.grid[6]={281,1,0,0};r=p.match(3);FEATURE(r&&r->output==282);FEATURE(!p.match(2));
    memset(p.grid,0,sizeof p.grid);p.grid[0]={351,1,1,0};p.grid[8]={351,1,11,0};r=p.match(3);FEATURE(r&&r->output==351&&r->data==14&&r->count==2);
    FEATURE(mc::Progress::maxStack(319)==1&&mc::Progress::maxStack(297)==1&&mc::Progress::maxStack(357)==8&&mc::Progress::maxStack(344)==16);
    // Full inventory: crafting must not consume input on output rejection.
    for(int i=0;i<36;i++)p.inventory[i]={3,64,0,0};memset(p.grid,0,sizeof p.grid);p.grid[0]={17,1,0,0};FEATURE(!p.craft(2));FEATURE(p.grid[0].count==1);mc::Stack held={0,0,0,0};FEATURE(p.craft(2,&held));FEATURE(held.id==5&&held.count==4&&!p.grid[0].count);
    p.reset();p.grid[0]={335,1,0,0};p.grid[1]={335,1,0,0};p.grid[2]={335,1,0,0};p.grid[3]={353,1,0,0};p.grid[4]={344,1,0,0};p.grid[5]={353,1,0,0};for(int i=6;i<9;i++)p.grid[i]={296,1,0,0};FEATURE(p.craft(3));unsigned buckets=0;for(int i=0;i<36;i++)if(p.inventory[i].id==325)buckets+=p.inventory[i].count;FEATURE(buckets==3&&p.inventory[0].id==354);
    p.reset();FEATURE(p.add(17,65));FEATURE(p.inventory[0].count==64&&p.inventory[1].count==1);
    p.health=10;p.inventory[0]={319,1,0,0};FEATURE(p.eat());FEATURE(p.health==13&&!p.inventory[0].count);p.hurt(12);FEATURE(p.health==1);p.hurt(2);FEATURE(!p.health&&p.stats.deaths==1);p.health=1;p.inventory[0]={322,1,0,0};FEATURE(p.eat()&&p.health==20);
    p.reset();p.unlock(mc::BuildPickaxe);FEATURE(!p.achievements);p.unlock(mc::OpenInventory);p.unlock(mc::GetWood);FEATURE((p.achievements&3)==3);
    FEATURE(p.put(mc::Stack{270,1,0,21}));FEATURE(p.inventory[0].wear==21);
    p.stats.blocksMined=7;p.health=9;FEATURE(p.save("PROFILE.PLY"));p.reset();FEATURE(p.load("PROFILE.PLY"));FEATURE(p.health==9&&p.inventory[0].wear==21&&p.stats.blocksMined==7&&p.achievements==3);
    FILE* file=fopen("PROFILE.PLY","r+b");FEATURE(file!=0);if(file){fseek(file,8,SEEK_SET);fputc(8,file);fclose(file);}FEATURE(!p.load("PROFILE.PLY"));FEATURE(p.health==9);
    // Real survival mining and placement consume/award quantities.
    g.generate(42);memset(g.blocks,0,sizeof g.blocks);g.player.x=10.5f;g.player.y=10;g.player.z=10.5f;g.player.yaw=0;g.player.pitch=0;p.fallStart=10;
    g.set(10,11,13,mc::Log);p.unlock(mc::OpenInventory);FEATURE(g.mine());FEATURE(p.inventory[0].id==17&&p.inventory[0].count==1&&(p.achievements&2));
    g.set(10,11,13,mc::Stone);FEATURE(g.place());FEATURE(!p.inventory[0].count&&g.get(10,11,12)==17);
    g.set(10,11,12,mc::Air);FEATURE(g.mine());FEATURE(!p.inventory[0].count); // stone broken by hand drops nothing
    g.set(10,11,13,mc::Stone);p.add(270);FEATURE(g.mine());FEATURE(p.inventory[1].id==4&&p.inventory[0].wear==1);
    for(int i=0;i<12;i++)p.animals[i].health=0;p.animals[0]={10.5f,10,12.5f,0,0,0,4,0};FEATURE(g.attackAnimal());FEATURE(g.attackAnimal());FEATURE(!p.animals[0].health&&p.stats.animalsKilled==1);
    p.reset();g.set(10,11,13,mc::Air);p.animals[0]={10.5f,10,12.5f,0,0,2,8,0};p.add(359);FEATURE(g.attackAnimal(true));FEATURE(p.animals[0].sheared&&p.inventory[0].wear==1);FEATURE(!g.attackAnimal(true));FEATURE(p.inventory[1].id==35&&p.inventory[1].count==2);
    p.animals[0].kind=1;p.inventory[0]={325,1,0,0};FEATURE(g.attackAnimal(true));FEATURE(p.inventory[0].id==335);
    // Screen navigation is exercised through the same handlers used by DOS keyboard/mouse.
    memset(ui.worlds,0,sizeof ui.worlds);ui.world=-1;ui.open(mc::MainMenu);ui.draw();FEATURE(ui.screenshot("../MENU.PPM"));
    ui.click(120,93);FEATURE(ui.screen==mc::WorldList);ui.click(210,139);FEATURE(ui.screen==mc::CreateWorld);strcpy(ui.edit,"Test Survival");strcpy(ui.seedEdit,"123456");ui.click(100,160);FEATURE(ui.screen==mc::Playing&&ui.worlds[0].used);FEATURE(ui.worlds[0].seed==123456);
    ui.key(18);FEATURE(ui.screen==mc::Inventory&&(p.achievements&1));ui.draw();FEATURE(ui.screenshot("../INV.PPM"));ui.key(18);FEATURE(ui.screen==mc::Playing);
    p.add(17,2);FEATURE(ui.saveWorld());ui.key(1);FEATURE(ui.screen==mc::Paused);ui.click(100,75);FEATURE(ui.screen==mc::Achievements);ui.key(1);FEATURE(ui.screen==mc::Paused);
    ui.click(100,99);FEATURE(ui.screen==mc::StatisticsPage);ui.key(1);ui.click(100,160);FEATURE(ui.screen==mc::MainMenu);
    FEATURE(ui.startWorld(0,false));FEATURE(p.inventory[0].id==17&&p.inventory[0].count==2&&(p.achievements&1));
    ui.open(mc::WorldList);ui.click(50,163);FEATURE(ui.screen==mc::RenameWorld);strcpy(ui.edit,"Renamed");ui.click(100,160);FEATURE(ui.screen==mc::WorldList&&!strcmp(ui.worlds[0].name,"Renamed"));ui.click(110,163);FEATURE(ui.screen==mc::DeleteWorld);ui.click(210,121);FEATURE(ui.screen==mc::WorldList&&ui.worlds[0].used);FEATURE(ui.startWorld(0,false));
    ui.open(mc::Options);ui.invert=false;int distance=g.viewDistance;ui.click(100,43);FEATURE(g.viewDistance!=distance);ui.click(100,92);FEATURE(ui.invert);ui.click(100,165);FEATURE(ui.screen==mc::Playing);
    ui.open(mc::Crafting);ui.draw();FEATURE(ui.screenshot("../CRAFT.PPM"));ui.open(mc::Playing);g.render();ui.drawAnimals();ui.draw();FEATURE(ui.screenshot("../HUD.PPM"));
    unsigned alive=0;for(int i=0;i<12;i++)if(p.animals[i].health)alive++;FEATURE(alive==12);
    // A deterministic scene makes all four passive animals visible for inspection.
    memset(g.blocks,0,sizeof g.blocks);for(int x=0;x<64;x++)for(int z=0;z<64;z++)g.set(x,30,z,mc::Grass);
    g.player.x=32;g.player.y=31;g.player.z=20;g.player.yaw=0;g.player.pitch=-.04f;
    for(int i=0;i<12;i++){p.animals[i].health=i<4?10:0;p.animals[i].kind=i%4;p.animals[i].x=28+i*2.5f;p.animals[i].y=31;p.animals[i].z=29;p.animals[i].yaw=3.14159f;}
    g.viewDistance=24;g.render();uint32_t before=2166136261U;for(int i=0;i<16000;i++)before=(before^g.frame[i])*16777619U;
    ui.drawAnimals();uint32_t after=2166136261U;for(int i=0;i<16000;i++)after=(after^g.frame[i])*16777619U;FEATURE(before!=after);ui.draw();FEATURE(ui.screenshot("../ANIMALS.PPM"));
    ui.open(mc::WorldList);ui.click(110,163);FEATURE(ui.screen==mc::DeleteWorld);ui.click(100,121);FEATURE(!ui.worlds[0].used);FILE* removed=fopen("WORLD1.SAV","rb");FEATURE(removed==0);if(removed)fclose(removed);
    unsigned green=0;for(int i=0;i<256;i++){unsigned c=g.vegetation[i];if(g.palette[c*3+1]>g.palette[c*3]&&g.palette[c*3+1]>g.palette[c*3+2])green++;}FEATURE(green>100);
    g.player.pitch=1.3f;g.player.yaw=0;g.progress.worldTicks=15000;g.render();ui.drawAnimals();ui.open(mc::Playing);ui.draw();FEATURE(ui.screenshot("../DAY.PPM"));uint8_t dayPixel=g.frame[0];
    g.progress.worldTicks=45000;FEATURE(g.night());g.render();ui.drawAnimals();ui.draw();FEATURE(ui.screenshot("../NIGHT.PPM"));FEATURE(dayPixel!=g.frame[0]);
    g.progress.worldTicks=0;for(int i=0;i<1200;i++)g.advanceClock(1.0);FEATURE(g.progress.worldTicks==0);
    g.advanceClock(600);FEATURE(g.progress.worldTicks==30000&&!g.night());g.advanceClock(90);FEATURE(g.night());g.advanceClock(420);FEATURE(!g.night());g.advanceClock(90);FEATURE(g.progress.worldTicks==0);
    for(int i=0;i<6000;i++)g.advanceClock(.2);FEATURE(g.progress.worldTicks==0);
    for(int i=0;i<72000;i++)g.advanceClock(1.0/60);FEATURE(g.progress.worldTicks==0);
    g.progress.worldTicks=12345;FEATURE(g.progress.save("CLOCK.PLY"));g.progress.worldTicks=0;FEATURE(g.progress.load("CLOCK.PLY")&&g.progress.worldTicks==12345);
    g.player.x=32;g.player.y=31;g.player.z=20;g.player.yaw=0;g.player.pitch=0;g.viewDistance=24;
    for(int kind=0;kind<7;kind++){for(int i=0;i<12;i++)p.animals[i].health=0;p.animals[0]={32,31,24,3.14159f,0,uint8_t(kind),10,0};g.progress.worldTicks=kind>=4?45000:15000;g.render();ui.drawAnimals();ui.draw();char name[24];sprintf(name,"../MODEL%d.PPM",kind);FEATURE(ui.screenshot(name));}
    memset(g.blocks,0,sizeof g.blocks);for(int i=0;i<12;i++)p.animals[i].health=0;memset(p.inventory,0,sizeof p.inventory);g.player.pitch=0;g.player.yaw=0;ui.mining=0;ui.attackAnimation=0;g.render();ui.drawAnimals();ui.draw();FEATURE(ui.screenshot("../HAND.PPM"));uint32_t handHash=2166136261U;for(int y=110;y<175;y++)for(int x=210;x<320;x++)handHash=(handHash^ui.pixels[y*320+x])*16777619U;
    g.player.pitch=1.0f;g.render();ui.drawAnimals();ui.draw();FEATURE(ui.screenshot("../HANDUP.PPM"));uint32_t upHash=2166136261U;for(int y=110;y<175;y++)for(int x=210;x<320;x++)upHash=(upHash^ui.pixels[y*320+x])*16777619U;FEATURE(handHash==upHash);
    ui.attackAnimation=.5f;g.render();ui.drawAnimals();ui.draw();FEATURE(ui.screenshot("../PUNCH.PPM"));
    FEATURE(ui.splashVariants()==226);ui.open(mc::MainMenu);ui.uiTime=0;ui.draw();uint32_t menuHash=2166136261U;for(int i=0;i<64000;i++)menuHash=(menuHash^ui.pixels[i])*16777619U;ui.uiTime=.25f;ui.draw();uint32_t pulseHash=2166136261U;for(int i=0;i<64000;i++)pulseHash=(pulseHash^ui.pixels[i])*16777619U;FEATURE(menuHash!=pulseHash);
    ui.open(mc::Inventory);ui.mouseX=70;ui.mouseY=30;ui.draw();FEATURE(ui.screenshot("../LOOKLEFT.PPM"));uint32_t leftHash=2166136261U;for(int y=27;y<97;y++)for(int x=99;x<147;x++)leftHash=(leftHash^ui.pixels[y*320+x])*16777619U;ui.mouseX=175;ui.mouseY=110;ui.draw();FEATURE(ui.screenshot("../LOOKRIGHT.PPM"));uint32_t rightHash=2166136261U;for(int y=27;y<97;y++)for(int x=99;x<147;x++)rightHash=(rightHash^ui.pixels[y*320+x])*16777619U;FEATURE(leftHash!=rightHash);
    ui.open(mc::Playing);g.player.pitch=0;ui.attackAnimation=0;for(int i=0;i<4;i++){p.inventory[0]={uint16_t(i==0?17:i==1?268:i==2?270:280),1,0,0};p.slot=0;g.render();ui.drawAnimals();ui.draw();char name[24];sprintf(name,"../HELD%d.PPM",i);FEATURE(ui.screenshot(name));}ui.attackAnimation=.5f;g.render();ui.drawAnimals();ui.draw();FEATURE(ui.screenshot("../HELDSWNG.PPM"));
    fprintf(report,"FEATURE_CHECKS=%d FEATURE_FAILURES=%d RECIPE_COUNT=%u\n",checks,failed,count);
#undef FEATURE
    return failed;
}
#endif
