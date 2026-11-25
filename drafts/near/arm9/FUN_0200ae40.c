// near: 20w/46b register allocation (r4 vs r3) in unsigned variable-length integer decode
// flags: -noThumb
const unsigned char *FUN_0200ae40(const unsigned char *r0, unsigned int *r1) {
    unsigned int r2 = r0[0];
    if (!(r2 & 1)) {
        *r1 = r2 >> 1;
        return r0 + 1;
    }
    unsigned int r4 = r0[1];
    if (!(r2 & 2)) {
        *r1 = r4 | ((r2 >> 2) << 8);
        return r0 + 2;
    }
    unsigned int lr = r0[2];
    if (!(r2 & 4)) {
        *r1 = lr | ((r4 << 8) | ((r2 >> 3) << 16));
        return r0 + 3;
    }
    unsigned int ip = r0[3];
    *r1 = ip | (((r4 << 16) | ((r2 >> 3) << 24)) | (lr << 8));
    return r0 + 4;
}
