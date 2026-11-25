// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x40, exact bytes and relocation targets.
// flags: -noThumb
extern int FUN_020683d4(void);
extern void FUN_02067cfc(int);
extern void FUN_020683e8(int);
extern unsigned short D_021184e4;

void FUN_02067f88(void) {
    int s = FUN_020683d4();
    if (D_021184e4 != 0) {
        FUN_02067cfc(1);
        D_021184e4 = 0;
    }
    FUN_020683e8(s);
}
