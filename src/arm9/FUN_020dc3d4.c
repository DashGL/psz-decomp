// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x40, exact bytes and relocation targets.
extern int FUN_020dac74(int);
extern void FUN_020dc540(int, int, int);
extern int FUN_020284ac(int);
extern void FUN_020dad18(int);
extern int D_02108880;

int FUN_020dc3d4(int a) {
    int r6 = FUN_020dac74(1);
    int r4 = FUN_020dac74(4);
    FUN_020dc540(r6, a, r4);
    D_02108880 = 4;
    if (FUN_020284ac(r4) != 0) {
        FUN_020dad18(2);
        return 0x11;
    }
    return 0xc;
}
