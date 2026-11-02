#include "engine.hpp"
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>

namespace mc {
static uint32_t hash(uint32_t n) { n^=n>>16; n*=0x7feb352dU; n^=n>>15; n*=0x846ca68bU; return n^(n>>16); }
static int noise(int x,int z,uint32_t seed) { return int(hash(uint32_t(x)*374761393U+uint32_t(z)*668265263U+seed)%13); }
static int terrain(int x,int z,uint32_t seed) {
    int a=x/8,b=z/8,u=x%8,v=z%8;
    return 24+((noise(a,b,seed)*(8-u)+noise(a+1,b,seed)*u)*(8-v)
              +(noise(a,b+1,seed)*(8-u)+noise(a+1,b+1,seed)*u)*v)/64;
}
Game::Game():selected(Stone) { memset(blocks,0,sizeof blocks); memset(atlas,0,sizeof atlas); memset(palette,0,sizeof palette); memset(alpha,0,sizeof alpha); memset(frame,0,sizeof frame); memset(shade,0,sizeof shade); memset(&player,0,sizeof player); }
unsigned Game::index(int x,int y,int z) {
    return unsigned(((z>>4)*4+(x>>4))*CHUNK_SIZE+((x&15)<<11)+((z&15)<<7)+y);
}
uint8_t Game::get(int x,int y,int z) const {
    if(y>=WORLD_HEIGHT) return Air;
    if(x<0||z<0||x>=WORLD_SIZE||z>=WORLD_SIZE||y<0) return Stone;
    return blocks[index(x,y,z)];
}
bool Game::set(int x,int y,int z,uint8_t b) {
    if(x<0||z<0||x>=WORLD_SIZE||z>=WORLD_SIZE||y<=0||y>=WORLD_HEIGHT) return false;
    blocks[index(x,y,z)]=b; return true;
}
void Game::generate(uint32_t seed) {
    memset(blocks,0,sizeof blocks);
    for(int x=0;x<WORLD_SIZE;x++) for(int z=0;z<WORLD_SIZE;z++) {
        int h=terrain(x,z,seed);
        for(int y=0;y<=h;y++) blocks[index(x,y,z)]=y==h?Grass:(y>h-4?Dirt:Stone);
    }
    for(int x=4;x<WORLD_SIZE-4;x++) for(int z=4;z<WORLD_SIZE-4;z++) {
        if(hash(unsigned(x*179+z*812)+seed)%173 || (x>28&&x<36&&z>28&&z<36)) continue;
        int h=terrain(x,z,seed)+1;
        for(int y=0;y<5;y++) set(x,h+y,z,Log);
        for(int dx=-2;dx<=2;dx++) for(int dz=-2;dz<=2;dz++) for(int dy=3;dy<=5;dy++)
            if((dx||dz||dy==5)&&get(x+dx,h+dy,z+dz)==Air) set(x+dx,h+dy,z+dz,Leaves);
    }
    player.x=32.5f;player.z=32.5f;player.y=float(terrain(32,32,seed)+1);
    player.yaw=0.3f;player.pitch=-0.12f;player.vy=0;player.grounded=true;selected=Stone;
}
uint8_t Game::nearest(int r,int g,int b) const {
    unsigned best=UINT_MAX;int found=0;
    for(int i=0;i<256;i++) {
        int dr=r-palette[i*3],dg=g-palette[i*3+1],db=b-palette[i*3+2];
        unsigned d=unsigned(dr*dr+dg*dg+db*db);
        if(d<best) { best=d;found=i; }
    }
    return uint8_t(found);
}
void Game::buildShades() {
    for(int i=0;i<256;i++) for(int s=0;s<3;s++) {
        int light=s==1?256:(s==0?190:220);
        shade[s][i]=nearest(palette[i*3]*light/256,palette[i*3+1]*light/256,palette[i*3+2]*light/256);
    }
}
bool Game::loadAtlas(const char* file) {
    FILE* f=fopen(file,"rb");if(!f)return false;
    char magic[8];bool ok=fread(magic,1,8,f)==8 && !memcmp(magic,"MCATLAS2",8);
    ok=ok&&fread(palette,1,768,f)==768&&fread(atlas,1,65536,f)==65536&&fread(alpha,1,256,f)==256;
    fclose(f);if(ok)buildShades();return ok;
}
// Save format: explicit little-endian header, floats and chunk bytes; no struct padding.
static void put32(FILE* f,uint32_t v) { for(int i=0;i<4;i++)fputc(int((v>>(i*8))&255),f); }
static uint32_t get32(FILE* f) { uint32_t v=0;for(int i=0;i<4;i++){ int b=fgetc(f);if(b<0)return 0;v|=uint32_t(b)<<(i*8); }return v; }
static uint32_t checksum(const uint8_t* p,unsigned n) { uint32_t h=2166136261U;while(n--)h=(h^*p++)*16777619U;return h; }
bool Game::save(const char* file) const {
    // Commit via a temporary file so an incomplete write does not replace the save.
    char temporary[260],stem[260];if(strlen(file)>250)return false;
    strcpy(stem,file);char* extension=strrchr(stem,'.');if(extension)*extension=0;
    sprintf(temporary,"%s.TMP",stem);FILE* f=fopen(temporary,"wb");if(!f)return false;
    fwrite("MCDOSS01",1,8,f);put32(f,WORLD_BYTES);put32(f,checksum(blocks,WORLD_BYTES));
    float state[5]={player.x,player.y,player.z,player.yaw,player.pitch};
    for(int i=0;i<5;i++){uint32_t bits;memcpy(&bits,&state[i],4);put32(f,bits);}
    put32(f,selected);bool ok=fwrite(blocks,1,WORLD_BYTES,f)==WORLD_BYTES;
    if(ferror(f))ok=false;if(fclose(f)!=0)ok=false;
    if(!ok){remove(temporary);return false;}
    // DOS rename does not replace an existing file. Preserve it until new data is complete.
    char backup[260];sprintf(backup,"%s.BAK",stem);remove(backup);
    FILE* existing=fopen(file,"rb");if(existing){fclose(existing);if(rename(file,backup)!=0)return false;}
    if(rename(temporary,file)!=0){rename(backup,file);return false;}return true;
}
bool Game::load(const char* file) {
    FILE* f=fopen(file,"rb");if(!f)return false;
    char magic[8];bool ok=fread(magic,1,8,f)==8&&!memcmp(magic,"MCDOSS01",8);
    unsigned bytes=get32(f),expected=get32(f);float state[5];
    for(int i=0;i<5;i++){uint32_t bits=get32(f);memcpy(&state[i],&bits,4);}
    unsigned choice=get32(f);
    // Validate length/checksum first, in a 1 KiB streaming buffer, before touching the world.
    uint8_t buf[1024];uint32_t h=2166136261U;unsigned count=0;
    while(ok&&count<WORLD_BYTES){unsigned n=unsigned(fread(buf,1,sizeof buf,f));if(!n){ok=false;break;}for(unsigned i=0;i<n;i++)h=(h^buf[i])*16777619U;count+=n;}
    ok=ok&&bytes==WORLD_BYTES&&count==WORLD_BYTES&&h==expected&&fgetc(f)==EOF;
    for(int i=0;i<5;i++)if(!(state[i]>-100000.f&&state[i]<100000.f))ok=false;
    ok=ok&&state[0]>=0.3f&&state[0]<63.7f&&state[2]>=0.3f&&state[2]<63.7f&&state[1]>=1&&state[1]<126;
    ok=ok&&(choice==Stone||choice==Dirt||choice==Cobble||choice==Planks||choice==Sand||choice==Log||choice==Glass);
    if(ok){fseek(f,40,SEEK_SET);ok=fread(blocks,1,WORLD_BYTES,f)==WORLD_BYTES;}
    fclose(f);if(!ok)return false;
    player.x=state[0];player.y=state[1];player.z=state[2];player.yaw=state[3];player.pitch=state[4];player.vy=0;player.grounded=false;selected=uint8_t(choice);return true;
}
bool Game::collides(float x,float y,float z) const {
    for(int a=int(floorf(x-.28f));a<=int(floorf(x+.28f));a++)
    for(int b=int(floorf(y+.001f));b<=int(floorf(y+1.7f));b++)
    for(int c=int(floorf(z-.28f));c<=int(floorf(z+.28f));c++)if(get(a,b,c)!=Air)return true;
    return false;
}
void Game::update(float forward,float strafe,bool jump,float dt) {
    if(dt<=0)return;if(dt>.05f)dt=.05f;
    float norm=sqrtf(forward*forward+strafe*strafe);if(norm>1){forward/=norm;strafe/=norm;}
    float sx=sinf(player.yaw),cz=cosf(player.yaw);
    float dx=(sx*forward+cz*strafe)*3.5f*dt,dz=(cz*forward-sx*strafe)*3.5f*dt;
    if(!collides(player.x+dx,player.y,player.z))player.x+=dx;
    if(!collides(player.x,player.y,player.z+dz))player.z+=dz;
    if(jump&&player.grounded){player.vy=7.f;player.grounded=false;}
    player.vy-=18.f*dt;float distance=player.vy*dt;int steps=int(fabsf(distance)/.15f)+1;
    player.grounded=false;
    for(int i=0;i<steps;i++) {
        float next=player.y+distance/steps;
        if(collides(player.x,next,player.z)){if(distance<0)player.grounded=true;player.vy=0;break;}
        player.y=next;
    }
}
static int tileFor(int b,int axis) {
    switch(b){case Grass:return axis==1?0:3;case Dirt:return 2;case Stone:return 1;
    case Cobble:return 16;case Planks:return 4;case Sand:return 18;case Log:return axis==1?21:20;
    case Leaves:return 52;case Glass:return 49;default:return 1;}
}
Hit Game::trace(int dx,int dy,int dz,int maxDistance,bool sample) const {
    Hit hit={false,0,0,0,0,0,0,0,0};
    int origin[3]={int(player.x*65536),int((player.y+1.6f)*65536),int(player.z*65536)};
    int d[3]={dx,dy,dz},pos[3]={origin[0]>>16,origin[1]>>16,origin[2]>>16},step[3],delta[3],side[3];
    for(int a=0;a<3;a++) {
        step[a]=d[a]<0?-1:1;
        int absdir=d[a]<0?-d[a]:d[a];
        delta[a]=absdir?67108864/absdir:INT_MAX/4;
        int fraction=origin[a]&65535;
        side[a]=absdir?((step[a]<0?fraction:65536-fraction)*1024)/absdir:INT_MAX/4;
    }
    for(int count=0;count<128;count++) {
        int axis=side[0]<side[1]?(side[0]<side[2]?0:2):(side[1]<side[2]?1:2);
        int t=side[axis];if(t>maxDistance*65536)return hit;
        pos[axis]+=step[axis];side[axis]+=delta[axis];
        uint8_t b=get(pos[0],pos[1],pos[2]);if(b==Air)continue;
        int tile=tileFor(b,axis),u,v;
        int xyz[3];for(int a=0;a<3;a++)xyz[a]=(origin[a]>>4)+((t>>4)*d[a])/1024;
        if(axis==1){u=(xyz[0]>>8)&15;v=(xyz[2]>>8)&15;}
        else{u=(xyz[axis==0?2:0]>>8)&15;v=15-((xyz[1]>>8)&15);}
        uint8_t color=atlas[((tile>>4)*16+v)*256+(tile&15)*16+u];
        // VGA has no alpha blending: retain source alpha and use ordered coverage dithering.
        static const uint8_t coverage[16]={0,8,2,10,12,4,14,6,3,11,1,9,15,7,13,5};
        if(sample&&(color==0||alpha[color]<=coverage[(v&3)*4+(u&3)]*16))continue;
        hit.found=true;hit.x=pos[0];hit.y=pos[1];hit.z=pos[2];hit.block=b;
        hit.nx=axis==0?-step[0]:0;hit.ny=axis==1?-step[1]:0;hit.nz=axis==2?-step[2]:0;
        hit.color=shade[axis][color];return hit;
    }
    return hit;
}
Hit Game::target() const {
    float c=cosf(player.pitch);return trace(int(sinf(player.yaw)*c*1024),int(sinf(player.pitch)*1024),int(cosf(player.yaw)*c*1024),5);
}
bool Game::mine(){Hit h=target();return h.found&&set(h.x,h.y,h.z,Air);}
bool Game::place(){Hit h=target();if(!h.found)return false;int x=h.x+h.nx,y=h.y+h.ny,z=h.z+h.nz;
    if(get(x,y,z)!=Air||!set(x,y,z,selected))return false;
    if(collides(player.x,player.y,player.z)){set(x,y,z,Air);return false;}return true;
}
void Game::render() {
    float sy=sinf(player.yaw),cy=cosf(player.yaw),sp=sinf(player.pitch),cp=cosf(player.pitch);
    int forward[3]={int(sy*cp*1024),int(sp*1024),int(cy*cp*1024)};
    int right[3]={int(cy*1024),0,int(-sy*1024)},up[3]={int(-sy*sp*1024),int(cp*1024),int(-cy*sp*1024)};
    uint8_t sky=nearest(110,165,225),white=nearest(255,255,255);
    for(int y=0;y<HEIGHT;y++) {
        int row=(HEIGHT-1-y*2)*1024/WIDTH;
        int base[3];for(int a=0;a<3;a++)base[a]=forward[a]+up[a]*row/1024;
        for(int x=0;x<WIDTH;x++) {
            int col=(x*2-WIDTH+1)*1024/WIDTH;
            Hit h=trace(base[0]+right[0]*col/1024,base[1],base[2]+right[2]*col/1024,24,true);
            frame[y*WIDTH+x]=h.found?h.color:sky;
        }
    }
    for(int i=-3;i<=3;i++){frame[(HEIGHT/2)*WIDTH+WIDTH/2+i]=white;frame[(HEIGHT/2+i)*WIDTH+WIDTH/2]=white;}
    const uint8_t choices[7]={Stone,Dirt,Cobble,Planks,Sand,Log,Glass};
    for(int i=0;i<7;i++)for(int y=0;y<9;y++)for(int x=0;x<9;x++) {
        int tile=tileFor(choices[i],2);uint8_t c=atlas[((tile>>4)*16+y*16/9)*256+(tile&15)*16+x*16/9];
        if(selected==choices[i]&&(x==0||y==0||x==8||y==8))c=white;
        frame[(HEIGHT-11+y)*WIDTH+45+i*10+x]=c;
    }
}
Memory Game::memory(){Memory m={WORLD_BYTES,65536,768,WIDTH*HEIGHT,3*256};return m;}
}
