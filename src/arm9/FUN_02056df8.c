// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x60, exact bytes and relocation targets.
// flags: -noThumb
extern int FUN_020683d4(void);
extern void FUN_02056d08(int, int, int);
extern void FUN_020683e8(int);
void FUN_02056df8(int a) {
    volatile int sp0;
    sp0 = *(*(unsigned short *)0x027ffc10 == 0 ? (int *)0x027ff800 : (int *)0x027ffc00);
    if (a == sp0) {
        return;
    }
    int r4 = FUN_020683d4();
    FUN_02056d08(0xe, 0x11, 0);
    FUN_020683e8(r4);
}
