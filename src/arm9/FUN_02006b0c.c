// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xbc, exact bytes and relocation targets.
// flags: -O4,p -noThumb
double FUN_02006b0c(double x, int *eptr) {
    int hx = *((int *)&x + 1);
    int ix = hx & 0x7fffffff;
    int lx = *(int *)&x;
    *eptr = 0;
    if (ix >= 0x7ff00000 || (ix | lx) == 0) {
        return x;
    }
    if (ix < 0x00100000) {
        x *= 18014398509481984.0;
        hx = *((int *)&x + 1);
        ix = hx & 0x7fffffff;
        *eptr = -54;
    }
    *eptr += (ix >> 20) - 1022;
    *((int *)&x + 1) = (hx & 0x800fffff) | 0x3fe00000;
    return x;
}
