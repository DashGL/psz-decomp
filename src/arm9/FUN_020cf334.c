// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x38, exact bytes and relocation targets.
extern void FUN_02066274(char *, const char *, int, int, int, int);
extern int FUN_020cb314(int, int, char *);
extern const char D_020fdf8c[];

int FUN_020cf334(int a, int b, int c, int *p) {
    char buf[0x40];
    int y = p[1];
    int x = p[0];
    int z = p[2];
    if (p == 0) {
        return 3;
    }
    FUN_02066274(buf, D_020fdf8c, c, x, y, z);
    return FUN_020cb314(a, b, buf);
}
