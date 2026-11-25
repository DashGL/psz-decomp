// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xc0, exact bytes and relocation targets.
// flags: -O4,p -noThumb

void FUN_0205aad0(const int *src, int *dst, int sx, int sy, int sz) {
    dst[0] = (int)(((long long)sx * src[0]) >> 12);
    dst[1] = (int)(((long long)sx * src[1]) >> 12);
    dst[2] = (int)(((long long)sx * src[2]) >> 12);
    dst[3] = (int)(((long long)sy * src[3]) >> 12);
    dst[4] = (int)(((long long)sy * src[4]) >> 12);
    dst[5] = (int)(((long long)sy * src[5]) >> 12);
    dst[6] = (int)(((long long)sz * src[6]) >> 12);
    dst[7] = (int)(((long long)sz * src[7]) >> 12);
    dst[8] = (int)(((long long)sz * src[8]) >> 12);
}
