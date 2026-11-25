// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x7c, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern int FUN_020683d4(void);
extern int FUN_0202e424(void);
extern void FUN_020683e8(int);

int FUN_0202f9a0(int a) {
    int irq = FUN_020683d4();
    int p = FUN_0202e424();
    if (p == 0) {
        FUN_020683e8(irq);
        return 0;
    }
    if (a != 0) {
        a = *(unsigned char *)(p + 0x226a) != 0 ? 1 : 0;
        *(unsigned char *)(p + 0x226a) = 1;
    } else {
        a = *(unsigned char *)(p + 0x226a) != 0 ? 1 : 0;
        *(unsigned char *)(p + 0x226a) = 0;
    }
    FUN_020683e8(irq);
    return a;
}
