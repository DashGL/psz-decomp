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
extern void *DAT_02108cf4;
extern void *FUN_020352a4(void *, int);
extern unsigned char *FUN_02039200(void *);
extern Vec FUN_020b78d0(const Vec &);
#pragma thumb off
extern unsigned short FUN_0205cc08(int);
#pragma thumb on
extern void FUN_02037910(void *, unsigned int);
void FUN_overlay_30__02198920(unsigned char *self, const int *packet) {
    unsigned char *target = FUN_02039200(FUN_020352a4(DAT_02108cf4, packet[0]));
    if (target) {
        const Vec *tp = (const Vec *)(target + 156);
        Vec origin = *(Vec *)(*(unsigned char **)(self + 4) + 56);
        Vec delta(tp->x - origin.x, tp->y - origin.y, tp->z - origin.z);
        unsigned short angle = FUN_0205cc08(FUN_020b78d0(delta).z_val());
        if (FUN_020b78d0(delta).x_val() < 0) angle = (unsigned short)(65536 - angle);
        *(unsigned short *)(*(unsigned char **)(self + 4) + 68) = angle;
    }
    FUN_02037910(self, *(unsigned int *)(self + 56));
    *(unsigned int *)(self + 44) |= 1;
}
}
