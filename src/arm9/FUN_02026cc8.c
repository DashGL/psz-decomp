// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x3c, exact bytes and relocation targets.
// flags: -noThumb
extern int FUN_020683d4(void);
extern void FUN_0202447c(int, int);
extern void FUN_020683e8(int);

int FUN_02026cc8(int a) {
    int p = *(int *)(a + 0x64);
    int s = FUN_020683d4();
    int r = *(int *)(p + 0xf8);
    if (r != 0) {
        *(int *)(p + 0xf8) = 0;
        FUN_0202447c(r, 0);
    }
    FUN_020683e8(s);
    return r;
}
