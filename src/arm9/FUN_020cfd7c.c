// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x40, exact bytes and relocation targets.
extern int FUN_020cfb7c(int, int *, int);
extern int FUN_020cfbf0(int, int, int, int, int);

int FUN_020cfd7c(int a, int b, int c, int d, int e, int f) {
    int p;
    int r = FUN_020cfb7c(a, &p, 9);
    if (r != 0) {
        return r;
    }
    *(int *)(p + 0x14c) = b;
    *(int *)(p + 0x150) = c;
    r = FUN_020cfbf0(a, p, d, e, f);
    if (r != 0) {
        return r;
    }
    return 0;
}
