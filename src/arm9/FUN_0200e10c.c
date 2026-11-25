// flags: -O4,p -noThumb
typedef unsigned char u8;
typedef unsigned int u32;

struct S_0200e10c {
    u8 pad00[0x20];
    int f20;
    int f24_0 : 1;
    u32 f28;
    int f2c;
    int f30;
    int f34;
    int f38;
    int f3c;
    int f40;
    int f44;
    int f48;
    u8 f4c[4];
};

struct Pair_2758 {
    u32 a;
    u32 b;
};

extern struct Pair_2758 DAT_02102758[];
extern void FUN_0200e45c(void);
extern int DAT_0210270c;

extern void FUN_0200e300(struct S_0200e10c *);
extern int FUN_0200d5fc(void);
extern void FUN_020697a4(u8, int, u32, int, int, u32, int, int, int, int);
extern void FUN_020696dc(int, int, int, void *, struct S_0200e10c *);
extern void FUN_020119b8(void *, struct S_0200e10c *);
extern int FUN_020683d4(void);
extern void FUN_0200e46c(struct S_0200e10c *, int);
extern void FUN_020683e8(int);

int FUN_0200e10c(struct S_0200e10c *sl, int sb, int r8, int r4, int sp40, int fp, int sp48, int sp4c) {
    int sp18;
    int r6;
    if (sl->f24_0) {
        FUN_0200e300(sl);
    }
    u32 n = (u32)r4 / ((u32)(fp * 32) * (u32)sl->f48);
    u32 bufSize = (n * fp) << 5;
    sl->f28 = bufSize;
    sp18 = ((u32)sp40 * ((sb == 1) ? (bufSize >> 1) : bufSize)) / (u32)fp;
    sl->f40 = FUN_0200d5fc();
    if (sl->f40 < 0) {
        return 0;
    }
    for (r6 = 0; r6 < sl->f48; r6++) {
        u8 ch = sl->f4c[r6];
        DAT_02102758[ch].a = sl->f28 * r6 + r8;
        DAT_02102758[ch].b = 0;
        FUN_020697a4(ch, sb, DAT_02102758[ch].a, 1, 0, sl->f28 >> 2, 0x7f, 0, sp40 << 5, 0x40);
    }
    FUN_020696dc(sl->f40, sp18, sp18, (void *)FUN_0200e45c, sl);
    FUN_020119b8(&DAT_0210270c, sl);
    sl->f20 = sb;
    sl->f2c = fp;
    sl->f30 = sp48;
    sl->f34 = sp4c;
    sl->f38 = 0;
    sl->f3c = 0;
    sl->f24_0 = 1;
    {
        int irq = FUN_020683d4();
        sl->f2c = 1;
        FUN_0200e46c(sl, 0);
        sl->f2c = fp;
        FUN_020683e8(irq);
    }
    return 1;
}
