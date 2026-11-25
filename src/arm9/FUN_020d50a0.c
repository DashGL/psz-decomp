// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x36, exact bytes and relocation targets.
extern int FUN_020d33a8(int *, int);
extern void FUN_020d4ee4(int *);

int FUN_020d50a0(int **p, int *a) {
    int *q = *p;
    int v = *a;
    if (q[3] != 7 && FUN_020d33a8(q, v) == 0) {
        return 0;
    }
    if (q[3] == 7 && q[5] == 0 && q[9] == 0) {
        FUN_020d4ee4(q);
    }
    return 1;
}
