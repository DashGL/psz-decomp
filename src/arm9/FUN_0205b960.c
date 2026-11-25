// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xa0, exact bytes and relocation targets.
// flags: -O4,p -noThumb
struct Vec3_25 {
    int x;
    int y;
    int z;
};
struct Mat43_25 {
    int m[4][3];
};

void FUN_0205b960(const struct Vec3_25 *v, const struct Mat43_25 *m, struct Vec3_25 *dst) {
    int x = v->x;
    int y = v->y;
    int z = v->z;
    dst->x = (int)(((long long)x * m->m[0][0] + (long long)y * m->m[1][0] + (long long)z * m->m[2][0]) >> 12);
    dst->x += m->m[3][0];
    dst->y = (int)(((long long)x * m->m[0][1] + (long long)y * m->m[1][1] + (long long)z * m->m[2][1]) >> 12);
    dst->y += m->m[3][1];
    dst->z = (int)(((long long)x * m->m[0][2] + (long long)y * m->m[1][2] + (long long)z * m->m[2][2]) >> 12);
    dst->z += m->m[3][2];
}
