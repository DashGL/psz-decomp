// flags: -O4,s
enum { E0 = 0, E1 = 1 };
typedef struct { int x, y, z; } Vec;
extern void FUN_02036368(Vec *);
extern void FUN_020bbfbc(Vec *, unsigned int);
#pragma thumb off
extern int FUN_0205c7ac(Vec *, Vec *);
extern unsigned int FUN_0205c9e4(int, int);
#pragma thumb on

int FUN_02037128(void *unused, Vec *out, Vec *from, Vec *to, unsigned short limit) {
    Vec result, a, b, c;
    int side, dot, bound, delta;
    unsigned int angle;
    result.x = 0; result.y = 0; result.z = 4096;
    a = *to;
    FUN_02036368(&a);
    b = *from;
    FUN_02036368(&b);
    c = b;
    FUN_020bbfbc(&c, 16384);
    side = FUN_0205c7ac(&c, &a);
    angle = FUN_0205c9e4(b.x, b.z);
    FUN_020bbfbc(&result, (unsigned short)(angle + ((side > 0) ? limit : 65536u - limit)));
    dot = FUN_0205c7ac(&b, &a);
    bound = FUN_0205c7ac(&b, &result);
    if (bound > 0 && ((dot >= bound) ? E1 : E0)) result = a;
    delta = (int)((unsigned int)dot - (unsigned int)bound);
    if (delta <= 2 && delta >= -2) result = a;
    *out = result;
    return 1;
}
