// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x78, exact bytes and relocation targets.
// flags: -O4,p
struct S_cec58 {
    int f0;
    int f4;
    int f8;
    unsigned short fc;
    unsigned short fe;
    int pad[9];
    int f34;
    int f38;
    int f3c;
};
struct S_r4 {
    int f0;
    int f4;
    int f8;
    int fc;
};
extern int FUN_020c6e0c(int);
extern struct S_r4 *FUN_020c6e10(int, int);
extern int FUN_020cb574(int, int, unsigned short, struct S_r4 *, int *, int);
extern void FUN_020c6eec(int, int);

int FUN_020cec58(int a, struct S_cec58 *b) {
    int sp8;
    if (b == 0) {
        return 3;
    }
    if (b->f34 != 0) {
        return 0;
    }
    while (FUN_020c6e0c(b->f3c) != 0) {
        struct S_r4 *r4 = FUN_020c6e10(b->f3c, 0);
        int res = FUN_020cb574(a, b->f8, b->fc, r4, &sp8, 0);
        if (sp8 != 0 || res != 0) {
            b->f0 = 0x6a;
            return 0;
        }
        if (r4->fc != r4->f8) {
            break;
        }
        FUN_020c6eec(b->f3c, 0);
    }
    return 0;
}
