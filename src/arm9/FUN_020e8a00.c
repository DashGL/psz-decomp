// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x40, exact bytes and relocation targets.
extern void FUN_020e4a2c(int, int);

int FUN_020e8a00(int a) {
    int x, y;
    if (a == 0) {
        return 0;
    }
    switch (a) {
    case 1:
        x = 9;
        y = -1;
        break;
    case 2:
        x = 6;
        y = -50;
        break;
    case 3:
        x = 6;
        y = -30;
        break;
    }
    FUN_020e4a2c(x, y - 86000);
    return a;
}
