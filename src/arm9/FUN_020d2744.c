// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x38, exact bytes and relocation targets.
extern int FUN_020d2648(int, int);
extern void FUN_02066274(char *, const char *, int, int);
extern int FUN_020d2688(int, char *, int, int, int);
extern const char D_020fe77c[];

int FUN_020d2744(int a, int b, int c, int d, int e) {
    char buf[0x40];
    int r = FUN_020d2648(a, e);
    FUN_02066274(buf, D_020fe77c, b, r);
    return FUN_020d2688(a, buf, c, d, e);
}
