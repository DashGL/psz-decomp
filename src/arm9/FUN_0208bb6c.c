// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x52, exact bytes and relocation targets.
int FUN_0208bb6c(int a, unsigned char *b) {
    switch (b[0]) {
    case 0:
        if (b[1] == 0x11) {
            return 2;
        }
        return 1;
    case 1:
    case 2:
        return 2;
    case 3:
        switch (b[1]) {
        case 0:
        case 2:
            return 0;
        case 1:
        case 3:
        default:
            return 3;
        }
    }
    return 3;
}
