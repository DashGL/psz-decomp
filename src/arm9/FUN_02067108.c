// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x7c, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern int FUN_020683d4(void);
extern void FUN_020683e8(int);
extern void FUN_020669dc(void *);

int FUN_02067108(int a, int *b, int c) {
    int irq = FUN_020683d4();
    while (*(int *)(a + 0x1c) == 0) {
        if ((c & 1) == 0) {
            FUN_020683e8(irq);
            return 0;
        }
        FUN_020669dc((void *)(a + 8));
    }
    if (b != 0) {
        *b = ((int *)(*(int *)(a + 0x10)))[*(int *)(a + 0x18)];
    }
    FUN_020683e8(irq);
    return 1;
}
