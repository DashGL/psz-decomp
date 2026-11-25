// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x74, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern int FUN_02026ad0(void *, int, int, int, int);
extern int FUN_02026954(void *, int, int, int, int);
int FUN_020268e0(signed char *a, int b, int c, int d, int e, int f) {
    if (a[0x73] == 4) {
        return FUN_02026ad0(a, b, c, d, e);
    }
    int res = FUN_02026954(a, b, c, d, e);
    if (res == -6 && (f & 1)) {
        res = FUN_02026ad0(a, b, c, d, e);
    }
    return res;
}
