// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x80, exact bytes and relocation targets.
// flags: -O4,s
extern int DAT_020fcda4[];
extern void FUN_020d1b74(int *, int *);
extern int FUN_020cf7a8(int *, int, int **);
extern void FUN_020c7bec(int);
extern int FUN_020cfa00(int *);
extern void FUN_020cf8a0(int *, int *);

int FUN_020c8c80(int *a, int b) {
    int r4;
    int *sp0;
    if (a == 0 || (r4 = *a) == 0) {
        return 2;
    }
    if (*(int *)(r4 + 0x108) != 0) {
        return 0;
    }
    if (*(int *)(r4 + 0x1f4) == 4) {
        FUN_020d1b74(a, DAT_020fcda4);
        return 2;
    }
    if (FUN_020cf7a8(a, b, &sp0) == 0) {
        return 0;
    }
    sp0[6]--;
    if (*(int *)(r4 + 0x100) == 0 && sp0[6] <= 0) {
        FUN_020c7bec(sp0[5]);
        sp0[5] = 0;
        if (FUN_020cfa00(sp0) != 0) {
            FUN_020cf8a0(a, sp0);
        }
    }
    return 0;
}
