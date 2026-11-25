// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x60, exact bytes and relocation targets.
// flags: -O4,p
extern const char DAT_020fe4bc[];
extern const char DAT_020fe4c0[];
extern int FUN_020cf334(void *, void *, int, void *);
extern void FUN_02066274(char *, const char *, int, void *);
extern int FUN_020cb314(void *, void *, char *);
extern int FUN_020cf36c(void *, void *, const char *, int);
int FUN_020d1664(void *a, void *b, void *c, void *d, const char *e) {
    char buf[0x20];
    int res;
    if (e == 0) {
        e = DAT_020fe4bc;
    }
    res = FUN_020cf334(a, c, 0xc9, b);
    if (res != 0) {
        return res;
    }
    FUN_02066274(buf, DAT_020fe4c0, 1, d);
    res = FUN_020cb314(a, c, buf);
    if (res != 0) {
        return res;
    }
    res = FUN_020cf36c(a, c, e, -1);
    if (res != 0) {
        return res;
    }
    return 0;
}
