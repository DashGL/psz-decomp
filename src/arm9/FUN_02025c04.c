// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x40, exact bytes and relocation targets.
// flags: -noThumb
extern int FUN_02025e3c(int);
extern int FUN_02026170(void *);
extern int *D_020f6968;
extern int D_020f69a0;
extern int D_02108880[];

int FUN_02025c04(void) {
    int r = FUN_02025e3c(D_020f6968[8]);
    if (r >= 0) {
        D_02108880[3] = FUN_02026170(&D_020f69a0);
    }
    return r;
}
