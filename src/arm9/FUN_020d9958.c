// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x50, exact bytes and relocation targets.
// flags: -O4,s
extern int FUN_020d915c(signed char *, int);
int FUN_020d9958(signed char *a, int b) {
    while (b > 0 && a[0] != 0) {
        int r = FUN_020d915c(a, b);
        if (r < 0) {
            return 0;
        }
        b -= r;
        a += r;
        r = FUN_020d915c(a, b);
        if (r < 0) {
            return 0;
        }
        a += r;
        b -= r;
    }
    if (b == 0) {
        return 0;
    }
    if (a[0] != 0) {
        return 0;
    }
    return 1;
}
