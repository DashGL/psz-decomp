// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x134, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern int FUN_0202c918(unsigned short *, int);
extern void FUN_020656b8(void *, int, int);
extern void FUN_0202cbf8(unsigned short *, unsigned int, int, int);

void FUN_0202cd50(unsigned short *dst, unsigned short *a, int n) {
    int na = FUN_0202c918(a, n);
    int i, j;
    unsigned int prod;
    int k;

    if (n > (na << 1)) {
        FUN_020656b8(dst + (na << 1), 0, (n - (na << 1)) << 1);
    }
    for (i = 0; i < na; i++) {
        k = i << 1;
        if (k >= n) {
            break;
        }
        prod = (unsigned int)a[i] * (unsigned int)a[i];
        dst[k] = (unsigned short)prod;
        if (k == n - 1) {
            break;
        }
        dst[k + 1] = (unsigned short)(prod >> 16);
    }
    for (i = 0; i < na; i++) {
        for (j = i + 1; j < na && (k = i + j) < n; j++) {
            prod = (unsigned int)a[j] * (unsigned int)a[i];
            if (prod <= 0x7fff8000u) {
                FUN_0202cbf8(dst, prod << 1, k, n);
            } else {
                FUN_0202cbf8(dst, prod, k, n);
                FUN_0202cbf8(dst, prod, k, n);
            }
        }
    }
}
