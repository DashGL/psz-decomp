// flags: -O4,s
typedef struct { int x, y, z; } Vec3;
typedef struct { int a, b, c; } Entry_fa6c;
enum { E0 = 0, E1 = 1 };
extern int DAT_020fc988;
extern const Entry_fa6c DAT_021a0e74[];
extern void FUN_02075068(void *, int), FUN_02036848(Vec3 *, Vec3 *);
extern void *FUN_02075040(void *, int);
#pragma thumb off
extern int FUN_0205c86c(Vec3 *);
#pragma thumb on
extern int FUN_02074e9c(void *, int, int, int), FUN_02090c20(void), FUN_overlay_22__0219fc0c(void *);
extern void FUN_02090f74(short *, int, Vec3 *, int), FUN_020c193c(int, int, int, int, int), FUN_02072750(void *, int, Vec3 *);
#define I(p,o) (*(int *)((char *)(p)+(o)))
#define V(p,o) (*(Vec3 *)((char *)(p)+(o)))

void FUN_overlay_22__0219fa6c(void *self, void *owner)
{
    void *effect;
    Vec3 scale, position;
    short screen[2];
    if (!owner) return;
    if (I(self, 0x44) != -1) {
        if (++I(self, 0x50) > I(self, 0x38)) {
            FUN_02075068(owner, I(self, 0x44));
            I(self, 0x44) = -1;
        }
    }
    if (I(self, 0x40) != -1) {
        effect = FUN_02075040(owner, I(self, 0x40));
        if (effect) {
            if (I(self, 0x54) == 0) {
                FUN_02036848(&V(self, 8), &V(self, 0x2c));
                I(self, 0x58) += FUN_0205c86c(&V(self, 0x2c));
            } else if (I(self, 0x44) == -1) {
                I(self, 0x58) -= FUN_0205c86c(&V(self, 0x2c));
                if (((I(self, 0x58) <= DAT_020fc988) ? E1 : E0) != 0) I(self, 4) = 1;
            }
            scale.x = 0x1000;
            scale.y = 0x1000;
            scale.z = I(self, 0x58);
            V(effect, 0x50) = scale;
            V(effect, 0x5c) = V(self, 8);
            if (I(self, 0xc) <= 0) I(self, 0x54) = 1;
        }
    }
    if (I(self, 0x54) == 1 && I(self, 0x48) == -1 && I(self, 0x18) >= 0 && I(self, 0x18) < 2) {
        I(self, 0x48) = FUN_02074e9c(owner, DAT_021a0e74[I(self, 0x18)].a, 1, 0);
        effect = FUN_02075040(owner, I(self, 0x48));
        if (effect) {
            position.x = I(self, 8);
            position.y = 0;
            position.z = I(self, 0x10);
            V(effect, 0x5c) = position;
            switch (I(self, 0x18)) {
            case 0: I(effect, 0xe4) |= 0x4000; break;
            case 1: I(effect, 0xe4) |= 0x10000; break;
            }
        }
        FUN_02090f74(screen, FUN_02090c20(), &V(self, 8), 1);
        FUN_020c193c(2, 5, screen[0], screen[1], -1);
    }
    if (I(self, 0x54) == 0) FUN_02072750(owner, I(self, 0x4c), &V(self, 8));
    if (!FUN_overlay_22__0219fc0c(self)) I(self, 4) = 1;
}
