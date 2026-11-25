// flags: -O4,s
typedef struct { int x, y, z; } Vec3;
extern int FUN_020370b8(void *, int, Vec3 *);
extern const int DAT_0219c700[], DAT_overlay_27__0219c700, DAT_0219c708;
extern const unsigned short DAT_0219bf20[2][3];
extern int FUN_02037208(void *, int);
extern void FUN_020bbfbc(Vec3 *, unsigned short);
extern void FUN_0205c8cc(const Vec3 *, Vec3 *);
extern void FUN_02091cc0(Vec3 *, const Vec3 *, const int *);
extern void FUN_02040c0c(void *, int, int, int, int);

void FUN_overlay_27__0219b138(unsigned char *self) {
    enum { E0 = 0, E1 = 1 };
    Vec3 direction, velocity, acceleration, zero1, zero2;
    void *actor = *(void **)(self + 4);
    unsigned char *owner = *(unsigned char **)(self + 8);
    int zz, xx, yy, far, index;

    if (FUN_020370b8(actor, *(int *)(owner + 0x44), &direction) == 1) {
        zz = (int)(((long long)direction.z * direction.z + 0x800) >> 12);
        xx = (int)(((long long)direction.x * direction.x + 0x800) >> 12);
        yy = (int)(((long long)direction.y * direction.y + 0x800) >> 12);
        far = ((zz + (xx + yy) >= DAT_0219c700[1] ? E1 : E0) != 0) ? 1 : 0;
        index = FUN_02037208(actor, 3);
        FUN_020bbfbc(&direction, DAT_0219bf20[far][index]);
        if (direction.x != 0 || direction.y != 0 || direction.z != 0) FUN_0205c8cc(&direction, &direction);
        FUN_02091cc0(&velocity, &direction, &DAT_overlay_27__0219c700);
        *(Vec3 *)(self + 0x18) = velocity;
        FUN_02091cc0(&acceleration, &direction, &DAT_0219c708);
        *(Vec3 *)(self + 0x24) = acceleration;
    } else {
        zero1.x = 0; zero1.y = 0; zero1.z = 0;
        *(Vec3 *)(self + 0x18) = zero1;
        zero2.x = 0; zero2.y = 0; zero2.z = 0;
        *(Vec3 *)(self + 0x24) = zero2;
    }
    FUN_02040c0c(*(void **)(self + 4), 0, 1, 0x1000, 0);
    *(int *)(self + 0xc) = 0;
    *(int *)(self + 0x10) = FUN_02037208(actor, 2) + 2;
    index = FUN_02037208(actor, 2);
    *(int *)(self + 0x14) = *(int *)(self + 0x10) + (index + 2);
}
