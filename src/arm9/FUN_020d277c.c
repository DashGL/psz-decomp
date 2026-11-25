// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x40, exact bytes and relocation targets.
extern int FUN_020d2648(int, int);
extern void FUN_02066274(char *, const char *, int, int);
extern long long FUN_020d26c8(int, char *, int, long long, int);
extern const char D_020fe77c[];

long long FUN_020d277c(int a, int b, int c, long long d, int e) {
    char buf[0x40];
    int r = FUN_020d2648(a, e);
    FUN_02066274(buf, D_020fe77c, b, r);
    return FUN_020d26c8(a, buf, c, d, e);
}
