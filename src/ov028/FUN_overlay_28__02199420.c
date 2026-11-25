// flags: -O4,s
typedef struct Vec { int x, y, z; } Vec;
extern short DAT_020ed83c[];
extern void FUN_02035408(Vec *, int, int, int);
extern void FUN_02036368(Vec *);
extern unsigned short FUN_0205cc08(int);
extern int FUN_02036c34(void *);
unsigned FUN_overlay_28__02199420(char *self, const Vec *target, int rate) {
    Vec origin = *(Vec *)(self + 56), difference, normalized, second;
    unsigned short angle, gap, step;
    int reverse, scaled, delta;
    long long product;
    FUN_02035408(&difference,
        (unsigned)target->x - (unsigned)origin.x,
        (unsigned)target->y - (unsigned)origin.y,
        (unsigned)target->z - (unsigned)origin.z);
    normalized = difference;
    FUN_02036368(&normalized);
    angle = FUN_0205cc08(normalized.z);
    second = difference;
    FUN_02036368(&second);
    if (second.x < 0) angle = (unsigned short)(65536u - angle);
    gap = (unsigned short)(angle - *(unsigned short *)(self + 68));
    reverse = 0;
    if (gap >= 32768) {
        gap = (unsigned short)(65536u - gap);
        reverse = 1;
    }
    product = (long long)rate * DAT_020ed83c[((int)((unsigned int)gap >> 1) >> 4) * 2];
    scaled = (int)((product + 2048) >> 12);
    product = (long long)scaled * 182;
    step = (unsigned short)((product + 2048) >> 12);
    delta = FUN_02036c34(self);
    product = (long long)step * delta;
    step = (unsigned short)((product + 2048) >> 12);
    if (step > gap) step = gap;
    if (reverse) angle = (unsigned short)(*(unsigned short *)(self + 68) - step);
    else angle = (unsigned short)(step + *(unsigned short *)(self + 68));
    *(unsigned short *)(self + 68) = angle;
    return gap;
}
