// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0xac, exact bytes and relocation targets; argument/return contract corrected.
// Return contract corrected from explicit producer and consumed caller evidence.
// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xac, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern void FUN_02068444(int);
extern int FUN_0206bcec(void);
extern void FUN_0206b90c(int *, int *);
extern void FUN_0206b7e4(int, int);
extern int FUN_0206bccc(int);
extern int FUN_0206b570(int, int, int);

int FUN_0206b80c(int param_1, int param_2) {
    FUN_02068444(0x996a00);
    if (FUN_0206bcec() != 1) {
        int a, b;
        FUN_0206b90c(&a, &b);
        if (a != 0) {
            FUN_0206b7e4(0, 0);
        }
        if (b != 0) {
            FUN_0206b7e4(1, 0);
        }
        while (FUN_0206bccc(1) == 0) {
            FUN_02068444(0x996a00);
        }
    }
    return FUN_0206b570(0xe, param_1, param_2);
}
