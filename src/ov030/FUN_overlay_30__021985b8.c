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
extern int FUN_02036c34(void *);
unsigned short FUN_overlay_30__021985b8(char *self, const Vec *target, unsigned speed, unsigned offset) {
    Vec position = *(Vec *)(self + 0x38);
    Vec difference(target->x - position.x, target->y - position.y, target->z - position.z);
    unsigned short angle = FUN_0205cc08(FUN_020b78d0(difference).z_val());
    if (FUN_020b78d0(difference).x_val() < 0) angle = (unsigned short)(65536 - angle);
    unsigned short delta = (unsigned short)(angle - *(unsigned short *)(self + 0x44));
    delta = (unsigned short)(delta - offset);
    int reverse = 0;
    if (delta >= 32768) { delta = (unsigned short)(65536 - delta); reverse = 1; }
    speed = (unsigned short)(((long long)speed * FUN_02036c34(self) + 2048) >> 12);
    if (speed > delta) speed = delta;
    unsigned short h;
    if (reverse) h = *(unsigned short *)(self + 0x44) - speed;
    else h = speed + *(unsigned short *)(self + 0x44);
    *(unsigned short *)(self + 0x44) = h;
    return h;
}
}
