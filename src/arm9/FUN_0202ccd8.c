// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x78, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern int FUN_0202c918(const unsigned short *, int);
extern void FUN_020656b8(void *, int, int);

void FUN_0202ccd8(unsigned short *a, const unsigned short *b, unsigned int c, int d) {
    int n = FUN_0202c918(b, d);
    unsigned int carry = 0;
    int i = 0;
    for (; i < n; i++) {
        unsigned int prod = c * b[i] + carry;
        a[i] = (unsigned short)prod;
        carry = prod >> 16;
    }
    if (i < d) {
        a[i++] = (unsigned short)carry;
    }
    FUN_020656b8(&a[i], 0, (d - i) << 1);
}
