// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xa4, exact bytes and relocation targets.
// flags: -noThumb
extern int DAT_021181a0[];
extern int DAT_02108890[];
extern int FUN_020683d4(void);
extern void FUN_020683e8(int);

int FUN_020274c0(int param_1) {
    int r5 = *(int *)(DAT_021181a0[1] + 0xa4);
    int irq = FUN_020683d4();
    if (r5 != 0) {
        int a = *(unsigned short *)(r5 + 0x2e);
        int b;
        if (a != 0 && (b = *(unsigned short *)(r5 + 0x2c)) != 0) {
            int c = DAT_02108890[9];
            if (a > b) {
                a = b;
            }
            if (a > c) {
                a = c;
            }
            r5 = a << 1;
        } else {
            r5 = DAT_02108890[9] << 1;
        }
    } else {
        r5 = DAT_02108890[9] << 1;
    }
    FUN_020683e8(irq);
    if (r5 > 0) {
        int q = param_1 / r5;
        if (q > 0) {
            return r5 * q;
        }
    }
    return param_1;
}
