// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x3c, exact bytes and relocation targets.
// flags: -noThumb
extern int FUN_020244b4(int, int, int, int);

int FUN_02024578(int a, int b, int c, int d, int e, int f) {
    int r = FUN_020244b4(a, b, e, f);
    if (r != 0 && d != 0) {
        return FUN_020244b4(c, d, e, 0);
    }
    return r;
}
