// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x14c, exact bytes and relocation targets.
// flags: -O4,p
struct S_020e961c_2 {
    unsigned char pad0[0x10];
    int f10;
    unsigned char f14;
    unsigned char pad15[2];
    unsigned char f17;
    unsigned char pad18[8];
    int f20;
    int f24[1];
    unsigned char pad28[0x7c];
    short fa4[1];
    unsigned char pada6[0x4e];
    int ff4[1];
    unsigned char padf8[0xbc];
    short f1b4;
    unsigned char pad1b6[2];
    int f1b8;
    int f1bc;
    unsigned char pad1c0[8];
    int f1c8;
    unsigned char pad1cc[0x38];
    int f204;
    unsigned char pad208[0xc8];
    unsigned char f2d0[8];
};
extern struct S_020e961c_2 *FUN_020e961c(void);
extern void FUN_020d6674(int a);
extern unsigned char FUN_020e83a8(void);
extern int FUN_020e59d8(int a, int b, int c, unsigned short d, void *e, int f);
extern void FUN_020e859c(int a);

int FUN_020e69ec(int p0, int p1, short p2) {
    int sp0c[2];
    struct S_020e961c_2 *r7;
    struct S_020e961c_2 *r6;
    struct S_020e961c_2 *r4;
    int i;

    if (FUN_020e961c()->f17 != 0 && p0 == FUN_020e961c()->f20) {
        return 0;
    }
    FUN_020e961c()->f17 = 1;
    FUN_020e961c()->f20 = p0;
    FUN_020e961c()->f1bc = 0;
    FUN_020e961c()->f1c8 = 0;
    FUN_020d6674(FUN_020e961c()->f10);
    FUN_020e961c()->f204 = 0;
    r7 = FUN_020e961c();
    r7->ff4[FUN_020e961c()->f14 + 1] = p0;
    r7 = FUN_020e961c();
    r7->f24[FUN_020e961c()->f14 + 1] = p1;
    r7 = FUN_020e961c();
    r7->fa4[FUN_020e961c()->f14 + 1] = p2;
    FUN_020e961c()->f1b8 = p1;
    FUN_020e961c()->f1b4 = p2;
    r6 = FUN_020e961c();
    r4 = FUN_020e961c();
    r6->f2d0[r4->f14 + 1] = FUN_020e83a8();
    sp0c[0] = p0;
    r4 = FUN_020e961c();
    sp0c[1] = r4->f2d0[FUN_020e961c()->f14 + 1];
    for (i = 1; i <= FUN_020e961c()->f14; i++) {
        struct S_020e961c_2 *b1 = FUN_020e961c();
        struct S_020e961c_2 *b2 = FUN_020e961c();
        struct S_020e961c_2 *b3 = FUN_020e961c();
        if (FUN_020e59d8(7, b1->ff4[i], b2->f24[i], (unsigned short)b3->fa4[i], sp0c, 2) != 0) {
            return;
        }
    }
    FUN_020e859c(1);
    return 0;
}
