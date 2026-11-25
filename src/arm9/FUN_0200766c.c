// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xe0, exact bytes and relocation targets.
// flags: -O4,p -noThumb
int FUN_0200766c(unsigned char *a0, unsigned char *a1) {
    int i, min_len, len1, len0;
    if (a0[5] == 0) {
        return a1[5] != 0;
    }
    if (a1[5] == 0) {
        return 0;
    }
    if (*(short *)(a0 + 2) == *(short *)(a1 + 2)) {
        len0 = a0[4];
        len1 = a1[4];
        i = 0;
        min_len = len0;
        if (len0 > len1) {
            min_len = len1;
        }
        for (; i < min_len; i++) {
            unsigned char c1 = a1[i + 5];
            unsigned char c0 = a0[i + 5];
            if (c0 < c1) {
                return 1;
            }
            if (c1 < c0) {
                return 0;
            }
        }
        if (min_len == len0) {
            if (i < len1) {
                do {
                    if (a1[i + 5] != 0) {
                        return 1;
                    }
                    i++;
                } while (i < *(volatile unsigned char *)(a1 + 4));
            }
        }
        return 0;
    }
    return *(short *)(a0 + 2) < *(short *)(a1 + 2);
}
