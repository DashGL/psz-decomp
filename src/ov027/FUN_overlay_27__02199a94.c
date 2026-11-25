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
extern Vec FUN_020b78d0(const Vec &);
#pragma thumb off
extern unsigned short FUN_0205cc08(int);
#pragma thumb on
unsigned short FUN_overlay_27__02199a94(unsigned char *self, const Vec *direction) {
    unsigned short heading = FUN_0205cc08(FUN_020b78d0(*direction).z_val());
    if (FUN_020b78d0(*direction).x_val() < 0) heading = 65536 - heading;
    unsigned short difference = heading - *(unsigned short *)(self + 68);
    if (difference >= 32768) difference = 65536 - difference;
    return difference;
}
}
