// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x4a, exact bytes and relocation targets.
extern unsigned int FUN_020dad04(void);
extern int FUN_020db814(void);

int FUN_020da9a8(void) {
    unsigned int r = FUN_020dad04();
    if (r <= 1) {
        return 0;
    }
    if (r < 7) {
        return 1;
    }
    if (r == 9) {
        return 4;
    }
    if (r < 10) {
        return 2;
    }
    if (r == 11) {
        return 4;
    }
    if (r < 16) {
        return 3;
    }
    if (r == 16) {
        return 5;
    }
    if (r == 17) {
        return 4;
    }
    return FUN_020db814();
}
