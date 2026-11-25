// flags: -O4,s
typedef struct {
    unsigned char b[6];
} Six;
typedef struct {
    int x, y, z;
} Vec;

extern const int UNK_020f2ae4[];
extern char UNK_0211c844[];
extern const short UNK_020ed83c[];
extern void FUN_020473e8(void *, void *, int);
extern void FUN_0207a3f4(Six *, int, int, int);
extern unsigned int FUN_0207b860(void *, unsigned int);
extern int FUN_0207a3ac(int, int);
extern int FUN_0207a3d0(int, int);
extern int FUN_0204e8bc(Vec *, int, int);
extern void FUN_0203647c(Vec *, Vec *, Vec *);
extern void FUN_0200c938(void *, int);
extern void FUN_02034680(Vec *, void *);
extern char *FUN_0204daa8(int);
extern int FUN_0205c9e4(int, int);
extern int FUN_0205c540(int);

#define W(n) (*(int *)(s + (n)))

void FUN_0207c080(char *s, void *d, int level, int slot) {
    Vec position;
    Vec base;
    Vec origin;
    Vec if_adj;
    Vec delta;
    Vec else_adj;
    Vec zero;
    Six b;
    Six a;
    int duration;
    int index;
    int hit;
    int dx, dz;

    FUN_020473e8(s, d, 0);
    W(320) = level;
    W(324) = (W(320) - 1) / 5;
    FUN_0207a3f4(&a, 2, W(320), 1);
    b = a;
    duration = (W(76) * b.b[2]) / ((int)b.b[3] << 7);
    W(272) = 2;
    W(276) = 10;
    W(296) = 6;
    *(unsigned short *)(s + 292) = 0x7fff / (W(296) * W(276));
    *(unsigned short *)(s + 294) = 0x800;
    W(300) = (int)b.b[2] << 12;
    W(304) = 2;
    W(312) = slot;
    index = W(324);
    if (index >= 0 && index < 3) {
        W(308) = UNK_020f2ae4[index];
    }
    { int r = (int)FUN_0207b860(UNK_0211c844, 10); int f = duration + r; W(72) = W(68) + f * W(76); }
    W(332) = W(68) + (W(72) - W(68)) / 2;
    W(172) = 2;
    origin.x = W(92);
    origin.y = 0x1000;
    origin.z = W(100);
    *(Vec *)(s + 260) = origin;
    W(336) = FUN_0207a3ac(W(232), W(312));
    W(340) = FUN_0207a3d0(W(232), W(312));
    position.x = 0;
    position.y = 0;
    position.z = 0;
    hit = 0;
    if (W(336) != -1) {
        hit = FUN_0204e8bc(&position, W(336), W(340));
    }
    if (hit != 0) {
        delta.x = 0;
        delta.y = 0x1000;
        delta.z = 0;
        FUN_0203647c(&if_adj, &position, &delta);
        *(Vec *)(s + 92) = if_adj;
    } else {
        char *actor = FUN_0204daa8(W(232));
        int angle = 0;
        int rad;
        FUN_0200c938(&base, 12);
        if (actor) {
            angle = *(unsigned short *)(actor + 192);
            FUN_02034680(&base, actor + 156);
        }
        rad = W(300);
        index = (angle >> 4) * 2;
        else_adj.x = base.x + ((UNK_020ed83c[index] * rad) >> 12);
        else_adj.y = 0x1000;
        else_adj.z = base.z + ((UNK_020ed83c[index + 1] * rad) >> 12);
        *(Vec *)(s + 92) = else_adj;
        W(308) = 1;
        if (W(312) > 0) {
            *(Vec *)(s + 92) = *(Vec *)(s + 260);
        }
    }
    zero.x = 0;
    zero.y = 0;
    zero.z = 0;
    *(Vec *)(s + 80) = zero;
    dx = -(W(92) - W(260));
    dz = W(100) - W(268);
    *(unsigned short *)(s + 316) = FUN_0205c9e4(-dx, dz);
    *(unsigned short *)(s + 292) =
        FUN_0205c540((int)(((long long)dx * dx + 0x800) >> 12) + (int)(((long long)dz * dz + 0x800) >> 12))
        / (W(296) * W(276));
}
