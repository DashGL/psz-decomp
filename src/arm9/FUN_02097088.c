// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x3c, exact bytes and relocation targets.
extern void FUN_02098e9c(int *, int);
extern void FUN_02098e24(int *, int, int);

void FUN_02097088(int a) {
    int *p = *(int **)(a + 0x3c);
    if (p != 0) {
        int r6;
        int r4 = *p;
        r6 = *(int *)(a + 0x38);
        FUN_02098e9c(p, *(int *)(a + 0x34));
        p = *(int **)(a + 0x3c);
        *p = *(int *)(a + 0x34);
        if (*p != 5 && *p != 6) {
            p[4] = 1;
        }
        *(int *)(a + 0x30) = *(int *)(a + 0x34);
        *(int *)(a + 0x34) = 0;
        *(int *)(a + 0x38) = 0;
        FUN_02098e24(*(int **)(a + 0x3c), r4, r6);
    }
}
