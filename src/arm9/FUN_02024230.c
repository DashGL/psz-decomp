// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x88, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern int *DAT_021181a0[];
extern int (*DAT_02107054[])(void);
extern void FUN_0202b824(unsigned char *);
extern unsigned long long FUN_02067e0c(void);
extern void FUN_02021070(void);

void FUN_02024230(void) {
    unsigned char *p = (unsigned char *)DAT_021181a0[1][0x29];
    int t0;
    if (!p) {
        return;
    }
    if (p[9] != 0) {
        FUN_0202b824(p);
    }
    t0 = (int)(FUN_02067e0c() >> 16);
    goto check;
loop:
    FUN_02021070();
check:
    if (DAT_02107054[0x12]() != 0 && p[8] != 0) {
        int dt = (int)(FUN_02067e0c() >> 16) - t0;
        if (dt < 0x27) {
            goto loop;
        }
    }
    p[8] = 0;
}
