// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x48, exact bytes and relocation targets.
extern int FUN_0200a3a0(int, int);
extern void FUN_02050018(int, void (*)(void), int, int);
extern void FUN_020b5564(void);

void FUN_020b551c(int a, int b, int c) {
    FUN_02050018(FUN_0200a3a0(0x26000, c), FUN_020b5564, b, 4);
    FUN_02050018(FUN_0200a3a0(0x2a000, c), FUN_020b5564, b, 4);
    FUN_02050018(FUN_0200a3a0(0x3c000, c), FUN_020b5564, b, 4);
}
