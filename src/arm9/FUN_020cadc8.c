// Verified 2026-11-13: full124-byte body, pinned2.0/sp2p3, exactbytes andeveryrelocation; restoredconsumedarguments.
// flags: -O4,p
extern char DAT_020fd244[];
extern int FUN_020cf7a8(int, int, int **);
extern void FUN_020d1b74(int, const char *);
extern int FUN_020c98cc(int, int *);
extern void FUN_020c7bec(int);
extern int FUN_020cfa00(int *);
extern void FUN_020cf8a0(int, int *);

int FUN_020cadc8(int a, int b) {
    int *sp0;
    int r4 = *(int *)a;
    int res;
    if (FUN_020cf7a8(a, b, &sp0) == 0) {
        FUN_020d1b74(a, DAT_020fd244);
        return 2;
    }
    if (sp0[5] == 0) {
        FUN_020d1b74(a, DAT_020fd244);
        return 2;
    }
    res = FUN_020c98cc(a, sp0);
    if (res == 0) {
        sp0[6]--;
        if (*(int *)(r4 + 0x100) == 0 && sp0[6] <= 0) {
            FUN_020c7bec(sp0[5]);
            sp0[5] = 0;
            if (FUN_020cfa00(sp0) != 0) {
                FUN_020cf8a0(a, sp0);
            }
        }
        res = 0;
    }
    return res;
}
