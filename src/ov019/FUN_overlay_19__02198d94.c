// flags: -O4,s
typedef struct { int x, y, z; } Vec3;
extern int DAT_0219d170[], DAT_020ed0a0;
extern int FUN_02036c34(void *);
extern void FUN_02091cc0(Vec3 *, Vec3 *, int *), FUN_02036848(Vec3 *, Vec3 *);
extern void FUN_02075068(void *, int);
extern int FUN_02074e9c(void *, int, int, int), FUN_02072650(void *, int, int, int);
extern void *FUN_02075040(void *, int);
#pragma thumb off
extern unsigned short FUN_0205c9e4(int, int);
#pragma thumb on
extern void FUN_0204bf88(void *), FUN_02072750(void *, int, Vec3 *);
extern int FUN_02090c20(void);
extern void FUN_02090f74(short *, int, Vec3 *, int), FUN_020c193c(int, int, int, int, int);
#define I(p,o) (*(int *)((char *)(p)+(o)))
#define H(p,o) (*(unsigned short *)((char *)(p)+(o)))
#define V(p,o) (*(Vec3 *)((char *)(p)+(o)))

void FUN_overlay_19__02198d94(void *self, void *owner)
{
    int landed = I(self, 0x10) <= 0;
    void *effect;
    Vec3 scale, displacement;
    short screen[2];
    int delta;
    if (landed != 1) {
        I(self, 0x40) += DAT_0219d170[8];
        delta = FUN_02036c34(owner);
        FUN_02091cc0(&displacement, &V(self, 0x3c), &delta);
        FUN_02036848(&V(self, 0xc), &displacement);
    }
    if (landed == 1) {
        if (I(self, 0x30) != -1) {
            FUN_02075068(owner, I(self, 0x30));
            I(self, 0x30) = -1;
        }
    } else {
        if (I(self, 0x30) == -1) I(self, 0x30) = FUN_02074e9c(owner, 5, 1, 0);
        effect = FUN_02075040(owner, I(self, 0x30));
        if (effect) {
            V(effect, 0x5c) = V(self, 0xc);
            H(effect, 0x6a) = FUN_0205c9e4(I(self, 0x3c), I(self, 0x44));
            FUN_0204bf88(effect);
            H(effect, 0x68) = (unsigned short)(0x10000 - FUN_0205c9e4(I(self, 0x40), I(self, 0x48)));
            FUN_0204bf88(effect);
        }
    }
    if (landed == 1) {
        if (I(self, 0x34) == -1) {
            I(self, 0x34) = FUN_02074e9c(owner, 10, 0, 0);
            FUN_02090f74(screen, FUN_02090c20(), &V(self, 0xc), 1);
            FUN_020c193c(2, 5, screen[0], screen[1], -1);
        }
        effect = FUN_02075040(owner, I(self, 0x34));
        if (effect) {
            V(effect, 0x5c) = V(self, 0xc);
            I(effect, 0xe4) |= 0x8000;
            scale.x = 0x2000;
            scale.y = 0x2000;
            scale.z = 0x1000;
            V(effect, 0x50) = scale;
            H(effect, 0x68) = 0xc000;
            FUN_0204bf88(effect);
        } else I(self, 0x1c) = 1;
    }
    if (landed == 1 && I(self, 0x38) == DAT_020ed0a0) {
        I(self, 0x38) = FUN_02072650(owner, 2, 0, 0);
        FUN_02072750(owner, I(self, 0x38), &V(self, 0xc));
    }
}
