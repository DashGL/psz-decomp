// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x6a, exact bytes and relocation targets.
// flags: -O4,s
int FUN_02091814(unsigned char *a) {
    switch (a[0]) {
    case 0: {
        int v = a[1];
        if (v < 1) {
            return 0x20;
        }
        if (v <= 7) {
            return 0x20;
        }
        if (v <= 0xd) {
            return 0x21;
        }
        if (v <= 0x10) {
            return 0x22;
        }
        if (v == 0x11) {
            return 0x25;
        }
        return 0x20;
    }
    case 1:
        return 0x23;
    case 2:
        return 0x24;
    case 3:
        if (a[1] == 0) {
            return 0x26;
        }
        return 0x27;
    case 4:
        return 0x28;
    default:
        return -1;
    }
}
