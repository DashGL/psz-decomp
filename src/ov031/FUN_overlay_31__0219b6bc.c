// flags: -O4,s
typedef struct { int x, y, z; } Vec;
extern int FUN_overlay_31__0219bfc0(void *, Vec *);
extern void FUN_02036348(Vec *, const Vec *, const Vec *);
extern unsigned short FUN_0205c9e4(int, int);
unsigned short FUN_overlay_31__0219b6bc(void **p) {
    void *obj = p[4];
    Vec position = *(const Vec *)0x020fc958, delta;
    unsigned short angle;
    int negative;
    FUN_overlay_31__0219bfc0(obj, &position);
    FUN_02036348(&delta, &position, (const Vec *)0x0219cf4c);
    angle = FUN_0205c9e4(delta.x, delta.z);
    negative = 0;
    if (angle >= 32768) {
        angle = (unsigned short)(65536 - angle);
        negative = 1;
    }
    if (angle > 6144) angle = 6144;
    if (negative == 1) angle = (unsigned short)(65536 - angle);
    return angle;
}
