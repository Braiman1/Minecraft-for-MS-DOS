#include "progress.hpp"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "recipes.inc"
#include "item_info.inc"
namespace mc {
Progress::Progress(){reset();}
void Progress::reset(){enabled=true;health=20;slot=0;achievements=0;fallStart=0;walkingRemainder=0;memset(inventory,0,sizeof inventory);memset(grid,0,sizeof grid);memset(&stats,0,sizeof stats);memset(animals,0,sizeof animals);}
unsigned Progress::maxStack(unsigned id){if(id==357)return 8;if(id==332||id==344)return 16;return (id>=256&&id<=259)||(id>=267&&id<=279)||(id>=283&&id<=286)||(id>=290&&id<=294)||(id>=298&&id<=317)||id==260||id==261||id==282||id==297||id==319||id==320||(id>=322&&id<=330)||id==333||id==335||id==342||id==343||id==346||id==349||id==350||id==354||id==355||id==358||id==359?1:64;}
unsigned Progress::durability(unsigned tool){return tool==270||tool==269||tool==271||tool==268||tool==290?59:tool==274||tool==273||tool==275||tool==272||tool==291?131:tool==278||tool==277||tool==279||tool==276||tool==293?1561:tool==285||tool==284||tool==286||tool==283||tool==294?32:250;}
bool Progress::add(unsigned id,unsigned count,unsigned data){
    if(!id||id>=360||!count||data>15)return false;
    unsigned space=0,limit=maxStack(id);
    for(int i=0;i<36;i++)if(!inventory[i].id)space+=limit;else if(inventory[i].id==id&&inventory[i].data==data&&!inventory[i].wear)space+=limit-inventory[i].count;
    if(space<count)return false;
    for(int pass=0;pass<2;pass++)for(int i=0;i<36&&count;i++) {
        Stack& s=inventory[i];if((pass==0&&s.id==id&&s.data==data&&!s.wear)||(pass==1&&!s.id)){
            unsigned n=limit-s.count;if(n>count)n=count;s.id=uint16_t(id);s.data=uint8_t(data);s.count+=n;count-=n;
        }
    }
    return true;
}
bool Progress::take(unsigned i,unsigned n){if(i>=36||inventory[i].count<n)return false;inventory[i].count-=n;if(!inventory[i].count)memset(&inventory[i],0,sizeof(Stack));return true;}
bool Progress::put(const Stack& s){if(!s.count)return true;if(!s.wear)return add(s.id,s.count,s.data);if(s.count!=1)return false;for(int i=0;i<36;i++)if(!inventory[i].count){inventory[i]=s;return true;}return false;}
void Progress::unlock(Achievement a){
    if(unsigned(a)>=16)return;
    static const int parent[16]={-1,0,1,2,3,4,2,6,6,3,5,5,2,12,12,14};
    if(parent[a]<0||(achievements&(1U<<parent[a])))achievements|=1U<<a;
}
void Progress::hurt(unsigned n){if(!enabled||!health)return;stats.damageTaken+=n;if(n>=health){health=0;stats.deaths++;}else health-=n;}
bool Progress::eat(){if(health>=20||!health)return false;unsigned id=inventory[slot].id;int heal=id==322?20:id==319?3:id==320?8:id==297?5:id==260?4:id==282?10:id==349?2:id==350?5:id==357?1:0;if(!heal)return false;take(slot);health=uint8_t(health+heal>20?20:health+heal);if(id==282)add(281);stats.used[id]++;return true;}
const Recipe* Progress::recipes(unsigned& count){count=sizeof(recipeTable)/sizeof(recipeTable[0]);return recipeTable;}
const Recipe* Progress::match(int size) const {
    unsigned count;const Recipe* table=recipes(count);
    for(unsigned r=0;r<count;r++) {
        const Recipe& recipe=table[r];if(recipe.width>size||recipe.height>size)continue;
        if(!recipe.width){bool used[9]={false},same=true;for(int i=0;i<9;i++)if(grid[i].count){if(i%3>=size||i/3>=size){same=false;break;}bool found=false;for(int j=0;j<9;j++){unsigned v=recipe.cells[j];if(!used[j]&&(v&1023)==grid[i].id&&(!(v>>10)||((v>>10)-1)==grid[i].data)){used[j]=true;found=true;break;}}if(!found)same=false;}for(int i=0;i<9;i++)if(recipe.cells[i]&&!used[i])same=false;if(same)return &recipe;continue;}
        for(int oy=0;oy<=size-recipe.height;oy++)for(int ox=0;ox<=size-recipe.width;ox++)for(int mirror=0;mirror<2;mirror++) {
            bool same=true;
            for(int y=0;y<3;y++)for(int x=0;x<3;x++) {
                unsigned expected=0;
                if(x>=ox&&x<ox+recipe.width&&y>=oy&&y<oy+recipe.height)expected=recipe.cells[(y-oy)*3+(mirror?recipe.width-1-(x-ox):x-ox)];
                const Stack& s=grid[y*3+x];if((s.count?s.id:0)!=(expected&1023)||((expected>>10)&&s.data!=(expected>>10)-1))same=false;
            }
            if(same)return &recipe;
        }
    }
    return 0;
}
bool Progress::craft(int size,Stack* destination){
    const Recipe* r=match(size);if(!r)return false;
    Stack before[36],held={0,0,0,0};memcpy(before,inventory,sizeof before);
    if(destination){held=*destination;if(held.count&&(held.id!=r->output||held.data!=r->data||held.wear))return false;if(unsigned(held.count)+r->count>maxStack(r->output))return false;destination->id=r->output;destination->data=r->data;destination->count+=r->count;destination->wear=0;}
    else if(!add(r->output,r->count,r->data))return false;
    if(r->output==354&&!add(325,3)){memcpy(inventory,before,sizeof before);if(destination)*destination=held;return false;}
    for(int i=0;i<9;i++)if(grid[i].count){grid[i].count--;if(!grid[i].count)memset(&grid[i],0,sizeof(Stack));}
    stats.itemsCrafted+=r->count;stats.crafted[r->output]+=r->count;
    switch(r->output){case 58:unlock(BuildWorkbench);break;case 270:unlock(BuildPickaxe);break;case 61:unlock(BuildFurnace);break;case 290:unlock(BuildHoe);break;case 297:unlock(BakeBread);break;case 354:unlock(BakeCake);break;case 274:unlock(BetterPickaxe);break;case 268:unlock(BuildSword);break;}
    // Cake consumes three milk buckets and returns three empty buckets.
    return true;
}
bool Progress::returnGrid(){Stack original[36];memcpy(original,inventory,sizeof original);for(int i=0;i<9;i++)if(grid[i].count&&!put(grid[i])){memcpy(inventory,original,sizeof original);return false;}memset(grid,0,sizeof grid);return true;}
// A fixed-width record, explicitly serialized instead of dumping compiler-dependent structs.
static uint32_t fileHash;
static void word(FILE* f,uint32_t v){for(int i=0;i<4;i++){unsigned b=(v>>(i*8))&255;fileHash=(fileHash^b)*16777619U;fputc(int(b),f);}}
static uint32_t word(FILE* f){uint32_t v=0;for(int i=0;i<4;i++){int c=fgetc(f);if(c<0)return 0;fileHash=(fileHash^unsigned(c))*16777619U;v|=uint32_t(c)<<(i*8);}return v;}
bool Progress::save(const char* path)const{
    if(strlen(path)>250)return false;char stem[260],temporary[260],backup[260];strcpy(stem,path);char* extension=strrchr(stem,'.');if(extension)*extension=0;sprintf(temporary,"%s.PTM",stem);sprintf(backup,"%s.PBK",stem);
    FILE* f=fopen(temporary,"wb");if(!f)return false;fwrite("MCPROG02",1,8,f);fileHash=2166136261U;word(f,health);word(f,slot);word(f,achievements);word(f,enabled?1:0);
    for(int i=0;i<45;i++){const Stack& s=i<36?inventory[i]:grid[i-36];word(f,s.id);word(f,s.count);word(f,s.data);word(f,s.wear);}
    uint32_t values[sizeof(stats)/4];memcpy(values,&stats,sizeof stats);for(unsigned i=0;i<sizeof(stats)/4;i++)word(f,values[i]);
    for(int i=0;i<12;i++){const Animal& a=animals[i];float xyz[4]={a.x,a.y,a.z,a.yaw};for(int j=0;j<4;j++){uint32_t bits;memcpy(&bits,&xyz[j],4);word(f,bits);}word(f,a.turn);word(f,a.kind);word(f,a.health);word(f,a.sheared);}
    uint32_t complete=fileHash;word(f,complete);bool ok=!ferror(f);if(fclose(f))ok=false;if(!ok){remove(temporary);return false;}
    FILE* previous=fopen(path,"rb");if(previous){fclose(previous);remove(backup);if(rename(path,backup))return false;}if(rename(temporary,path)){rename(backup,path);return false;}return true;
}
bool Progress::load(const char* path){
    FILE* f=fopen(path,"rb");if(!f)return false;Progress p;char magic[8];bool ok=fread(magic,1,8,f)==8&&!memcmp(magic,"MCPROG02",8);fileHash=2166136261U;
    unsigned health=word(f),slot=word(f);p.health=uint8_t(health);p.slot=uint8_t(slot);if(health>20||slot>=9)ok=false;p.achievements=word(f);p.enabled=word(f)!=0;
    for(int i=0;i<45;i++){Stack& s=i<36?p.inventory[i]:p.grid[i-36];unsigned id=word(f),n=word(f),data=word(f),wear=word(f);if(id>=360||n>maxStack(id)||data>15||wear>65535||(!id&&n)||(!n&&id))ok=false;s.id=id;s.count=n;s.data=data;s.wear=wear;}
    uint32_t values[sizeof(p.stats)/4];for(unsigned i=0;i<sizeof(p.stats)/4;i++)values[i]=word(f);memcpy(&p.stats,values,sizeof p.stats);
    for(int i=0;i<12;i++){Animal& a=p.animals[i];float xyz[4];for(int j=0;j<4;j++){uint32_t bits=word(f);memcpy(&xyz[j],&bits,4);if(!(xyz[j]>-10000&&xyz[j]<10000))ok=false;}a.x=xyz[0];a.y=xyz[1];a.z=xyz[2];a.yaw=xyz[3];a.turn=uint16_t(word(f));a.kind=uint8_t(word(f));a.health=uint8_t(word(f));a.sheared=uint8_t(word(f));if(a.kind>3||a.health>10||a.sheared>1)ok=false;}
    uint32_t actual=fileHash,expected=word(f);ok=ok&&actual==expected&&fgetc(f)==EOF;
    fclose(f);if(ok)*this=p;return ok;
}
const char* Progress::achievementName(unsigned i){static const char* names[16]={"Taking Inventory","Getting Wood","Benchmarking","Time to Mine!","Hot Topic","Acquire Hardware","Time to Farm!","Bake Bread","The Lie","Getting an Upgrade","Delicious Fish","On A Rail","Time to Strike!","Monster Hunter","Cow Tipper","When Pigs Fly"};return i<16?names[i]:"";}
unsigned Progress::icon(unsigned id){return id<360?itemIcons[id]:0;}
const char* Progress::itemName(unsigned id){if(id<360&&itemNames[id][0])return itemNames[id];switch(id){case 1:return "Stone";case 2:return "Grass";case 3:return "Dirt";case 4:return "Cobblestone";case 5:return "Wooden Planks";case 12:return "Sand";case 17:return "Wood";case 18:return "Leaves";case 20:return "Glass";case 35:return "Wool";case 50:return "Torch";case 54:return "Chest";case 58:return "Crafting Table";case 61:return "Furnace";default:return id?"Item":"";}}
}
