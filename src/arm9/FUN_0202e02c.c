// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x11c, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern int FUN_020683d4(void);
extern void FUN_020683e8(int);
extern void FUN_0202e834(int);
extern int FUN_0205498c(void *);
extern char *DAT_02108c0c;
extern void FUN_0202f4ac(void);

int FUN_0202e02c(void) {
    int irq = FUN_020683d4();
    char *p = DAT_02108c0c;
    if (p == 0) {
        FUN_020683e8(irq);
        return 1;
    }
    switch (*(int *)(p + 0x2260)) {
    case 10:
        FUN_020683e8(irq);
        return 2;
    case 3:
        FUN_020683e8(irq);
        return 0;
    default:
        FUN_020683e8(irq);
        return 1;
    case 9:
        if (*(unsigned char *)(p + 0x226b) == 1) {
            FUN_0202e834(0xa);
            *(unsigned short *)(DAT_02108c0c + 0x2280) = 6;
        } else {
            switch (FUN_0205498c((void *)FUN_0202f4ac)) {
            case 2:
                FUN_0202e834(0xa);
                *(unsigned short *)(DAT_02108c0c + 0x2280) = 6;
                break;
            case 8:
                FUN_020683e8(irq);
                return 4;
            case 3:
            default:
                FUN_0202e834(0xb);
                FUN_020683e8(irq);
                return 7;
            }
        }
        FUN_020683e8(irq);
        return 3;
    }
}
