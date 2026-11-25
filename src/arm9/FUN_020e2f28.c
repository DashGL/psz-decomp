// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x74, exact bytes and relocation targets.
// flags: -O4,p
extern int FUN_020e2454(void);
extern int FUN_020e1ea8(void);
extern int FUN_020dd83c(int, int);
extern int FUN_020c8e5c(int, int, int *);
extern int FUN_020c8d2c(int, int, int);
extern int DAT_0211de50[];
int FUN_020e2f28(int a, int b) {
    int r4 = a;
    int sp0 = 0;
    int r5 = b;
    if (DAT_0211de50[3] == 0 || FUN_020e2454() == 0) {
        return 0;
    }
    r4 = FUN_020dd83c(FUN_020e1ea8(), r4);
    if (r4 > 0) {
        if (FUN_020c8e5c(*(int *)(DAT_0211de50[3] + 4), r4, &sp0) != 0) {
            return 0;
        }
    }
    if (r4 <= 0 || sp0 == -1) {
        return 0;
    }
    switch (FUN_020c8d2c(*(int *)(DAT_0211de50[3] + 4), sp0, r5)) {
    case 0:
        break;
    default:
        return 0;
    }
    return 1;
}
