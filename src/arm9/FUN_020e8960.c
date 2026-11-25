// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xa0, exact bytes and relocation targets.
// flags: -O4,s
extern int FUN_020e1534(void);
extern void FUN_020e1ebc(int, int);
extern void FUN_020e2940(int, int);
extern void FUN_020e4a2c(int, int);
extern void FUN_020e056c(int, int);

int FUN_020e8960(int r5) {
    int r6;
    int r4;
    if (r5 == 0) {
        return 0;
    }
    switch (r5) {
    case 1:
        r6 = 6;
        r4 = r6 - 0x38;
        break;
    case 2:
        r6 = 6;
        r4 = r6 - 0x42;
        break;
    case 3:
        r6 = 6;
        r4 = r6 - 0x24;
        break;
    case 4:
        r6 = 6;
        r4 = r6 - 0x56;
        break;
    case 5:
        r6 = 6;
        r4 = r6 - 0x1a;
        break;
    }
    switch (FUN_020e1534()) {
    case 2:
        FUN_020e1ebc(r6, r4 - 0xfa00);
        break;
    case 4:
        FUN_020e2940(r6, r4 - 0x12110);
        break;
    case 5:
        FUN_020e4a2c(r6, r4 - 0x14820);
        break;
    default:
        FUN_020e056c(r6, r4 - 0x16f30);
        break;
    }
    return r5;
}
