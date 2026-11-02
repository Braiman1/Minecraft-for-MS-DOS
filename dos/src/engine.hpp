#ifndef DOS_ENGINE_HPP
#define DOS_ENGINE_HPP
#include <stdint.h>
#include "progress.hpp"

namespace mc {
enum { WORLD_SIZE=64, WORLD_HEIGHT=128, CHUNK_SIZE=32768,
       WORLD_BYTES=16*CHUNK_SIZE, WIDTH=160, HEIGHT=100 };
enum Block { Air=0, Stone=1, Grass=2, Dirt=3, Cobble=4, Planks=5,
             Sand=12, Log=17, Leaves=18, Glass=20 };
struct Player { float x,y,z,yaw,pitch,vy; bool grounded; };
struct Hit { bool found; int x,y,z,nx,ny,nz; uint8_t block,color; int distance; };
struct Memory { uint32_t world, atlas, palette, frame, shade; };
class Game {
public:
    uint8_t blocks[WORLD_BYTES], atlas[65536], palette[768], alpha[256];
    uint8_t frame[WIDTH*HEIGHT], shade[3][256];
    uint16_t depth[WIDTH*HEIGHT];
    Progress progress;
    int viewDistance;
    int difficulty;
    Player player;
    uint8_t selected;
    uint8_t vegetation[256],lightMap[16][256];
    bool night()const{return progress.stats.ticks%60000>=30000;}
    Game();
    // Same 16x128x16 block-index layout observed at original VA 00431946.
    static unsigned index(int x,int y,int z);
    uint8_t get(int x,int y,int z) const;
    bool set(int x,int y,int z,uint8_t block);
    void generate(uint32_t seed);
    bool loadAtlas(const char* file);
    bool save(const char* file) const;
    bool load(const char* file);
    bool collides(float x,float y,float z) const;
    void update(float forward,float strafe,bool jump,float dt);
    Hit trace(int dx,int dy,int dz,int maxDistance=24,bool sample=false) const;
    Hit target() const;
    bool mine();
    float breakingTime(const Hit& hit) const;
    bool place();
    void updateAnimals(float dt);
    bool attackAnimal(bool interact=false);
    void respawn();
    void render();
    static Memory memory();
private:
    uint8_t nearest(int r,int g,int b) const;
    void buildShades();
};
}
#endif
