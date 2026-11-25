// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x3c, exact bytes and relocation targets.
// flags: -noThumb
extern int FUN_020683d4(void);
extern void FUN_02068728(void);
extern void FUN_0206411c(void);
extern void FUN_020683e8(int);
extern char *D_021180a0[];

void FUN_020641b0(void) {
    int irq = FUN_020683d4();
    if (*(int *)(D_021180a0[3] + 0x1320) == 0) {
        FUN_02068728();
    }
    FUN_0206411c();
    FUN_020683e8(irq);
}
