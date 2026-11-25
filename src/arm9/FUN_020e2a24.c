// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x34, exact bytes and relocation targets.
extern int FUN_020e1ea8(void);
extern int FUN_020dd83c(int, int);
extern int *D_0211de50[];

int FUN_020e2a24(int a) {
    int base = D_0211de50[3][6];
    if (base == 0) {
        return 0;
    }
    int r = FUN_020dd83c(FUN_020e1ea8(), base + a * 0xc);
    if (r != 0) {
        if (r != -1) {
            return r;
        }
    }
    return 0;
}
