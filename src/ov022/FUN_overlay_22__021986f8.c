//cpp
// flags: -O4,s
class Player {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual int v16();
    unsigned char pad[0xb0];
    int x;
    int y;
    int z;
};
struct Slot {
    int f0, f4, f8, fc;
    unsigned mask;
    char f14, f15, pad[2];
};
extern "C" {
extern Player *FUN_overlay_22__0219a638(int, int);
extern int FUN_overlay_22__02198778(int, int);
extern void FUN_overlay_22__0219ad60(void *, unsigned, int);
void FUN_overlay_22__021986f8(char *self, int cell, unsigned operation);
}

void FUN_overlay_22__021986f8(char *self, int cell, unsigned operation) {
    if (cell >= 0 && cell < 9) {
        Slot *slot = (Slot *)(self + 92 + cell * 24);
        unsigned bit = 1;
        for (int i = 0; i < 4; i++, bit <<= 1) {
            if ((slot->mask & bit) == 0) {
                Player *player = FUN_overlay_22__0219a638(i, 1);
                if (player && ((player->v16() == 2) ? 1 : 0) == 0) {
                    int cur = FUN_overlay_22__02198778(player->x, player->z); if (cur == cell) {
                        FUN_overlay_22__0219ad60(self, operation, i);
                        slot->mask |= bit;
                    }
                }
            }
        }
    }
}
