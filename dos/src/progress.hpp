#ifndef MC_PROGRESS_HPP
#define MC_PROGRESS_HPP
#include <stdint.h>
namespace mc {
struct Stack { uint16_t id; uint8_t count,data; uint16_t wear; };
struct Recipe { uint16_t cells[9],output; uint8_t width,height,count,data; const char* name; };
enum Achievement { OpenInventory,GetWood,BuildWorkbench,BuildPickaxe,BuildFurnace,AcquireIron,BuildHoe,BakeBread,BakeCake,BetterPickaxe,CookFish,OnARail,BuildSword,KillMonster,KillCow,FlyPig };
struct Statistics { uint32_t ticks,centimeters,jumps,deaths,damageTaken,animalsKilled,blocksMined,blocksPlaced,itemsCrafted; uint32_t mined[256],crafted[360],used[360]; };
struct Animal { float x,y,z,yaw; uint16_t turn; uint8_t kind,health,sheared; };
class Progress {
public:
    bool enabled;
    uint8_t health,slot;
    uint32_t achievements;
    Stack inventory[36],grid[9];
    Statistics stats;
    Animal animals[12];
    uint32_t worldTicks;
    float fallStart;
    float walkingRemainder;
    Progress();
    void reset();
    static unsigned maxStack(unsigned id);
    static unsigned durability(unsigned id);
    bool add(unsigned id,unsigned count=1,unsigned data=0);
    bool put(const Stack& stack);
    bool take(unsigned slot,unsigned count=1);
    void unlock(Achievement which);
    void hurt(unsigned amount);
    bool eat();
    const Recipe* match(int size) const;
    bool craft(int size,Stack* destination=0);
    bool returnGrid();
    bool save(const char* path) const;
    bool load(const char* path);
    static const Recipe* recipes(unsigned& count);
    static const char* achievementName(unsigned i);
    static const char* itemName(unsigned id);
    static unsigned icon(unsigned id);
};
}
#endif
