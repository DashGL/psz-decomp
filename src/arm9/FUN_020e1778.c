// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xc0, exact bytes and relocation targets.
// flags: -O4,s
extern void FUN_020e1ebc(int, int);
extern void FUN_020e4a2c(int, int);
extern void FUN_020e2940(int, int);
extern char *DAT_0211dcbc;

int FUN_020e1778(int param_1) {
    int r6, r4;
    if (param_1 == 0) {
        return 0;
    }
    switch (param_1) {
    case 1:
        r6 = 9;
        r4 = r6 - 10;
        break;
    case 2:
        r6 = 9;
        r4 = r6 - 11;
        break;
    case 3:
        r6 = 6;
        r4 = r6 - 16;
        break;
    case 4:
        r6 = 6;
        r4 = r6 - 26;
        break;
    }
    switch (*(int *)(DAT_0211dcbc + 0x24)) {
    case 1:
        r4 -= 0xee48;
        FUN_020e1ebc(r6, r4);
        break;
    case 2:
        r4 -= 0xee48;
        if (*(int *)(DAT_0211dcbc + 0x9c) < 1) {
            FUN_020e1ebc(r6, r4);
        }
        break;
    case 5:
        r4 -= 0x13c68;
        FUN_020e4a2c(r6, r4);
        break;
    case 4:
        r4 -= 0x11558;
        break;
    default:
        r4 -= 0x16378;
        break;
    }
    FUN_020e2940(r6, r4);
    return param_1;
}
