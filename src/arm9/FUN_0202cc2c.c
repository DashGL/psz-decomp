// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xac, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern void FUN_020656b8(void *, int, int);
extern int FUN_0202c918(unsigned short *, int);
extern void FUN_0202cbf8(unsigned short *, unsigned int, int, int);

void FUN_0202cc2c(unsigned short *dst, unsigned short *a, unsigned short *b, int n) {
    int na, nb, i, j;
    FUN_020656b8(dst, 0, n << 1);
    na = FUN_0202c918(a, n);
    nb = FUN_0202c918(b, n);
    for (i = 0; i < nb; i++) {
        for (j = 0; j < na && j < n - i; j++) {
            FUN_0202cbf8(dst, a[j] * b[i], i + j, n);
        }
    }
}
