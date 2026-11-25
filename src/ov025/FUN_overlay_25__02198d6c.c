//cpp
// flags: -O4,s
struct Vec {
    union { struct { int x, y, z; }; int w[3]; };
    inline Vec() {}
    inline int z_val() const { return z; }
    inline int y_val() const { return y; }
    inline int x_val() const { return x; }
};
extern "C" {
extern short DAT_020ed83c[];
extern void FUN_02035408(Vec *, int, int, int);
extern Vec FUN_020b78d0(const Vec &);
#pragma thumb off
extern unsigned short FUN_0205cc08(int);
#pragma thumb on
extern int FUN_02036c34(void *);
unsigned FUN_overlay_25__02198d6c(char *self, const Vec *target) {
    Vec origin = *(Vec *)(self + 56);
    Vec difference;
    FUN_02035408(&difference, target->x - origin.x, target->y - origin.y, target->z - origin.z);
    unsigned short angle = FUN_0205cc08(FUN_020b78d0(difference).z_val());
    if (FUN_020b78d0(difference).x_val() < 0) angle = (unsigned short)(65536 - angle);
    unsigned short gap = (unsigned short)(angle - *(unsigned short *)(self + 68));
    int reverse = 0;
    if (gap >= 32768) {
        gap = (unsigned short)(65536 - gap);
        reverse = 1;
    }
    int scaled = (int)(((long long)DAT_020ed83c[((int)((unsigned int)gap >> 1) >> 4) * 2] * 0x5000 + 2048) >> 12);
    unsigned short step = (unsigned short)(((long long)scaled * 182 + 2048) >> 12);
    step = (unsigned short)(((long long)step * FUN_02036c34(self) + 2048) >> 12);
    if (step > gap) step = gap;
    if (reverse) angle = (unsigned short)(*(unsigned short *)(self + 68) - step);
    else angle = (unsigned short)(step + *(unsigned short *)(self + 68));
    *(unsigned short *)(self + 68) = angle;
    return gap;
}
}
