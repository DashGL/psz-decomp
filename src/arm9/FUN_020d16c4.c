// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x48, exact bytes and relocation targets.
extern int FUN_020d191c(int, const void *, char *, int);
extern int FUN_0206bfa0(char *, const void *, int *, int *, int *);
extern int FUN_020d1664(int, int *, int, int, int);
extern const char D_020fe4d8[];
extern const char D_020fe4e0[];

void FUN_020d16c4(int a, int b, int c, int d) {
    char buf[0x40];
    int v[3];
    if (FUN_020d191c(d, D_020fe4d8, buf, 0x40) != 0) {
        if (FUN_0206bfa0(buf, D_020fe4e0, &v[0], &v[1], &v[2]) == 3) {
            FUN_020d1664(a, v, b, 2, 0);
        }
    }
}
