// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x3c, exact bytes and relocation targets.
extern int FUN_0205c520(int, int);
extern int FUN_02009c84(int);
extern void FUN_02009814(int, int);

void FUN_0209a478(int *p, int a) {
    if (a > 100) {
        a = 100;
    } else if (a < 0) {
        a = 0;
    }
    int fp = a << 12;
    FUN_02009814(FUN_02009c84(FUN_0205c520(fp, 0x64000)), 0x45800000);
    p[4] = FUN_0205c520(fp, 0x64000);
}
