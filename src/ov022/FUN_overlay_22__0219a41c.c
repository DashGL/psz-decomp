// flags: -O4,s
extern void FUN_02035408(void *, int, int, int);
int FUN_overlay_22__0219a41c(void *out, int *start, int *end, int weight) {
    struct V { int x, y, z; } result, scaled, delta;
    long long x, y, z;
    FUN_02035408(&delta, end[0] - start[0], end[1] - start[1], end[2] - start[2]);
    x = (long long)delta.x * weight;
    y = (long long)delta.y * weight;
    z = (long long)delta.z * weight;
    FUN_02035408(&scaled, (int)((x + 2048) >> 12), (int)((y + 2048) >> 12), (int)((z + 2048) >> 12));
    FUN_02035408(&result, scaled.x + start[0], scaled.y + start[1], scaled.z + start[2]);
    *(struct V *)out = result;
    return 1;
}
