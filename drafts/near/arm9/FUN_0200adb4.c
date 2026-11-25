// near: 20w/46b register allocation (r4 vs r3) in signed variable-length integer decode
// flags: -noThumb
const unsigned char *FUN_0200adb4(const unsigned char *r0, int *r1) {
    int r2 = *(const signed char *)r0;
    if (!(r2 & 1)) {
        *r1 = r2 >> 1;
        return r0 + 1;
    }
    int r4 = r0[1];
    if (!(r2 & 2)) {
        *r1 = r4 | ((r2 >> 2) << 8);
        return r0 + 2;
    }
    int lr = r0[2];
    if (!(r2 & 4)) {
        *r1 = lr | ((r4 << 8) | ((r2 >> 3) << 16));
        return r0 + 3;
    }
    int ip = r0[3];
    *r1 = ip | (((r4 << 16) | ((r2 >> 3) << 24)) | (lr << 8));
    return r0 + 4;
}
