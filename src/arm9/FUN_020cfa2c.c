// flags: -O4,p
extern void *FUN_020c7bcc(int sz);
extern void FUN_020d1b74(void *a, const void *b);
extern int FUN_020c7468(int a, int b, int c);
extern void FUN_020d1b58(void *a, int b, const void *c);
extern void FUN_020cb778(void *a, int b, int c);
extern int FUN_020c7660(int a, int b);
#pragma thumb off
extern int FUN_0202820c(const void *a);
extern void FUN_02000edc(const void *a, const void *b, const void *c, int d);
#pragma thumb on
extern int FUN_020c74d0(int a, void *b, int c);
extern int FUN_020c75a8(int a);
extern int FUN_020c7824(void);

extern unsigned char DAT_020fe0bc[];
extern unsigned char DAT_020fe0cc[];
extern unsigned char DAT_020fe0f4[];
extern unsigned char DAT_020fe07c[];
extern unsigned char DAT_020fe128[];
extern unsigned char DAT_020fe158[];
extern unsigned char DAT_020fe178[];
extern unsigned char DAT_020fe064[];
extern unsigned char DAT_020fe184[];

struct S4_020cfa2c {
    int f0;
    int f4;
    void *f8;
    int fc;
};

struct S6_020cfa2c {
    int f0;
    struct S4_020cfa2c *f4;
    int f8;
    int fc;
    int f10;
    int f14;
};

struct SockAddr_cfa2c {
    unsigned char f0;
    unsigned char f1;
    unsigned short f2;
    int f4;
};

static inline void clear8_cfa2c(void *p) {
    int *q = (int *)p;
    q[0] = 0;
    q[1] = 0;
}

int FUN_020cfa2c(void *p0, struct S6_020cfa2c *p1) {
    struct SockAddr_cfa2c sa;
    struct S4_020cfa2c *r4 = p1->f4;
    int host;
    int err;

    r4->fc = 0x1000;
    r4->f8 = FUN_020c7bcc(0x1001);
    if (r4->f8 == 0) {
        FUN_020d1b74(p0, DAT_020fe0bc);
        return 1;
    }
    r4->f4 = FUN_020c7468(2, 1, 0);
    if (r4->f4 == -1) {
        FUN_020d1b58(p0, 5, DAT_020fe0cc);
        FUN_020cb778(p0, 3, 1);
        return 3;
    }
    if (FUN_020c7660(r4->f4, 0) == 0) {
        FUN_020d1b58(p0, 5, DAT_020fe0f4);
        FUN_020cb778(p0, 3, 1);
        return 3;
    }
    host = FUN_0202820c(DAT_020fe07c);
    if (host == 0) {
        FUN_020d1b58(p0, 5, DAT_020fe128);
        FUN_020cb778(p0, 3, 1);
        return 3;
    }
    clear8_cfa2c(&sa);
    sa.f1 = 2;
    sa.f4 = ***(int ****)(host + 0xc);
    if (sa.f4 == 0) {
        FUN_02000edc(DAT_020fe158, DAT_020fe178, DAT_020fe064, 0x5a);
    }
    sa.f2 = 0xcd74;
    if (FUN_020c74d0(r4->f4, &sa, 8) == -1) {
        err = FUN_020c75a8(r4->f4);
        if (err != -6 && err != -26 && err != -76) {
            FUN_020d1b58(p0, 5, DAT_020fe184);
            FUN_020cb778(p0, 3, 1);
            return 3;
        }
    }
    p1->f14 = 1;
    *(int *)((char *)r4 + 0x148) = FUN_020c7824();
    return 0;
}
