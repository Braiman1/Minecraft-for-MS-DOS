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
Game::Game():viewDistance(24),selected(Stone) { memset(blocks,0,sizeof blocks); memset(atlas,0,sizeof atlas); memset(palette,0,sizeof palette); memset(alpha,0,sizeof alpha); memset(frame,0,sizeof frame); memset(shade,0,sizeof shade); memset(&player,0,sizeof player); }
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
    progress.reset();
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
    progress.fallStart=player.y;
    for(int i=0;i<12;i++){Animal& a=progress.animals[i];int x=6+int(hash(seed+unsigned(i)*71)%52),z=6+int(hash(seed+unsigned(i)*137)%52);a.x=x+.5f;a.z=z+.5f;a.y=float(terrain(x,z,seed)+1);a.kind=i%4;a.health=a.kind==2?8:(a.kind==3?4:10);a.yaw=float(i);a.turn=unsigned(i)*17;}
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
    if(rename(temporary,file)!=0){rename(backup,file);return false;}
    char profile[260];sprintf(profile,"%s.PLY",stem);return progress.save(profile);
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
    player.x=state[0];player.y=state[1];player.z=state[2];player.yaw=state[3];player.pitch=state[4];player.vy=0;player.grounded=false;selected=uint8_t(choice);
    char profile[260];if(strlen(file)>250)return false;strcpy(profile,file);char* extension=strrchr(profile,'.');if(extension)*extension=0;strcat(profile,".PLY");progress.reset();FILE* existingProfile=fopen(profile,"rb");bool present=existingProfile!=0;if(existingProfile)fclose(existingProfile);
    if(!progress.load(profile)){char backupProfile[260];strcpy(backupProfile,profile);strcpy(strrchr(backupProfile,'.'),".PBK");if(!progress.load(backupProfile)&&present)return false;}
    progress.fallStart=player.y;return true;
}
bool Game::collides(float x,float y,float z) const {
    for(int a=int(floorf(x-.28f));a<=int(floorf(x+.28f));a++)
    for(int b=int(floorf(y+.001f));b<=int(floorf(y+1.7f));b++)
    for(int c=int(floorf(z-.28f));c<=int(floorf(z+.28f));c++)if(get(a,b,c)!=Air)return true;
    return false;
}
void Game::update(float forward,float strafe,bool jump,float dt) {
    if(progress.enabled&&!progress.health)return;
    if(dt<=0)return;if(dt>.05f)dt=.05f;
    float norm=sqrtf(forward*forward+strafe*strafe);if(norm>1){forward/=norm;strafe/=norm;}
    float oldX=player.x,oldZ=player.z;
    float sx=sinf(player.yaw),cz=cosf(player.yaw);
    float dx=(sx*forward+cz*strafe)*3.5f*dt,dz=(cz*forward-sx*strafe)*3.5f*dt;
    if(!collides(player.x+dx,player.y,player.z))player.x+=dx;
    if(!collides(player.x,player.y,player.z+dz))player.z+=dz;
    if(jump&&player.grounded){player.vy=7.f;player.grounded=false;progress.stats.jumps++;}
    player.vy-=18.f*dt;float distance=player.vy*dt;int steps=int(fabsf(distance)/.15f)+1;
    player.grounded=false;
    for(int i=0;i<steps;i++) {
        float next=player.y+distance/steps;
        if(collides(player.x,next,player.z)){if(distance<0)player.grounded=true;player.vy=0;break;}
        player.y=next;
    }
    if(player.y>progress.fallStart)progress.fallStart=player.y;
    if(player.grounded){int damage=int(progress.fallStart-player.y-3.f);if(damage>0)progress.hurt(unsigned(damage));progress.fallStart=player.y;}
    progress.stats.ticks++;float movedX=player.x-oldX,movedZ=player.z-oldZ;float walked=progress.walkingRemainder+sqrtf(movedX*movedX+movedZ*movedZ)*100;unsigned whole=unsigned(walked);progress.stats.centimeters+=whole;progress.walkingRemainder=walked-whole;
    updateAnimals(dt);
}
static int tileFor(int b,int axis) {
    switch(b){case Grass:return axis==1?0:3;case Dirt:return 2;case Stone:return 1;
    case Cobble:return 16;case Planks:return 4;case Sand:return 18;case Log:return axis==1?21:20;
    case Leaves:return 52;case Glass:return 49;case 58:return axis==1?43:59;case 61:return axis==1?62:45;case 54:return 26;case 35:return 64;case 50:return 80;default:return 1;}
}
Hit Game::trace(int dx,int dy,int dz,int maxDistance,bool sample) const {
    Hit hit={false,0,0,0,0,0,0,0,0,0};
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
        hit.color=shade[axis][color];hit.distance=t;return hit;
    }
    return hit;
}
Hit Game::target() const {
    float c=cosf(player.pitch);return trace(int(sinf(player.yaw)*c*1024),int(sinf(player.pitch)*1024),int(cosf(player.yaw)*c*1024),5);
}
bool Game::mine(){
    Hit h=target();if(!h.found||h.y<=0)return false;
    unsigned drop=h.block==Grass?unsigned(Dirt):(h.block==Stone?unsigned(Cobble):unsigned(h.block)),tool=progress.inventory[progress.slot].id;
    if(h.block==Glass)drop=0;
    if(progress.enabled){
        bool pick=tool==270||tool==274||tool==257||tool==278||tool==285;
        if((h.block==Stone||h.block==4||h.block==61||h.block==15||h.block==14||h.block==56)&&!pick)drop=0;
        if(h.block==Leaves)drop=hash(progress.stats.blocksMined)%20==0?6:0;
        if(drop&&!progress.add(drop))return false;
    }
    if(!set(h.x,h.y,h.z,Air))return false;
    progress.stats.blocksMined++;progress.stats.mined[h.block]++;
    if(h.block==Log)progress.unlock(GetWood);
    if(progress.enabled&&tool>=256&&tool<=294){Stack& item=progress.inventory[progress.slot];unsigned life=Progress::durability(tool);if(++item.wear>=life)progress.take(progress.slot);}
    return true;
}
float Game::breakingTime(const Hit& h)const{
    if(!progress.enabled)return .05f;
    unsigned tool=progress.inventory[progress.slot].id;
    bool pick=tool==270||tool==274||tool==257||tool==278||tool==285;
    bool axe=tool==271||tool==275||tool==258||tool==279||tool==286;
    bool shovel=tool==269||tool==273||tool==256||tool==277||tool==284;
    bool rock=h.block==Stone||h.block==Cobble||h.block==61||h.block==14||h.block==15||h.block==16||h.block==56;
    float hardness=rock?(h.block==Stone?1.5f:2.f):(h.block==Log||h.block==Planks||h.block==58?2.f:h.block==Leaves?.2f:h.block==Glass?.3f:.5f);
    float speed=1;
    if((rock&&pick)||((h.block==Log||h.block==Planks||h.block==58)&&axe)||((h.block==Dirt||h.block==Grass||h.block==Sand)&&shovel))speed=tool==285||tool==284||tool==286?12:tool==278||tool==277||tool==279?8:tool==257||tool==256||tool==258?6:tool==274||tool==273||tool==275?4:2;
    return hardness*(rock&&!pick?5.f:1.5f)/speed;
}
bool Game::place(){Hit h=target();if(!h.found)return false;int x=h.x+h.nx,y=h.y+h.ny,z=h.z+h.nz;
    unsigned material=progress.enabled?progress.inventory[progress.slot].id:selected;
    if(!material||material>=256||material==6||material==50)return false;
    if(get(x,y,z)!=Air||!set(x,y,z,uint8_t(material)))return false;
    if(collides(player.x,player.y,player.z)){set(x,y,z,Air);return false;}if(progress.enabled)progress.take(progress.slot);progress.stats.blocksPlaced++;progress.stats.used[material]++;return true;
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
            Hit h=trace(base[0]+right[0]*col/1024,base[1],base[2]+right[2]*col/1024,viewDistance,true);
            frame[y*WIDTH+x]=h.found?h.color:sky;depth[y*WIDTH+x]=h.found?uint16_t(h.distance>>8):65535;
        }
    }
    for(int i=-3;i<=3;i++){frame[(HEIGHT/2)*WIDTH+WIDTH/2+i]=white;frame[(HEIGHT/2+i)*WIDTH+WIDTH/2]=white;}
    const uint8_t choices[7]={Stone,Dirt,Cobble,Planks,Sand,Log,Glass};
    if(!progress.enabled)for(int i=0;i<7;i++)for(int y=0;y<9;y++)for(int x=0;x<9;x++) {
        int tile=tileFor(choices[i],2);uint8_t c=atlas[((tile>>4)*16+y*16/9)*256+(tile&15)*16+x*16/9];
        if(selected==choices[i]&&(x==0||y==0||x==8||y==8))c=white;
        frame[(HEIGHT-11+y)*WIDTH+45+i*10+x]=c;
    }
}
void Game::updateAnimals(float dt){
    for(int i=0;i<12;i++){Animal& a=progress.animals[i];if(!a.health)continue;
        if(!a.turn--){a.turn=80+hash(progress.stats.ticks+unsigned(i)*19)%180;a.yaw=float(hash(progress.stats.ticks+unsigned(i)*71)%628)/100;}
        float x=a.x+sinf(a.yaw)*dt*.65f,z=a.z+cosf(a.yaw)*dt*.65f;
        if(x>1&&x<63&&z>1&&z<63&&get(int(x),int(a.y),int(z))==Air&&get(int(x),int(a.y+1),int(z))==Air&&get(int(x),int(a.y-1),int(z))!=Air){a.x=x;a.z=z;}
        else a.yaw+=1.5f;
        if(get(int(a.x),int(a.y-.05f),int(a.z))==Air)a.y-=dt*3;
    }
}
bool Game::attackAnimal(bool interact){
    float sx=sinf(player.yaw),cz=cosf(player.yaw);int target=-1;float closest=3;
    for(int i=0;i<12;i++){Animal& a=progress.animals[i];if(!a.health)continue;float dx=a.x-player.x,dz=a.z-player.z,along=dx*sx+dz*cz,across=fabsf(dx*cz-dz*sx);if(along>0&&along<closest&&across<.65f&&fabsf(a.y-player.y)<2){Hit wall=trace(int(sx*1024),0,int(cz*1024),3);if(!wall.found||float(wall.distance)/65536>along){closest=along;target=i;}}}
    if(target<0)return false;Animal& a=progress.animals[target];unsigned tool=progress.inventory[progress.slot].id;unsigned damage=tool==268||tool==283?4:tool==272?5:tool==267?6:tool==276?7:
        tool==271||tool==286?3:tool==275?4:tool==258?5:tool==279?6:
        tool==270||tool==285?2:tool==274?3:tool==257?4:tool==278?5:
        tool==273?2:tool==256?3:tool==277?4:1;
    if(interact){if(a.kind==1&&tool==325){progress.take(progress.slot);progress.add(335);progress.stats.used[325]++;return true;}if(a.kind==2&&tool==359&&!a.sheared){if(!progress.add(35,2))return false;a.sheared=1;if(++progress.inventory[progress.slot].wear>=238)progress.take(progress.slot);return true;}return false;}
    if(damage<a.health){a.health-=damage;return true;}a.health=0;progress.stats.animalsKilled++;
    if(a.kind==0)progress.add(319,1+hash(progress.stats.ticks)%2);
    if(a.kind==1){progress.add(334,1+hash(progress.stats.ticks)%2);progress.unlock(KillCow);}
    if(a.kind==2&&!a.sheared)progress.add(35);
    if(a.kind==3)progress.add(288,1+hash(progress.stats.ticks)%2);
    return true;
}
void Game::respawn(){
    player.x=32.5f;player.z=32.5f;player.y=126;
    while(player.y>1&&get(32,int(player.y)-1,32)==Air)player.y--;
    player.vy=0;progress.health=20;progress.fallStart=player.y;memset(progress.inventory,0,sizeof progress.inventory);memset(progress.grid,0,sizeof progress.grid);
}
Memory Game::memory(){Memory m={WORLD_BYTES,65536,768,WIDTH*HEIGHT,3*256};return m;}
}
