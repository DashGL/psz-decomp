// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xd0, exact bytes and relocation targets.
// flags: -noThumb
extern int FUN_02027f8c(void *);
extern int FUN_020683d4(void);
extern int FUN_02027e80(void *);
extern int FUN_020271f8(void *);
extern void FUN_020683e8(int);

int FUN_02027db0(void *a0) {
    int r4 = 0;
    if (FUN_02027f8c(a0) != 0) {
        r4 |= 0x80;
    } else {
        if (*(volatile short *)((char *)a0 + 0x70) & 0x40) {
            r4 |= 0x20;
        }
        if (*(signed char *)((char *)a0 + 0x73) == 1 || (*(volatile short *)((char *)a0 + 0x70) & 4) != 0) {
            int r6 = FUN_020683d4();
            if (FUN_02027e80(a0) > 0) {
                r4 |= 1;
            }
            if (FUN_020271f8(a0) > 0) {
                r4 |= 8;
            }
            FUN_020683e8(r6);
        }
        int b = 1;
        signed char st = *(signed char *)((char *)a0 + 0x73);
        if (st != 0 && st != 4) {
            b = 0;
        }
        if (b) {
            if ((*(volatile short *)((char *)a0 + 0x70) & 4) != 0 && *(unsigned char *)((char *)a0 + 8) != 4) {
                if ((r4 & 1) == 0) {
                    *(volatile short *)((char *)a0 + 0x70) &= ~6;
                }
            }
            if ((*(volatile short *)((char *)a0 + 0x70) & 2) == 0 && (*(volatile short *)((char *)a0 + 0x70) & 4) == 0) {
                r4 |= 0x40;
            }
        }
    }
    return r4;
}
