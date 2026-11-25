// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x34, exact bytes and relocation targets.
extern int FUN_02003e24(int, int);

int FUN_020cf8b4(int a, int *b, int *c) {
    int *q = (int *)b[4];
    if (q != 0 && FUN_02003e24(c[0], q[0]) == 0 && FUN_02003e24(c[1], q[2]) == 0) {
        *(int **)c[2] = b;
        c[3] = 1;
        return 0;
    }
    return 1;
}
