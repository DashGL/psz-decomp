// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x74, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern int FUN_020683d4(void);
extern void FUN_0206732c(int, void *);
extern void FUN_020683e8(int);
extern int DAT_021181a0[];
int FUN_020672b8(int *a) {
    int r4 = FUN_020683d4();
    int r2 = a[2];
    int r0 = DAT_021181a0[1];
    int r6;
    if (r2 == 0) {
        a[2] = r0;
        a[3]++;
        FUN_0206732c(r0, a);
        r6 = 1;
    } else if (r2 != r0) {
        r6 = 0;
    } else {
        a[3]++;
        r6 = 1;
    }
    FUN_020683e8(r4);
    return r6;
}
