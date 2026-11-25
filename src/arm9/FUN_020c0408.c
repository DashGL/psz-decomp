// flags: -O4,s
typedef struct { unsigned int x, y; } Vec;
typedef struct { Vec center, axis[2]; int extent[2]; } Frame;
extern void FUN_020bf618(void *, const void *, const void *), FUN_02034e98(void *, int);
extern int FUN_020bf62c(const void *, const void *);
void FUN_020c0408(const Vec *point, Frame frame, Vec *out) {
    Vec delta;
    Vec *axes[2];
    int extents[2];
    Vec v;
    int i, projection, negative;
    FUN_020bf618(&delta, point, &frame.center);
    out->x = frame.center.x;
    out->y = frame.center.y;
    axes[0] = &frame.axis[0];
    axes[1] = &frame.axis[1];
    extents[0] = frame.extent[0];
    extents[1] = frame.extent[1];
    for (i = 0; i < 2; ++i) {
        int ext;
        v = *axes[i];
        ext = extents[i];
        projection = FUN_020bf62c(&delta, &v);
        if (projection > ext) projection = ext;
        negative = -ext;
        if (projection < negative) projection = negative;
        FUN_02034e98(&v, projection);
        out->x += v.x;
        out->y += v.y;
    }
}
