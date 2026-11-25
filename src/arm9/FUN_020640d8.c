// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x38, exact bytes and relocation targets.
// flags: -noThumb
extern int FUN_02053d84(int);
extern void FUN_0206455c(int, int);
extern int *D_021180a0[];

int FUN_020640d8(void) {
    int r = FUN_02053d84(D_021180a0[2][0x142]);
    FUN_0206455c(1, r);
    if (r == 2) {
        r = 0;
    }
    return r;
}
