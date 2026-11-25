// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xa8, exact bytes and relocation targets.
// flags: -noThumb
extern int *DAT_0210888c;
extern int *DAT_021088ec;
extern int DAT_021088f0;
extern int FUN_020683d4(void);
extern void FUN_020683e8(int);
extern void FUN_0202770c(int *);

int FUN_02027af4(void) {
    while (1) {
        int irq = FUN_020683d4();
        int *r6 = DAT_021088ec;
        if (r6 != 0) {
            int *r2 = DAT_0210888c;
            do {
                if (r6 != r2 && (*(short *)((char *)r6 + 0x70) & 0x10) == 0) {
                    break;
                }
                r6 = (int *)r6[0x1f];
            } while (r6 != 0);
        }
        FUN_020683e8(irq);
        if (r6 == 0) {
            break;
        }
        FUN_0202770c(r6);
    }
    if (DAT_021088ec == 0 || (DAT_021088ec == DAT_0210888c && DAT_021088ec[0x1f] == 0)) {
        if (DAT_021088f0 == 0) {
            return 0;
        }
    }
    return -0x1a;
}
