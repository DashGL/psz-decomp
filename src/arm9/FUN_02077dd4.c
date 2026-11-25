// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x34, exact bytes and relocation targets.
extern int *FUN_02072af0(void);
extern void FUN_02072c20(int *, int, int);

void FUN_02077dd4(int *p) {
    void (*fn)(void) = (void (*)(void))p[0x48];
    if (fn != 0) {
        fn();
    }
    p[0x48] = 0;
    p[0x47] = 0;
    if (FUN_02072af0()[2] == 0xf) {
        FUN_02072c20(FUN_02072af0(), 0, 1);
    }
}
