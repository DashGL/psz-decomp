// Actual ROM 020ba824 BLS skips both low-water fields; corrected conditional second store.
struct Glob {
    int f0;
    int f4;
    unsigned int f8;
    int fc;
};
extern struct Glob D_0211b28c;
extern unsigned int D_020fc8d8;
extern int FUN_020683d4(void);
extern int FUN_020121ac(int, int, int);
extern void FUN_020ba8cc(unsigned int *, unsigned int *, int, int);
extern void FUN_02068728(void);
extern void FUN_020683e8(int);

int FUN_020ba7f4(int a, int b) {
    unsigned int u4;
    unsigned int u0;
    int s = FUN_020683d4();
    int r = FUN_020121ac(D_0211b28c.fc, a, b);
    FUN_020ba8cc(&u4, &u0, 0, 0);
    if (D_020fc8d8 > u4) {
        D_020fc8d8 = u4;
        D_0211b28c.f8 = u0;
    }
    if (r == 0) {
        FUN_02068728();
    }
    FUN_020683e8(s);
    return r;
}
