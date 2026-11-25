// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x38, exact bytes and relocation targets.
extern void FUN_020ddaf4(void);
extern void FUN_020ddb54(void);
extern void FUN_020e05d8(int, int, int);
extern int *D_0211de44[];

void FUN_020e1eec(void) {
    if (D_0211de44[1][9] != 0) {
        FUN_020ddaf4();
        FUN_020ddb54();
        FUN_020e05d8(0, D_0211de44[1][9], 0);
        D_0211de44[1][9] = 0;
    }
    D_0211de44[1] = 0;
}
