// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x6c, exact bytes and relocation targets.
// flags: -O4,p -noThumb
typedef struct {
    int f0;
    unsigned char len;
    unsigned char buf[1];
} S_6e20;
int FUN_02006e20(S_6e20 *a, int b) {
    unsigned char r2 = a->buf[b];
    unsigned char *ip = &a->buf[b];
    if (r2 > 5) {
        return 1;
    }
    if (r2 < 5) {
        return -1;
    }
    unsigned char *end = &a->buf[a->len];
    for (ip++; ip < end; ip++) {
        if (*ip != 0) {
            return 1;
        }
    }
    return (a->buf[b - 1] & 1) ? 1 : -1;
}
