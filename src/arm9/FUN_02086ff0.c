// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x4c, exact bytes and relocation targets.
extern unsigned int FUN_0200d0d0(void);
extern void FUN_0200d0e4(unsigned int);

void FUN_02086ff0(char *a) {
    *(unsigned int *)(a + 0xa4) += FUN_0200d0d0() / 60;
    if (*(unsigned int *)(a + 0xa4) > 59999) {
        *(unsigned int *)(a + 0xa4) = 59999;
    }
    if (FUN_0200d0d0() != 0) {
        FUN_0200d0e4(FUN_0200d0d0() % 60);
    }
}
