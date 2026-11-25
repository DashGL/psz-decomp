// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x38, exact bytes and relocation targets.
// flags: -noThumb
extern void FUN_020683d4(void);
extern void FUN_020668a8(void);
extern int **D_0211817c[];

void FUN_02066870(int a) {
    int *p = D_0211817c[2][0];
    void (*fn)(int) = (void (*)(int))p[0x2d];
    if (fn != 0) {
        p[0x2d] = 0;
        fn(a);
        FUN_020683d4();
    }
    FUN_020668a8();
}
