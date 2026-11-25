//cpp
// flags: -O4,s
class Player_0219cec0 {
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
struct Self_0219cec0 {
    unsigned char pad[0xd4];
    int cd[4];
};
extern "C" {
extern Player_0219cec0 *FUN_overlay_22__0219a638(int, int);
extern int FUN_0203bf68(void *);
extern void FUN_overlay_22__0219ad60(void *, int, int);
}
extern "C" void FUN_overlay_22__0219cec0(Self_0219cec0 *self, int x, int z, int r2) {
    int i;
    for (i = 0; i < 4; i++) {
        if (self->cd[i] <= 0) {
            Player_0219cec0 *player = FUN_overlay_22__0219a638(i, 1);
            if (player) {
                if (((player->v16() == 2) ? 1 : 0) == 0 && FUN_0203bf68(player) == 0) {
                    long long dz = player->z - z;
                    long long dx = player->x - x;
                    int dx2 = (int)((dx * dx + 0x800) >> 12);
                    int dz2 = (int)((dz * dz + 0x800) >> 12);
                    if (dx2 + dz2 <= r2) {
                        FUN_overlay_22__0219ad60(self, 1, i);
                        self->cd[i] = 30;
                    }
                }
            }
        } else {
            self->cd[i]--;
        }
    }
}
