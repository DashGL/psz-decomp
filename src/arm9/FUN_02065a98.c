// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x74, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern char DAT_027e0000[];
extern int DAT_027e0060[];
extern int FUN_020683d4(void);
extern int FUN_020683e8(int);
extern void FUN_020669dc(void *);
void FUN_02065a98(int a, int b) {
    int old = FUN_020683d4();
    if (a != 0) {
        *(volatile int *)((unsigned int)DAT_027e0000 + 0x3ff8) &= ~b;
    }
    FUN_020683e8(old);
    if ((b & *(volatile int *)((unsigned int)DAT_027e0000 + 0x3ff8)) != 0) {
        return;
    }
    do {
        FUN_020669dc(DAT_027e0060);
    } while ((b & *(volatile int *)((unsigned int)DAT_027e0000 + 0x3ff8)) == 0);
}
