// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xa4, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern char *DAT_02108c0c;
extern int FUN_020683d4(void);
extern void FUN_020683e8(int);
extern void FUN_0202e834(int);

int FUN_0202dd84(void) {
    int irq = FUN_020683d4();
    char *p = DAT_02108c0c;
    if (p == 0) {
        FUN_020683e8(irq);
        return 1;
    }
    switch (*(int *)(p + 0x2260)) {
    case 6:
        FUN_0202e834(7);
        *(unsigned short *)(DAT_02108c0c + 0x2280) = 4;
        break;
    case 7:
        FUN_020683e8(irq);
        return 2;
    case 3:
        FUN_020683e8(irq);
        return 0;
    default:
        FUN_020683e8(irq);
        return 1;
    }
    FUN_020683e8(irq);
    return 3;
}
