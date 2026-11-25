// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x74, exact bytes and relocation targets.
// flags: -O4,p
unsigned char FUN_020d77d4(const unsigned char *a, unsigned int b, const unsigned char *c, unsigned int d, unsigned char *e, unsigned int *f) {
    unsigned int sp_c;
    unsigned int r7;
    unsigned int val;
    if (b == 0) {
        return 0;
    }
    sp_c = 0;
    r7 = 1;
    while (r7 < b) {
        r7 = (r7 << 1) + 1;
    }
    do {
        unsigned int idx = (*f)++;
        *e = a[*e] + c[idx];
        if (*f >= d) {
            *f = 0;
            *e += d;
        }
        val = *e & r7;
        if (++sp_c > 11) {
            val %= b;
        }
    } while (val > b);
    return (unsigned char)val;
}
