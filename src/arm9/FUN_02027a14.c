// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x3c, exact bytes and relocation targets.
// flags: -noThumb
extern int FUN_020683d4(void);
extern void FUN_02027874(int);
extern void FUN_020683e8(int);
extern int D_021088f0;

void FUN_02027a14(void) {
    int irq = FUN_020683d4();
    while (D_021088f0 != 0) {
        FUN_02027874(D_021088f0);
    }
    FUN_020683e8(irq);
}
