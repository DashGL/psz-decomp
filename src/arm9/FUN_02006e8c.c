// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x50, exact bytes and relocation targets.
// flags: -O4,p -noThumb
struct Dec {
    short f0;
    short f2;
    char f4;
    unsigned char digits[1];
};

void FUN_02006e8c(struct Dec *a, int b) {
    unsigned char *start = a->digits;
    unsigned char *p = start + b - 1;
    for (;;) {
        if (*p < 9) {
            *p = *p + 1;
            return;
        }
        if (p == start) {
            *p = 1;
            a->f2++;
            return;
        }
        *p-- = 0;
    }
}
