// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xe0, exact bytes and relocation targets.
// flags: -O4,p -noThumb
int FUN_0200758c(unsigned char *a0, unsigned char *a1) {
    int len1, i, min_len, len0;
    if (a0[5] == 0) {
        return a1[5] == 0;
    }
    if (a1[5] == 0) {
        return a0[5] == 0;
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
            if (a0[i + 5] != a1[i + 5]) {
                return 0;
            }
        }
        if (min_len == len0) {
            a0 = a1;
        }
        for (; i < *(volatile unsigned char *)(a0 + 4); i++) {
            if (a0[i + 5] != 0) {
                return 0;
            }
        }
        return 1;
    }
    return 0;
}
