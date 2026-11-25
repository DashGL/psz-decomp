// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xb4, exact bytes and relocation targets.
// flags: -O4,p
extern unsigned char *DAT_0211dbac;
extern double FUN_020d8224(int, void *, double);
extern int FUN_020d8b8c(int, int);

int FUN_020d8cf0(const int *a, const int *b) {
    int v7 = *a;
    int v6 = *b;
    unsigned char *mgr = DAT_0211dbac;
    double t1 = FUN_020d8224(v7, mgr + 0x498, 0.0);
    double t2 = FUN_020d8224(v6, mgr + 0x498, 0.0);
    double diff = t1 - t2;
    if (!((float)diff > 0.0f) && !((float)diff < 0.0f)) {
        return FUN_020d8b8c(v7, v6);
    }
    if (*(int *)(DAT_0211dbac + 0x6a0) == 0) {
        diff = -diff;
    }
    if ((float)diff > 0.0f) {
        return 1;
    }
    if ((float)diff < 0.0f) {
        return -1;
    }
    return 0;
}
