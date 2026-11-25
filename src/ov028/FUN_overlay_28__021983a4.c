// flags: -O4,s
typedef struct { int x, y, z; } Vec;
typedef struct {
    unsigned short a0, a1;
    unsigned short arr[5];
    unsigned short pad;
    int i16, i20, i24, i28;
    Vec v32;
    Vec v44;
    short s56, s58, s60, s62;
    int i64, i68, i72, i76, i80, i84, i88, i92, i96;
} Desc;

#define I(p,o) (*(int *)((char *)(p)+(o)))
#define U(p,o) (*(unsigned int *)((char *)(p)+(o)))
#define V(p,o) (*(Vec *)((char *)(p)+(o)))

extern unsigned char DAT_overlay_28__0219be80[];
extern void FUN_02036848(Vec *, const Vec *);
extern void FUN_02083a70(Vec *, int);
extern void FUN_02072750(void *, int, const Vec *);
extern void FUN_02072724(void *, int);
extern void FUN_02075068(void *, int);
extern void FUN_02035408(Vec *, int, int, int);
extern void FUN_02046d94(void *, int, int);
extern void FUN_02090f74(short *, void *, const Vec *, int);
extern void FUN_020c193c(int, int, int, int, int);
extern void *FUN_02075040(void *, int);
extern void *FUN_02090c20(void);
extern int FUN_0207281c(void *, int);
extern int FUN_02072650(void *, int, int, int);

void FUN_overlay_28__021983a4(void *self) {
    enum { E0 = 0, E1 = 1 };
    void *effect;
    Desc desc;
    short screen[2];
    int i;

    if (I(self, 0x124) == 1) {
        I(self, 0x110) -= I(DAT_overlay_28__0219be80, 0xc);
        FUN_02036848(&V(self, 0xe8), &V(self, 0x100));
        FUN_02036848(&V(self, 0xf4), &V(self, 0x10c));
        effect = FUN_02075040(self, I(self, 0xe4));
        if (effect) V(effect, 0x5c) = V(self, 0xf4);
        FUN_02072750(self, I(self, 0xe0), &V(self, 0xe8));
        if ((I(self, 0xf8) < I(DAT_overlay_28__0219be80, 8)) ? E1 : E0) {
            if (U(self, 0x11c) > 2) {
                I(self, 0xf8) = I(DAT_overlay_28__0219be80, 8);
                I(self, 0x120) = 1;
            } else {
                I(self, 0xf8) = I(DAT_overlay_28__0219be80, 8);
                I(self, 0x110) = -I(self, 0x110);
                FUN_02083a70(&V(self, 0x10c), 2048);
                FUN_02083a70(&V(self, 0x100), 2048);
            }
            I(self, 0x11c)++;
        }
        if (FUN_0207281c(self, I(self, 0xe0)) > 0 || I(self, 0x120)) {
            FUN_02072724(self, I(self, 0xe0));
            I(self, 0xe0) = -1;
            if (I(self, 0x120)) I(self, 0x124) = 2;
            else I(self, 0x124) = 3;
            I(self, 0x118) = 0;
        }
    } else if (I(self, 0x124) == 2) {
        if (U(self, 0x118) >= 30) {
            I(self, 0x124) = 3;
            I(self, 0x118) = 0;
        } else {
            I(self, 0x118)++;
        }
    } else if (I(self, 0x124) == 3) {
        FUN_02075068(self, I(self, 0xe4));
        I(self, 0xe4) = -1;
        if (!I(self, 0x118)) {
            if (I(self, 0x120)) {
                I(self, 0xe0) = FUN_02072650(self, 1, 0, 0);
                FUN_02072750(self, I(self, 0xe0), &V(self, 0xe8));
            }
            if ((I(self, 0xf8) < I(DAT_overlay_28__0219be80, 4)) ? E1 : E0) {
                I(self, 0xf8) = I(DAT_overlay_28__0219be80, 4);
            }
            desc.a0 = 0xffff;
            desc.a1 = 0xffff;
            for (i = 0; i < 5; i++) desc.arr[i] = 0xffff;
            desc.i16 = -1;
            desc.i20 = -1;
            desc.i24 = 4096;
            desc.i28 = 0;
            FUN_02035408(&desc.v32, 0, 0, 0);
            FUN_02035408(&desc.v44, 4096, 4096, 4096);
            desc.s56 = 0;
            desc.s58 = 0;
            desc.s60 = 0;
            desc.s62 = 0;
            desc.i64 = -1;
            desc.i68 = -1;
            desc.i72 = -1;
            desc.i76 = -1;
            desc.i80 = 0;
            desc.i28 |= 2;
            desc.i84 = 149;
            desc.i88 = -1;
            desc.i92 = 0;
            desc.i96 = 0;
            desc.v32 = V(self, 0xf4);
            desc.i28 |= 0x4000;
            desc.i88 = I(self, 0xc);
            desc.i84 = 39;
            FUN_02046d94(&desc, 0, 0);
            FUN_02090f74(screen, FUN_02090c20(), &V(self, 0xf4), 0);
            FUN_020c193c(4, 0, screen[0], screen[1], -1);
        }
        if (U(self, 0x118) >= 15) {
            if (I(self, 0xe0) != -1) {
                FUN_02072724(self, I(self, 0xe0));
                I(self, 0xe0) = -1;
            }
            I(self, 0x124) = 0;
        }
        I(self, 0x118)++;
    }
}
