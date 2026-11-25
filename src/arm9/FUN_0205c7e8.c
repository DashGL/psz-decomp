// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x84, exact bytes and relocation targets.
// flags: -O4,p -noThumb
struct Vec {
    int x, y, z;
};

void FUN_0205c7e8(const struct Vec *a, const struct Vec *b, struct Vec *dst) {
    int x = (int)(((long long)a->y * b->z - (long long)a->z * b->y + 0x800) >> 12);
    int y = (int)(((long long)a->z * b->x - (long long)a->x * b->z + 0x800) >> 12);
    int z = (int)(((long long)a->x * b->y - (long long)a->y * b->x + 0x800) >> 12);
    dst->x = x;
    dst->y = y;
    dst->z = z;
}
