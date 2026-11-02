#ifndef DOS_CHECKS_HPP
#define DOS_CHECKS_HPP
#include "engine.hpp"
#include <stdio.h>
#include <math.h>
#include <string.h>

inline int checkGame(mc::Game& g,FILE* report) {
    int failures=0,checks=0;
#define CHECK(x) do { ++checks; if(!(x)){fprintf(report,"FAIL line %d: %s\n",__LINE__,#x);++failures;} } while(0)
    g.generate(42);g.progress.enabled=false;
    CHECK(sizeof(g)<700000);
    CHECK(mc::Game::index(0,0,0)==0);
    CHECK(mc::Game::index(15,127,15)==32767);
    CHECK(mc::Game::index(16,0,0)==32768);
    CHECK(g.get(32,0,32)==mc::Stone);
    CHECK(!g.set(32,0,32,mc::Air));
    CHECK(!g.collides(g.player.x,g.player.y,g.player.z));
    float ground=g.player.y;
    for(int i=0;i<200;i++)g.update(0,0,false,.02f);
    CHECK(g.player.grounded&&fabsf(g.player.y-ground)<.02f);
    g.update(0,0,true,.02f);
    CHECK(g.player.vy>0&&g.player.y>ground);
    for(int i=0;i<200;i++)g.update(0,0,false,.02f);
    CHECK(g.player.grounded&&fabsf(g.player.y-ground)<.04f);
    // Isolated, known geometry exercises picking, mine/place and self-intersection.
    memset(g.blocks,0,sizeof g.blocks);
    g.player.x=10.5f;g.player.y=10;g.player.z=10.5f;g.player.yaw=0;g.player.pitch=0;
    CHECK(g.set(10,11,13,mc::Stone));
    mc::Hit h=g.target();CHECK(h.found&&h.x==10&&h.y==11&&h.z==13&&h.nz==-1);
    g.selected=mc::Planks;CHECK(g.place());CHECK(g.get(10,11,12)==mc::Planks);
    CHECK(g.mine());CHECK(g.get(10,11,12)==mc::Air);
    g.set(10,11,13,mc::Air);g.set(10,11,11,mc::Stone);
    CHECK(!g.place());CHECK(g.get(10,11,10)==mc::Air);
    // Save/reload edits, then reject a corrupt save without replacing the current world.
    g.generate(123);g.progress.enabled=false;g.set(4,80,4,mc::Glass);g.selected=mc::Glass;
    CHECK(g.save("TEST.SAV"));g.generate(999);g.progress.enabled=false;CHECK(g.load("TEST.SAV"));
    CHECK(g.get(4,80,4)==mc::Glass&&g.selected==mc::Glass);
    FILE* bad=fopen("TEST.SAV","r+b");CHECK(bad!=0);
    if(bad){fseek(bad,100,SEEK_SET);int b=fgetc(bad);fseek(bad,100,SEEK_SET);fputc(b^255,bad);fclose(bad);}
    CHECK(!g.load("TEST.SAV"));CHECK(g.get(4,80,4)==mc::Glass);
    remove("TEST.SAV");remove("TEST.BAK");remove("TEST.TMP");remove("TEST.PLY");remove("TEST.PBK");
    g.generate(42);g.progress.enabled=false;g.render();
    unsigned different=0;for(int i=1;i<mc::WIDTH*mc::HEIGHT;i++)if(g.frame[i]!=g.frame[0])different++;
    CHECK(different>500);
    fprintf(report,"CHECKS=%d FAILURES=%d GAME_BYTES=%lu\n",checks,failures,(unsigned long)sizeof(g));
#undef CHECK
    return failures;
}
inline bool writeFrame(const mc::Game& g,const char* name) {
    FILE* f=fopen(name,"wb");if(!f)return false;
    fprintf(f,"P6\n%d %d\n255\n",mc::WIDTH,mc::HEIGHT);
    for(int i=0;i<mc::WIDTH*mc::HEIGHT;i++)fwrite(g.palette+g.frame[i]*3,1,3,f);
    bool ok=!ferror(f);fclose(f);return ok;
}
#endif
