// flags: -O4,s
typedef struct {
    unsigned char b[6];
} Six;
typedef struct {
    int x, y, z;
} Vec;

extern const int UNK_020fa3cc[];
extern const int UNK_020f2ac0[];
extern const int UNK_020f2ad8[];
extern const short UNK_020f29f8[];
extern const short UNK_020ed83c[];
extern char UNK_0211c844[];
extern void FUN_020473e8(void *, void *, int);
extern void FUN_0207a3f4(Six *, int, int, int);
extern void FUN_02035408(Vec *, int, int, int);
extern void FUN_0203647c(Vec *, Vec *, Vec *);
extern void FUN_0200c938(void *, int);
extern void FUN_02034680(Vec *, void *);
extern unsigned int FUN_0207b860(void *, unsigned int);
extern int FUN_0207a3ac(int, int);
extern int FUN_0207a3d0(int, int);
extern int FUN_0204e8bc(Vec *, int, int);
extern char *FUN_0204daa8(int);

#define W(n) (*(int *)(s + (n)))

void FUN_0207b598(char *s, void *d, int level, int mode) {
    Vec position;
    Vec base;
    Vec mode_adj;
    Vec if_adj;
    Vec delta;
    Vec else_adj;
    Vec zero;
    Six b;
    Six a;
    int scale;
    int variation;
    int spread;
    int i;
    int height;
    short range;
    short low;

    FUN_020473e8(s, d, 0);
    W(260) = level;
    W(264) = (W(260) - 1) / 5;
    W(416) = mode;
    FUN_0207a3f4(&a, 2, W(260), 0);
    b = a;
    W(284) = 6;
    *(unsigned short *)(s + 280) = 0x7fff / W(284);
    *(unsigned short *)(s + 282) = 0x800;
    W(288) = (int)b.b[2] << 12;
    for (i = 0; i < 8; i++) {
        *(int *)(s + i * 4 + 292) = 2;
    }
    scale = 0x1000;
    variation = 0;
    spread = 0;
    if (W(264) >= 0 && W(264) < 3) {
        W(324) = UNK_020fa3cc[W(264)];
        scale = (UNK_020f2ac0[W(264)] << 12) / 10;
        variation = (UNK_020f2ad8[W(264)] << 12) / 10;
        spread = UNK_020f29f8[W(264)];
    }
    { int f = (int)FUN_0207b860(UNK_0211c844, 10) + 14; W(72) = W(68) + f * W(76); }
    W(344) = W(68);
    W(376) = W(72);
    for (i = 1; i < W(324); i++) {
        int r = (int)FUN_0207b860(UNK_0211c844, 0x5000);
        *(int *)(s + i * 4 + 344) = W(68) + r;
        *(int *)(s + i * 4 + 376) = W(72) - (int)FUN_0207b860(UNK_0211c844, 0x5000);
    }
    W(172) = 2;
    height = *(short *)(s + 280) * W(284);
    if (W(416) != 0) {
        FUN_02035408(&mode_adj, W(92), height + W(96), W(100));
        *(Vec *)(s + 92) = mode_adj;
    } else {
        int handle = FUN_0207a3ac(W(232), 0);
        int sub = FUN_0207a3d0(W(232), 0);
        int hit = 0;
        position.x = 0;
        position.y = 0;
        position.z = 0;
        if (handle != -1) {
            hit = FUN_0204e8bc(&position, handle, sub);
        }
        if (hit != 0) {
            delta.x = 0;
            delta.y = height;
            delta.z = 0;
            FUN_0203647c(&if_adj, &position, &delta);
            *(Vec *)(s + 92) = if_adj;
            W(420) = handle;
            W(424) = sub;
        } else {
            char *actor = FUN_0204daa8(W(232));
            int angle = 0;
            int rad;
            int index;
            FUN_0200c938(&base, 12);
            if (actor) {
                angle = *(unsigned short *)(actor + 192);
                FUN_02034680(&base, actor + 156);
            }
            rad = W(288);
            index = (angle >> 4) * 2;
            else_adj.x = base.x + ((UNK_020ed83c[index] * rad) >> 12);
            else_adj.y = height;
            else_adj.z = base.z + ((UNK_020ed83c[index + 1] * rad) >> 12);
            *(Vec *)(s + 92) = else_adj;
        }
    }
    zero.x = 0;
    zero.y = 0;
    zero.z = 0;
    *(Vec *)(s + 80) = zero;
    range = (short)(spread * 2);
    low = (short)-spread;
    for (i = 0; i < 8; i++) {
        if (i == 0 || i >= W(324)) {
            *(short *)(s + i * 2 + 328) = 0;
        } else {
            *(short *)(s + i * 2 + 328) = low + FUN_0207b860(UNK_0211c844, range);
        }
    }
    W(408) = scale + (int)FUN_0207b860(UNK_0211c844, variation);
}
