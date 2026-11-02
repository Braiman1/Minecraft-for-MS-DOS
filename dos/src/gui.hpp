#ifndef MC_GUI_HPP
#define MC_GUI_HPP
#include "engine.hpp"
namespace mc {
enum Screen { MainMenu,WorldList,CreateWorld,RenameWorld,DeleteWorld,Multiplayer,TexturePacks,Options,Playing,Paused,Inventory,Crafting,Achievements,StatisticsPage,Dead };
struct WorldEntry { uint32_t seed; bool used; char name[25]; };
class Gui {
public:
    Game& game;
    uint8_t pixels[64000];
    Screen screen,returnScreen;
    WorldEntry worlds[3];
    Stack cursor;
    int focus,world,hot,inventoryFocus,craftFocus,mouseX,mouseY,sensitivity,difficulty;
    bool invert,quit;
    float mining;
    char edit[25],message[80],seedEdit[16];
    bool editingSeed;
    Gui(Game& g);
    bool load(const char* path);
    void draw();
    void key(int scan,char ascii=0);
    void click(int x,int y,bool right=false);
    void open(Screen target);
    bool saveWorld();
    bool startWorld(int slot,bool create);
    void filename(char* destination,const char* extension)const;
    void drawAnimals();
    bool screenshot(const char* path)const;
    void remap();
private:
    struct Image { unsigned short w,h;unsigned offset; } images[22];
    uint8_t data[600000],sourcePalette[768],paletteMap[256];
    uint16_t overlayDepth[16000];
    unsigned dataSize;
    int optionDistance;
    uint8_t color(int r,int g,int b)const;
    void rect(int x,int y,int w,int h,uint8_t c);
    void image(int id,int x,int y,int sx,int sy,int sw,int sh,int w=0,int h=0);
    void text(int x,int y,const char* value,uint8_t c,bool shadow=true);
    int textWidth(const char* s)const;
    void center(int y,const char* value,uint8_t c);
    void button(int id,int x,int y,int w,const char* title,bool enabled=true);
    void background();
    struct Vertex {float x,y,z,u,v;};
    void triangle(Vertex a,Vertex b,Vertex c,int texture,bool overlay=false);
    void box(float x,float y,float z,float w,float h,float d,float yaw,int texture,int u,int v,bool overlay=false);
    void humanoid(float x,float y,float z,float yaw,int texture,bool overlay=false);
    void item(int x,int y,const Stack& stack);
    void inventoryClick(int slot,bool right);
    void activate(int id);
    void saveSettings();
    void saveWorldList();
};
}
#endif
