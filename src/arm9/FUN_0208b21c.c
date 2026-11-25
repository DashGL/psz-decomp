// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x86, exact bytes and relocation targets.
// flags: -O4,p
int FUN_0208b21c(int *a, int b, int c) {
    switch (c) {
    case 2:
    case 4:
        return 0;
    case 5:
    case 6:
        return 1;
    case 0:
    case 1:
        if (((a[1] & 0x3fc000) >> 14) > 10) {
            return 0;
        }
        if ((unsigned int)(b - 7) <= 1) {
            return 1;
        }
        break;
    case 3:
        if (((a[1] & 0x3fc000) >> 14) > 10) {
            return 0;
        }
        if ((unsigned int)(b - 9) <= 1) {
            return 1;
        }
        break;
    }
    switch (b) {
    case 0:
    case 1:
    case 2:
    case 5:
    case 6:
        return 1;
    default:
        return 0;
    }
}
