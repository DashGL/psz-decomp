// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x38, exact bytes and relocation targets.
extern void FUN_020e0708(void);
extern int FUN_020e088c(void);
extern int FUN_020daa78(int, int, int, int, int);
extern unsigned char *D_0211dc9c[];

int FUN_020e0770(int a, int b, int c, int d, int e) {
    FUN_020e0708();
    unsigned char *p = D_0211dc9c[1];
    if (p != 0) {
        p[0xc] = 1;
    }
    int r = FUN_020e088c();
    if (r == 2) {
        r = FUN_020daa78(a, b, c, d, e);
    }
    return r;
}
