// flags: -O4,s
typedef struct { int x, y, z; } Vec322;
extern int FUN_0208546c(void), FUN_020866b4(int, void *);
extern void FUN_02036348(void *, void *, void *), FUN_02097fd0(void *, int), FUN_0209c5cc(void *), FUN_02096fa4(void *), FUN_02096da4(void *), FUN_0209c6b8(void *), FUN_0209edf0(void *);
void FUN_02097de8(char *s) {
    Vec322 point, diff;
    int i, dist;
    ++*(short *)(s + 114);
    if (*(short *)(s + 114) >= 30) { *(short *)(s + 114) = 0; ++*(short *)(s + 116); }
    if (*(short *)(s + 114) == 0 && FUN_020866b4(FUN_0208546c(), &point)) {
        if (*(int *)(s + 240) >= 0 && *(int *)(s + 240) < *(int *)(s + 244)) {
            Vec322 *d;
            FUN_02036348(&diff, s + 248 + 12 * *(int *)(s + 240), &point);
            d = (Vec322 *)(Vec322 *volatile)&diff;
            dist = (int)(((long long)d->x * d->x + 2048) >> 12) + (int)(((long long)d->y * d->y + 2048) >> 12) + (int)(((long long)d->z * d->z + 2048) >> 12);
            if (dist >= 16384) {
                ++*(int *)(s + 240);
                if (*(int *)(s + 240) >= 4) *(int *)(s + 240) -= 4;
                *(Vec322 *)(s + 248 + 12 * *(int *)(s + 240)) = point;
                ++*(int *)(s + 244);
                if (*(int *)(s + 244) > 4) *(int *)(s + 244) = 4;
            }
        } else {
            *(int *)(s + 240) = 0;
            *(Vec322 *)(s + 248) = point;
            ++*(int *)(s + 244);
        }
    }
    if (*(short *)(s + 118) > 0) {
        --*(short *)(s + 118);
        if (*(short *)(s + 118) <= 0) FUN_02097fd0(s, *(int *)(s + 108));
    }
    --*(short *)(s + 112);
    if (*(short *)(s + 112) <= 0) FUN_0209c5cc(s + 120);
    for (i = 0; i < 5; i++) {
        char *slot = s + 4 * i;
        if (*(void **)(slot + 20) && *(int *)slot) {
            if (*(short *)(s + 112) <= 0) FUN_02096fa4(*(void **)(slot + 20));
            FUN_02096da4(*(void **)(slot + 20));
        }
    }
    if (*(short *)(s + 112) <= 0) { FUN_0209c6b8(s + 120); *(short *)(s + 112) = 10; }
    if (*(void **)(s + 296)) FUN_0209edf0(*(void **)(s + 296));
}
