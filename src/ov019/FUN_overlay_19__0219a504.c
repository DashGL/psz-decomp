// flags: -O4,s
typedef struct { int x, y, z; } Vec;
#pragma thumb off
extern int FUN_0205c7ac(const Vec *, const Vec *);
extern unsigned short FUN_0205c9e4(int, int);
#pragma thumb on
extern void FUN_020bbfbc(Vec *, unsigned short);

int FUN_overlay_19__0219a504(void *unused, Vec *out, const Vec *a, const Vec *b) {
    Vec x, y;
    unsigned int delta;
    unsigned short heading;
    x = *a;
    x.y = 0;
    y = *b;
    y.y = 0;
    if (FUN_0205c7ac(&x, &y) >= 0) {
        *out = *a;
        return 0;
    }
    heading = (unsigned short)(FUN_0205c9e4(b->x, b->z) + 49152);
    delta = (unsigned short)(FUN_0205c9e4(a->x, a->z) - heading);
    if (delta >= 32768) delta = 65536 - delta;
    {
        Vec v = *a;
        FUN_020bbfbc(&v, (unsigned short)(delta * 2));
        *out = v;
    }
    return 1;
}
