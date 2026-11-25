// flags: -O4,s
typedef struct { int x, y, z; } Vec3;
typedef struct { int a, b, c; } Entry_fef4;
enum { E0 = 0, E1 = 1 };
extern const Entry_fef4 DAT_021a0e5c[];
extern void FUN_02036848(Vec3 *, Vec3 *);
extern void FUN_02075068(void *, int);
extern void *FUN_02075040(void *, int);
#pragma thumb off
extern int FUN_0205c86c(Vec3 *);
#pragma thumb on
extern int FUN_02074e9c(void *, int, int, int);
extern int FUN_02090c20(void);
extern void FUN_02090f74(short *, int, Vec3 *, int);
extern void FUN_020c193c(int, int, int, int, int);
extern void FUN_02072750(void *, int, Vec3 *);
extern int FUN_overlay_22__021a006c(void *);
#define I(p,o) (*(int *)((char *)(p)+(o)))
#define V(p,o) (*(Vec3 *)((char *)(p)+(o)))

void FUN_overlay_22__0219fef4(void *self, void *owner)
{
    void *effect;
    Vec3 scale, position;
    short screen[2];
    int *limit;
    if (!owner) return;
    FUN_02036848(&V(self, 8), &V(self, 0x2c));
    if (I(self, 0x40) != -1) {
        ++I(self, 0x50);
        if (I(self, 0x50) > 1) { FUN_02075068(owner, I(self, 0x40)); I(self, 0x40) = -1; }
    }
    if (I(self, 0x3c) != -1) {
        effect = FUN_02075040(owner, I(self, 0x3c));
        if (effect) {
            if (((I(self, 0x5c) != I(self, 0x38)) ? E1 : E0) != 0) {
                I(self, 0x5c) += FUN_0205c86c(&V(self, 0x2c));
                limit = (((I(self, 0x5c) < I(self, 0x38)) ? E1 : E0) != 0) ? &I(self, 0x5c) : &I(self, 0x38);
                I(self, 0x5c) = *limit;
            }
            scale.x = 0x1000; scale.y = 0x1000; scale.z = I(self, 0x5c);
            V(effect, 0x50) = scale;
            V(effect, 0x5c) = V(self, 8);
            if (I(self, 0xc) <= 0) I(self, 0x58) = 1;
        }
    }
    if (I(self, 0x58) == 1) {
        ++I(self, 0x54);
        if (I(self, 0x44) == -1 && I(self, 0x18) >= 0 && I(self, 0x18) < 2) {
            I(self, 0x44) = FUN_02074e9c(owner, DAT_021a0e5c[I(self, 0x18)].a, 1, 0);
            effect = FUN_02075040(owner, I(self, 0x44));
            if (effect) {
                position.x = I(self, 8); position.y = 0; position.z = I(self, 0x10);
                V(effect, 0x5c) = position;
                I(effect, 0xe4) |= 0x4000;
            }
            FUN_02090f74(screen, FUN_02090c20(), &V(self, 8), 1);
            FUN_020c193c(2, 5, screen[0], screen[1], -1);
        }
    }
    if (I(self, 0x58) == 0) FUN_02072750(owner, I(self, 0x48), &V(self, 8));
    if (!FUN_overlay_22__021a006c(self)) I(self, 4) = 1;
}
