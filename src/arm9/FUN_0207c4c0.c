// flags: -O4,s
extern int DAT_02108c84;
extern short DAT_020ed83c[];
extern unsigned char DAT_0211c844[];

extern void FUN_02034478(int, int);
extern int FUN_0204a580(void);
extern void FUN_0204a9ac(int, short *, short *);
extern void FUN_0207be00(int, int, int);
extern void FUN_0207be20(int, int, int);
extern void FUN_0207be40(unsigned, unsigned, unsigned, unsigned, unsigned, unsigned, unsigned, unsigned);
extern void FUN_0207be7c(unsigned, unsigned, unsigned, unsigned, unsigned, unsigned);
extern void FUN_0207bea0(int);
extern void FUN_0207becc(int, int);
extern void FUN_0207beec(int, int, int);
extern unsigned FUN_0207b860(void *, unsigned);

#pragma thumb off
extern void FUN_0205e6b0(void);
extern void FUN_0205eb28(int, int);
#pragma thumb on

#define REG32(a) (*(volatile unsigned int *)(a))

static inline void G3_Translate(int x, int y, int z) {
    REG32(0x04000470) = x;
    REG32(0x04000470) = y;
    REG32(0x04000470) = z;
}

static inline void G3_Scale(int x, int y, int z) {
    REG32(0x0400046c) = x;
    REG32(0x0400046c) = y;
    REG32(0x0400046c) = z;
}

void FUN_0207c4c0(char *s) {
    short h1, h0;
    short x, y;
    int k;
    short left, z, right;
    int ycoord, sx, sy, count, i;

    if (DAT_02108c84 != 0) {
        FUN_02034478(DAT_02108c84, 1);
    }
    FUN_0205e6b0();
    REG32(0x04000444) = 0;
    G3_Translate(*(int *)(s + 260), *(int *)(s + 264), *(int *)(s + 268));
    h1 = 0;
    h0 = 0;
    FUN_0204a9ac(FUN_0204a580(), &h1, &h0);
    {
        int idx = *(unsigned short *)(s + 316);
        idx >>= 4;
        FUN_0205eb28(DAT_020ed83c[idx * 2], DAT_020ed83c[idx * 2 + 1]);
    }
    G3_Scale(*(int *)(s + 272) << 12, 4096, *(int *)(s + 276) << 12);
    REG32(0x04000440) = 3;
    REG32(0x04000454) = 0;
    REG32(0x04000440) = 2;
    FUN_0207be00(0x7fff, 0x7fff, 1);
    FUN_0207be20(0x7fff, 0, 0);
    FUN_0207be40(6, 1, 2, 0, 0, 0, 0, (unsigned short)*(int *)(s + 284) << 3);
    REG32(0x040004ac) = (unsigned int)(unsigned short)*(int *)(s + 288) >> 1;
    FUN_0207be7c(1, 0, 3, 10, 24, 0x8000);
    FUN_0207bea0(1);

    sx = FUN_0207b860(DAT_0211c844, 2);
    sy = FUN_0207b860(DAT_0211c844, 2);
    REG32(0x04000500) = 3;

    count = *(int *)(s + 304);
    if (count > *(int *)(s + 296) + 2) {
        count = *(int *)(s + 296) + 2;
    } else {
        *(int *)(s + 304) = count + 1;
    }

    for (i = 0; i < count; i++) {
        x = (short)FUN_0207b860(DAT_0211c844, 1024);
        y = (short)FUN_0207b860(DAT_0211c844, 1024);
        if (sx != 0) {
            x *= -1;
        }
        if (sy != 0) {
            y *= -1;
        }
        k = i;
        if (i == count - 1) {
            k = i - 1;
        }
        left = x - *(short *)(s + 294);
        z = *(short *)(s + 292) * k;
        ycoord = k << 17;
        FUN_0207becc(0, ycoord);
        FUN_0207beec(left, y, z);

        right = x + *(short *)(s + 294);
        z = *(short *)(s + 292) * k;
        FUN_0207becc(0x20000, ycoord);
        FUN_0207beec(right, y, z);

        if (sx == 0) {
            sx = 1;
        } else {
            sx = 0;
        }
        if (sy == 0) {
            sy = 1;
        } else {
            sy = 0;
        }
    }

    REG32(0x04000504) = 0;
    REG32(0x04000448) = 1;
}
