#include "gui.hpp"
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
namespace mc {
Gui::Gui(Game& g):game(g),screen(MainMenu),returnScreen(MainMenu),focus(0),world(-1),hot(-1),inventoryFocus(0),craftFocus(0),mouseX(-1),mouseY(-1),sensitivity(50),difficulty(2),invert(false),quit(false),mining(0),dataSize(0),optionDistance(2){
 memset(pixels,0,sizeof pixels);memset(worlds,0,sizeof worlds);memset(&cursor,0,sizeof cursor);memset(edit,0,sizeof edit);memset(message,0,sizeof message);
 FILE* f=fopen("WORLDS.DAT","rb");if(f){char magic[8];if(fread(magic,1,8,f)==8&&!memcmp(magic,"MCWORL01",8))for(int i=0;i<3;i++){worlds[i].used=fgetc(f)==1;fread(&worlds[i].seed,4,1,f);if(fread(worlds[i].name,1,25,f)!=25)worlds[i].used=false;worlds[i].name[24]=0;}fclose(f);}
 f=fopen("OPTIONS.DAT","rb");if(f){char magic[8];unsigned char values[4];if(fread(magic,1,8,f)==8&&!memcmp(magic,"MCOPTION",8)&&fread(values,1,4,f)==4){sensitivity=values[0]<=100?values[0]:50;invert=values[1]!=0;optionDistance=values[2]<=2?values[2]:2;difficulty=values[3]<=3?values[3]:2;}fclose(f);}
 game.viewDistance=8+optionDistance*8;
}
uint8_t Gui::color(int r,int g,int b)const{int best=0x7fffffff,index=1;for(int i=1;i<256;i++){int dr=r-game.palette[i*3],dg=g-game.palette[i*3+1],db=b-game.palette[i*3+2],d=dr*dr+dg*dg+db*db;if(d<best){best=d;index=i;}}return uint8_t(index);}
bool Gui::load(const char* path){FILE* f=fopen(path,"rb");if(!f)return false;char magic[8];unsigned count=0;bool ok=fread(magic,1,8,f)==8&&!memcmp(magic,"MCGUI001",8)&&fread(&count,4,1,f)==1&&count==17&&fread(sourcePalette,1,768,f)==768;dataSize=0;
 for(unsigned i=0;ok&&i<count;i++){unsigned short w,h;unsigned bytes;ok=fread(&w,2,1,f)==1&&fread(&h,2,1,f)==1&&fread(&bytes,4,1,f)==1&&w&&h&&bytes==unsigned(w)*h&&dataSize+bytes<=sizeof data;if(ok){images[i].w=w;images[i].h=h;images[i].offset=dataSize;dataSize+=bytes;}}
 ok=ok&&fread(data,1,dataSize,f)==dataSize;fclose(f);if(ok)remap();return ok;}
void Gui::remap(){paletteMap[0]=0;for(int i=1;i<256;i++)paletteMap[i]=color(sourcePalette[i*3],sourcePalette[i*3+1],sourcePalette[i*3+2]);}
void Gui::rect(int x,int y,int w,int h,uint8_t c){for(int j=y<0?0:y;j<y+h&&j<200;j++)for(int i=x<0?0:x;i<x+w&&i<320;i++)pixels[j*320+i]=c;}
void Gui::image(int id,int x,int y,int sx,int sy,int sw,int sh,int w,int h){if(id<0||id>=17)return;if(!w)w=sw;if(!h)h=sh;const Image& im=images[id];for(int j=0;j<h;j++)for(int i=0;i<w;i++){int px=x+i,py=y+j,u=sx+i*sw/w,v=sy+j*sh/h;if(px<0||py<0||px>=320||py>=200||u<0||v<0||u>=im.w||v>=im.h)continue;uint8_t c=data[im.offset+v*im.w+u];if(c)pixels[py*320+px]=paletteMap[c];}}
int Gui::textWidth(const char* s)const{int width=0;while(*s){unsigned c=(unsigned char)*s++;int right=c==32?2:0;for(int x=0;x<8;x++)for(int y=0;y<8;y++)if(data[images[0].offset+(c/16*8+y)*128+c%16*8+x])right=x>right?x:right;width+=right+2;}return width;}
void Gui::text(int x,int y,const char* s,uint8_t c,bool shadow){if(shadow)text(x+1,y+1,s,color(20,20,20),false);while(*s){unsigned ch=(unsigned char)*s++;int right=ch==32?2:0;for(int i=0;i<8;i++)for(int j=0;j<8;j++)if(data[images[0].offset+(ch/16*8+j)*128+ch%16*8+i]){if(i>right)right=i;if(x+i>=0&&x+i<320&&y+j>=0&&y+j<200)pixels[(y+j)*320+x+i]=c;}x+=right+2;}}
void Gui::center(int y,const char* s,uint8_t c){text((320-textWidth(s))/2,y,s,c);}
void Gui::button(int id,int x,int y,int w,const char* title,bool enabled){bool selected=focus==id||hot==id;rect(x,y,w,20,color(5,5,5));image(2,x+1,y+1,0,enabled?(selected?86:66):46,200,20,w-2,18);text(x+(w-textWidth(title))/2,y+6,title,color(!enabled?110:255,!enabled?110:255,selected&&enabled?160:255));}
void Gui::background(){const Image& im=images[7];for(int y=0;y<200;y++)for(int x=0;x<320;x++){uint8_t c=paletteMap[data[im.offset+(y%im.h)*im.w+x%im.w]];pixels[y*320+x]=game.shade[0][game.shade[0][game.shade[0][c]]];}}
static int blockTile(unsigned id){switch(id){case 1:return 1;case 2:return 3;case 3:return 2;case 4:return 16;case 5:return 4;case 12:return 18;case 17:return 20;case 18:return 52;case 20:return 49;case 35:return 64;case 50:return 80;case 54:return 26;case 58:return 59;case 61:return 45;default:return 1;}}
static int itemTile(unsigned id){return int(Progress::icon(id));}
void Gui::item(int x,int y,const Stack& stack){if(!stack.id||!stack.count)return;if(stack.id<256){int t=blockTile(stack.id);for(int j=0;j<16;j++)for(int i=0;i<16;i++){uint8_t c=game.atlas[((t>>4)*16+j)*256+(t%16)*16+i];if(c&&x+i>=0&&y+j>=0&&x+i<320&&y+j<200)pixels[(y+j)*320+x+i]=c;}}else {int t=itemTile(stack.id);image(6,x,y,t%16*16,t/16*16,16,16);}
 if(stack.wear){unsigned life=Progress::durability(stack.id),remaining=stack.wear<life?life-stack.wear:0;rect(x+1,y+13,14,2,color(0,0,0));rect(x+1,y+13,int(13*remaining/life),1,color(255-int(255*remaining/life),int(255*remaining/life),0));}
 if(stack.count>1){char n[8];sprintf(n,"%u",unsigned(stack.count));text(x+17-textWidth(n),y+10,n,color(255,255,255));}}
void Gui::filename(char* dest,const char* ext)const{sprintf(dest,"WORLD%c.%.3s",char('1'+(world>=0&&world<3?world:0)),ext);}
void Gui::saveWorldList(){FILE* f=fopen("WORLDS.DAT","wb");if(!f){strcpy(message,"Cannot save world list");return;}fwrite("MCWORL01",1,8,f);for(int i=0;i<3;i++){fputc(worlds[i].used?1:0,f);fwrite(&worlds[i].seed,4,1,f);fwrite(worlds[i].name,1,25,f);}fclose(f);}
void Gui::saveSettings(){FILE* f=fopen("OPTIONS.DAT","wb");if(!f)return;fwrite("MCOPTION",1,8,f);fputc(sensitivity,f);fputc(invert?1:0,f);fputc(optionDistance,f);fputc(difficulty,f);fclose(f);}
bool Gui::saveWorld(){if(world<0)return false;if(cursor.count){if(!game.progress.put(cursor)){strcpy(message,"Inventory full; return held item");return false;}memset(&cursor,0,sizeof cursor);}if(!game.progress.returnGrid())return false;char path[16];filename(path,"SAV");if(!game.save(path)){strcpy(message,"World save failed");return false;}worlds[world].used=true;saveWorldList();return true;}
bool Gui::startWorld(int slot,bool create){if(slot<0||slot>=3)return false;world=slot;char path[16];filename(path,"SAV");if(create){game.generate(worlds[slot].seed);game.progress.enabled=true;if(!saveWorld())return false;}else if(!game.load(path)){strcpy(message,"World cannot be loaded");return false;}screen=Playing;focus=0;return true;}
void Gui::open(Screen target){if(target==Inventory)game.progress.unlock(OpenInventory);if(target==Inventory||target==Crafting)inventoryFocus=0;if(target==Options)returnScreen=screen;screen=target;focus=0;message[0]=0;}
void Gui::inventoryClick(int location,bool right){Stack* stack=location<36?&game.progress.inventory[location]:&game.progress.grid[location-36];
 if(!cursor.count){if(!stack->count)return;cursor=*stack;if(right){cursor.count=(stack->count+1)/2;stack->count-=cursor.count;if(!stack->count)memset(stack,0,sizeof *stack);}else memset(stack,0,sizeof *stack);return;}
 if(!stack->count||(stack->id==cursor.id&&stack->data==cursor.data&&stack->wear==cursor.wear)){unsigned limit=Progress::maxStack(cursor.id),n=right?1:cursor.count;if(n>limit-stack->count)n=limit-stack->count;if(!n)return;if(!stack->count){*stack=cursor;stack->count=0;}stack->count+=n;cursor.count-=n;if(!cursor.count)memset(&cursor,0,sizeof cursor);}
 else if(!right){Stack temp=*stack;*stack=cursor;cursor=temp;}
}
void Gui::activate(int id){
 if(screen==MainMenu){if(id==0)open(WorldList);else if(id==1)open(Multiplayer);else if(id==2)open(TexturePacks);else if(id==3)open(Options);else if(id==4)quit=true;}
 else if(screen==WorldList){if(id>=0&&id<3){world=id;focus=id;}else if(id==3&&world>=0&&worlds[world].used)startWorld(world,false);else if(id==4){int free=0;while(free<3&&worlds[free].used)free++;if(free==3){strcpy(message,"All three world slots are occupied");return;}world=free;worlds[free].seed=42+unsigned(free)*7123;strcpy(edit,"New World");open(CreateWorld);}else if(id==5&&world>=0&&worlds[world].used){strcpy(edit,worlds[world].name);open(RenameWorld);}else if(id==6&&world>=0&&worlds[world].used)open(DeleteWorld);else if(id==7)open(MainMenu);}
 else if(screen==CreateWorld){if(id==0&&edit[0]){strcpy(worlds[world].name,edit);if(startWorld(world,true))saveWorldList();}else if(id==1)open(WorldList);}
 else if(screen==RenameWorld){if(id==0&&edit[0]){strcpy(worlds[world].name,edit);saveWorldList();open(WorldList);}else if(id==1)open(WorldList);}
 else if(screen==DeleteWorld){if(id==0){char path[16];filename(path,"SAV");remove(path);filename(path,"PLY");remove(path);filename(path,"BAK");remove(path);filename(path,"PBK");remove(path);worlds[world].used=false;saveWorldList();open(WorldList);}else if(id==1)open(WorldList);}
 else if(screen==Multiplayer){open(MainMenu);}
 else if(screen==TexturePacks){if(id<2){if(game.loadAtlas(id==0?"ATLAS.DAT":"CUSTOM.DAT")){remap();strcpy(message,id==0?"Default texture pack loaded":"CUSTOM.DAT loaded");}else strcpy(message,"CUSTOM.DAT not found or invalid");}else open(MainMenu);}
 else if(screen==Options){if(id==0){optionDistance=(optionDistance+1)%3;game.viewDistance=8+optionDistance*8;}else if(id==1)sensitivity=(sensitivity+10)%110;else if(id==2)invert=!invert;else if(id==3)difficulty=(difficulty+1)%4;else {saveSettings();screen=returnScreen;focus=0;}}
 else if(screen==Paused){if(id==0)open(Playing);else if(id==1)open(Achievements);else if(id==2)open(StatisticsPage);else if(id==3)open(Options);else if(id==4&&saveWorld())open(MainMenu);}
 else if(screen==Achievements||screen==StatisticsPage){open(Paused);}
 else if(screen==Dead){if(id==0){game.respawn();memset(&cursor,0,sizeof cursor);open(Playing);}else if(id==1&&saveWorld())open(MainMenu);}
}
void Gui::key(int scan,char ascii){
 if((screen==CreateWorld||screen==RenameWorld)&&ascii>=32&&ascii<127){unsigned n=strlen(edit);if(n<24){edit[n]=ascii;edit[n+1]=0;}return;}
 if((screen==CreateWorld||screen==RenameWorld)&&scan==14){unsigned n=strlen(edit);if(n)edit[n-1]=0;return;}
 if(screen==Inventory||screen==Crafting){if(scan==1||scan==18){if(cursor.count){if(!game.progress.put(cursor))return;memset(&cursor,0,sizeof cursor);}if(!game.progress.returnGrid())return;open(Playing);}else if(scan==15||scan==77||scan==75||scan==72||scan==80){int locations[45],count=0;for(int i=0;i<36;i++)locations[count++]=i;int n=screen==Crafting?3:2;for(int y=0;y<n;y++)for(int x=0;x<n;x++)locations[count++]=36+y*3+x;int at=0;while(at<count&&locations[at]!=inventoryFocus)at++;int step=scan==75?-1:scan==72?-9:scan==80?9:1;inventoryFocus=locations[(at+count+step)%count];}else if(scan==28||scan==57)inventoryClick(inventoryFocus,false);else if(scan==19)inventoryClick(inventoryFocus,true);else if(scan==46)game.progress.craft(screen==Crafting?3:2);return;}
 if(scan==1){if(screen==Playing)open(Paused);else if(screen==Paused)open(Playing);else if(screen==MainMenu)quit=true;else if(screen==Achievements||screen==StatisticsPage)open(Paused);else if(screen==Options){saveSettings();screen=returnScreen;}else open(MainMenu);return;}
 if(screen==Playing){if(scan==18)open(Inventory);return;}
 int count=screen==MainMenu?5:screen==WorldList?8:screen==Paused?5:screen==Options?5:screen==TexturePacks?3:screen==CreateWorld||screen==RenameWorld||screen==DeleteWorld||screen==Dead?2:1;
 if(scan==72)focus=(focus+count-1)%count;else if(scan==80||scan==15)focus=(focus+1)%count;else if(scan==28||scan==57)activate(focus);
}
void Gui::click(int x,int y,bool right){mouseX=x;mouseY=y;
 if(screen==Inventory||screen==Crafting){int ox=72,oy=17;for(int i=0;i<36;i++){int sx=ox+8+(i%9)*18,sy=oy+(i<9?142:84+((i-9)/9)*18);if(x>=sx&&x<sx+16&&y>=sy&&y<sy+16){inventoryFocus=i;inventoryClick(i,right);return;}}
 int n=screen==Crafting?3:2,gx=ox+(n==3?30:88),gy=oy+(n==3?17:26);
 for(int row=0;row<n;row++)for(int col=0;col<n;col++){int sx=gx+col*18,sy=gy+row*18;if(x>=sx&&x<sx+16&&y>=sy&&y<sy+16){inventoryFocus=36+row*3+col;inventoryClick(inventoryFocus,right);return;}}
 int rx=ox+(n==3?124:144),ry=oy+(n==3?35:36);if(x>=rx&&x<rx+16&&y>=ry&&y<ry+16)game.progress.craft(n,&cursor);return;}
 hot=-1;draw();if(hot>=0)activate(hot);
}
void Gui::draw(){
 if(screen==Playing||screen==Paused||screen==Inventory||screen==Crafting||screen==Dead){for(int y=0;y<100;y++)for(int x=0;x<160;x++){uint8_t c=game.frame[y*160+x];pixels[y*640+x*2]=pixels[y*640+x*2+1]=pixels[y*640+x*2+320]=pixels[y*640+x*2+321]=c;}}
 else background();
 uint8_t white=color(255,255,255),gray=color(170,170,170),yellow=color(255,255,80);
 // Hit-testing uses the same rectangles as drawing.
 hot=-1;
 #define BUTTON(id,x,y,w,title,enabled) do{if(mouseX>=x&&mouseX<x+w&&mouseY>=y&&mouseY<y+20&&(enabled))hot=id;button(id,x,y,w,title,enabled);}while(0)
 if(screen==MainMenu){text(2,2,"Minecraft Beta 1.7.3",gray);image(1,23,24,0,0,274,44);text(215,62,"Thematic!",yellow);BUTTON(0,60,84,200,"Singleplayer",true);BUTTON(1,60,107,200,"Multiplayer",true);BUTTON(2,60,130,200,"Mods and Texture Packs",true);BUTTON(3,60,153,200,"Options...",true);BUTTON(4,270,177,46,"Quit",true);text(3,190,"Independent recreation / DOS",gray);}
 else if(screen==WorldList){center(8,"Select world",white);for(int i=0;i<3;i++){char label[48];sprintf(label,"%d: %s",i+1,worlds[i].used?worlds[i].name:"- empty -");BUTTON(i,36,27+i*31,248,label,true);}bool selected=world>=0&&worlds[world].used;BUTTON(3,17,130,140,"Play Selected World",selected);BUTTON(4,163,130,140,"Create New World",true);BUTTON(5,17,154,67,"Rename",selected);BUTTON(6,90,154,67,"Delete",selected);BUTTON(7,163,154,140,"Cancel",true);}
 else if(screen==CreateWorld||screen==RenameWorld){center(14,screen==CreateWorld?"Create New World":"Rename World",white);text(48,48,"World Name",gray);rect(46,61,228,22,color(0,0,0));text(50,68,edit,white);text(48,94,"Type a name (24 ASCII characters)",gray);if(screen==CreateWorld){center(112,"Game Mode: Survival",white);center(126,"Finite DOS world, Beta recipes",gray);}BUTTON(0,52,151,104,screen==CreateWorld?"Create World":"Rename",edit[0]!=0);BUTTON(1,164,151,104,"Cancel",true);}
 else if(screen==DeleteWorld){center(45,"Delete this world?",white);center(68,"This cannot be undone.",gray);BUTTON(0,52,112,104,"Delete",true);BUTTON(1,164,112,104,"Cancel",true);}
 else if(screen==Multiplayer){center(16,"Multiplayer",white);center(65,"DOS networking is not implemented.",white);center(83,"No server connection is available yet.",gray);BUTTON(0,60,150,200,"Back",true);}
 else if(screen==TexturePacks){center(14,"Mods and Texture Packs",white);BUTTON(0,60,48,200,"Default",true);BUTTON(1,60,75,200,"Load CUSTOM.DAT",true);center(110,"Custom atlas: MCATLAS2 format.",gray);center(124,"Mod loading is not implemented.",gray);BUTTON(2,60,151,200,"Done",true);}
 else if(screen==Options){char label[64];center(10,"Options",white);sprintf(label,"Render distance: %d",game.viewDistance);BUTTON(0,60,34,200,label,true);sprintf(label,"Sensitivity: %d%%",sensitivity);BUTTON(1,60,58,200,label,true);sprintf(label,"Invert mouse: %s",invert?"ON":"OFF");BUTTON(2,60,82,200,label,true);static const char* levels[4]={"Peaceful","Easy","Normal","Hard"};sprintf(label,"Difficulty: %s",levels[difficulty]);BUTTON(3,60,106,200,label,true);center(132,"Hostile mobs are not implemented yet.",gray);BUTTON(4,60,155,200,"Done",true);}
 else if(screen==Paused){center(16,"Game menu",white);BUTTON(0,60,42,200,"Back to game",true);BUTTON(1,60,66,200,"Achievements",true);BUTTON(2,60,90,200,"Statistics",true);BUTTON(3,60,114,200,"Options...",true);BUTTON(4,60,150,200,"Save and quit to title",true);}
 else if(screen==Dead){center(35,"Game over!",white);BUTTON(0,60,86,200,"Respawn",true);BUTTON(1,60,114,200,"Title menu",true);}
 else if(screen==Achievements){center(7,"Achievements",white);for(int i=0;i<16;i++){char label[80];sprintf(label,"%s %s",game.progress.achievements&(1U<<i)?"[+]":"[ ]",Progress::achievementName(i));text(20+(i/8)*154,28+(i%8)*15,label,game.progress.achievements&(1U<<i)?yellow:gray);}BUTTON(0,90,168,140,"Done",true);}
 else if(screen==StatisticsPage){center(9,"Statistics",white);char label[80];const Statistics& s=game.progress.stats;const char* names[9]={"Time played (seconds)","Distance walked (cm)","Jumps","Deaths","Damage taken","Animals killed","Blocks mined","Blocks placed","Items crafted"};const uint32_t values[9]={s.ticks/50,s.centimeters,s.jumps,s.deaths,s.damageTaken,s.animalsKilled,s.blocksMined,s.blocksPlaced,s.itemsCrafted};for(int i=0;i<9;i++){sprintf(label,"%s: %lu",names[i],(unsigned long)values[i]);text(28,28+i*14,label,white);}BUTTON(0,90,168,140,"Done",true);}
 else if(screen==Inventory||screen==Crafting){int ox=72,oy=17,n=screen==Crafting?3:2;image(screen==Crafting?4:3,ox,oy,0,0,176,166);if(screen==Inventory){text(ox+87,oy+13,"Crafting",color(65,65,65),false);image(8,ox+40,oy+10,8,8,8,8,20,20);image(8,ox+40,oy+30,20,20,8,12,20,30);image(8,ox+30,oy+30,44,20,4,12,10,30);image(8,ox+60,oy+30,44,20,4,12,10,30);image(8,ox+40,oy+60,4,20,4,12,10,25);image(8,ox+50,oy+60,4,20,4,12,10,25);}else text(ox+28,oy+5,"Crafting",color(65,65,65),false);
 for(int i=0;i<36;i++)item(ox+8+(i%9)*18,oy+(i<9?142:84+(i-9)/9*18),game.progress.inventory[i]);int gx=ox+(n==3?30:88),gy=oy+(n==3?17:26);for(int row=0;row<n;row++)for(int col=0;col<n;col++)item(gx+col*18,gy+row*18,game.progress.grid[row*3+col]);
 const Recipe* recipe=game.progress.match(n);if(recipe){Stack result={recipe->output,recipe->count,recipe->data,0};item(ox+(n==3?124:144),oy+(n==3?35:36),result);}int sx,sy;if(inventoryFocus<36){sx=ox+8+(inventoryFocus%9)*18;sy=oy+(inventoryFocus<9?142:84+(inventoryFocus-9)/9*18);}else {sx=gx+((inventoryFocus-36)%3)*18;sy=gy+((inventoryFocus-36)/3)*18;}rect(sx,sy,16,1,yellow);rect(sx,sy+15,16,1,yellow);if(cursor.count)item(mouseX>=0?mouseX:270,mouseY>=0?mouseY:100,cursor);text(4,190,"E close  TAB select  ENTER move  R one  C craft",white);}
 else if(screen==Playing){
 rect(156,100,9,1,white);rect(160,96,1,9,white);
 image(2,69,178,0,0,182,22);image(2,68+game.progress.slot*20,177,0,22,24,24);for(int i=0;i<9;i++)item(72+i*20,181,game.progress.inventory[i]);
 for(int i=0;i<10;i++){image(5,70+i*8,168,16,0,9,9);if(game.progress.health>i*2)image(5,70+i*8,168,game.progress.health==i*2+1?61:52,0,9,9);}
 image(8,264,147,44,20,4,12,28,53);
 if(mining>0){rect(150,111,20,3,color(20,20,20));rect(150,111,int(20*(mining>1?1:mining)),3,white);}
 text(2,2,"Beta 1.7.3 / DOS",white);const Stack& held=game.progress.inventory[game.progress.slot];if(held.id)center(155,Progress::itemName(held.id),white);
 }
 if(message[0])center(182,message,yellow);
 if(screen!=Playing&&mouseX>=0){rect(mouseX,mouseY,5,1,white);rect(mouseX,mouseY,1,7,white);}
 #undef BUTTON
}
void Gui::drawAnimals(){float sy=sinf(game.player.yaw),cy=cosf(game.player.yaw),sp=sinf(game.player.pitch),cp=cosf(game.player.pitch);for(int k=0;k<12;k++){const Animal& a=game.progress.animals[k];if(!a.health)continue;float dx=a.x-game.player.x,dz=a.z-game.player.z,dy=a.y+.65f-(game.player.y+1.6f),forward=dx*sy+dz*cy,z=forward*cp+dy*sp,up=dy*cp-forward*sp;if(z<=.2f||z>game.viewDistance)continue;int cx=80+int((dx*cy-dz*sy)*80/z),bottom=50-int((up-.65f)*80/z),h=int((a.kind==3?.8f:1.3f)*80/z),w=int((a.kind==3?.5f:.9f)*80/z);if(h<1||w<1)continue;const Image& im=images[13+a.kind];for(int y=0;y<h;y++)for(int x=0;x<w;x++){int px=cx-w/2+x,py=bottom-h+y;if(px<0||py<0||px>=160||py>=100)continue;unsigned pos=py*160+px;if(game.depth[pos]<z*256)continue;uint8_t c=data[im.offset+(y*im.h/h)*im.w+x*im.w/w];if(c){game.frame[pos]=paletteMap[c];game.depth[pos]=uint16_t(z*256);}}}}
bool Gui::screenshot(const char* path)const{FILE* f=fopen(path,"wb");if(!f)return false;fprintf(f,"P6\n320 200\n255\n");for(int i=0;i<64000;i++)fwrite(game.palette+pixels[i]*3,1,3,f);bool ok=!ferror(f);fclose(f);return ok;}
}
