// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x6c, exact bytes and relocation targets.
// flags: -O4,s
void FUN_02079238(void *a, short *b, int c, int d) {
    if (c > 0x540be3ff) {
        c = 0x540be3ff;
    }
    if (c < 0) {
        c = 0;
    }
    int i = 9;
    while (c != 0) {
        int q = c / 10;
        b[i] = c - q * 10;
        c = q;
        i--;
    }
    if (i == 9) {
        b[i] = 0;
        i--;
    }
    if (d != 0) {
        for (; i >= 0; i--) {
            b[i] = 0;
        }
    } else {
        for (; i >= 0; i--) {
            b[i] = -1;
        }
    }
}
