// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x32, exact bytes and relocation targets.
extern int FUN_020d3828(int *);
extern int FUN_020d2cf0(int *, int, int, int);

int FUN_020d3b78(int *p) {
    if (p[3] != 1) {
        if (FUN_020d3828(p) != 0) {
            return 1;
        }
        return 0;
    }
    p[3] = 5;
    if (FUN_020d2cf0(p, 0, 0, 0) != 0) {
        return 1;
    }
    return 0;
}
