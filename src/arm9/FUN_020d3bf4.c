// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x30, exact bytes and relocation targets.
extern int FUN_020d4ab0(int *);
extern int FUN_020d37d0(int *, int, int);

int FUN_020d3bf4(int *p) {
    int c;
    if (FUN_020d4ab0(p) == 0) {
        return 0;
    }
    switch (p[3]) {
    case 6:
        c = 0;
        break;
    default:
        c = 1;
        break;
    }
    if (FUN_020d37d0(p, 2, c) == 0) {
        return 0;
    }
    return 1;
}
