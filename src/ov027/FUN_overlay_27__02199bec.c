//cpp
// flags: -O4,s
struct Vec {
    union { struct { int x, y, z; }; int w[3]; };
    inline Vec() {}
    inline Vec(int a, int b, int c) { set(a, b, c); }
    inline void set(int a, int b, int c) { x = a; y = b; z = c; }
    inline int z_val() const { return z; }
    inline int y_val() const { return y; }
    inline int x_val() const { return x; }
};
extern "C" {
extern Vec FUN_02036348(const Vec &, const Vec &);
extern Vec FUN_020b78d0(const Vec &);
#pragma thumb off
extern unsigned short FUN_0205cc08(int);
#pragma thumb on
}
static inline Vec get_pos(char *self) {
    return *(Vec *)(self + 56);
}
extern "C" int FUN_overlay_27__02199bec(char *self, const Vec *target) {
    int result = 0;
    const Vec &pos = get_pos(self);
    const Vec &diff = FUN_02036348(*target, pos);
    unsigned short angle = FUN_0205cc08(FUN_020b78d0(diff).z_val());
    if (FUN_020b78d0(diff).x_val() < 0) {
        angle = (unsigned short)(0x10000 - angle);
    }
    unsigned short delta = (unsigned short)(angle - *(unsigned short *)(self + 68));
    int backwards = 0;
    if (delta >= 0x8000) {
        delta = (unsigned short)(0x10000 - delta);
        backwards = 1;
    }
    unsigned short limit = 0x0e38;
    if (delta < limit) {
        limit = delta;
        result = 1;
    }
    unsigned short current;
    if (backwards) {
        current = (unsigned short)(*(unsigned short *)(self + 68) - limit);
    } else {
        current = (unsigned short)(limit + *(unsigned short *)(self + 68));
    }
    *(unsigned short *)(self + 68) = current;
    return result;
}
