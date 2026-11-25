// flags: -O4,s
typedef struct Vec { int x, y, z; } Vec;
extern void FUN_overlay_31__02198968(Vec *, void *);
extern void FUN_02035408(Vec *, int, int, int);
extern void FUN_020bc610(int *, const int *, const int *);
void FUN_overlay_31__021989ec(Vec *out, char *record, int numerator, int denominator) {
    Vec origin, difference;
    int ratio, n, d;
    const int *pd;
    FUN_overlay_31__02198968(&origin, record);
    FUN_02035408(&difference,
        (unsigned)*(int *)(record + 32) - (unsigned)origin.x,
        (unsigned)*(int *)(record + 36) - (unsigned)origin.y,
        (unsigned)*(int *)(record + 40) - (unsigned)origin.z);
    d = (int)(denominator > 0 ? 0.5f + (float)(denominator << 12) : (float)(denominator << 12) - 0.5f);
    pd = &d;
    n = (int)(numerator > 0 ? 0.5f + (float)(numerator << 12) : (float)(numerator << 12) - 0.5f);
    FUN_020bc610(&ratio, &n, pd);
    difference.x = (int)(((long long)difference.x * ratio + 2048) >> 12);
    difference.y = (int)(((long long)difference.y * ratio + 2048) >> 12);
    difference.z = (int)(((long long)difference.z * ratio + 2048) >> 12);
    FUN_02035408(out,
        (unsigned)origin.x + (unsigned)difference.x,
        (unsigned)origin.y + (unsigned)difference.y,
        (unsigned)origin.z + (unsigned)difference.z);
}
