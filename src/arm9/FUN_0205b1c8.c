// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xac, exact bytes and relocation targets.
// flags: -O4,p -noThumb
struct Mtx43 {
    int m[4][3];
};

extern void FUN_0206564c(const struct Mtx43 *, struct Mtx43 *);

void FUN_0205b1c8(const struct Mtx43 *src, struct Mtx43 *dst, int x, int y, int z) {
    if (src != dst) {
        FUN_0206564c(src, dst);
    }
    dst->m[3][0] = src->m[3][0] + (int)(((long long)x * src->m[0][0] + (long long)y * src->m[1][0] + (long long)z * src->m[2][0]) >> 12);
    dst->m[3][1] = src->m[3][1] + (int)(((long long)x * src->m[0][1] + (long long)y * src->m[1][1] + (long long)z * src->m[2][1]) >> 12);
    dst->m[3][2] = src->m[3][2] + (int)(((long long)x * src->m[0][2] + (long long)y * src->m[1][2] + (long long)z * src->m[2][2]) >> 12);
}
