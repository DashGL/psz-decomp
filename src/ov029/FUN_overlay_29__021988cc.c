// flags: -O4,s
enum { E0 = 0, E1 = 1 };
typedef struct Vec { int x, y, z; } Vec;
extern int DAT_0219bc38[];
extern int data_0219bc38[];
extern int FUN_02036c34(void *);
extern void FUN_02037254(void *, int, int, const Vec *, int);
extern void FUN_02092654(Vec *, const int *);
extern void FUN_02035408(Vec *, int, int, int);
extern void FUN_02036384(void *, const Vec *);
extern void FUN_overlay_29__02198a80(void *);
void FUN_overlay_29__021988cc(char *self) {
    int y = *(int *)(self + 0xe0);
    int x = *(int *)(self + 0xdc);
    int z = *(int *)(self + 0xe4);
    long long zz = (long long)z * z;
    long long xx = (long long)x * x;
    long long yy = (long long)y * y;
    int rx = (int)(((unsigned long long)(xx + 2048)) >> 12);
    int ry = (int)(((unsigned long long)(yy + 2048)) >> 12);
    int rz = (int)(((unsigned long long)(zz + 2048)) >> 12);
    int sum = rz + (rx + ry);
    int delta;
    Vec velocity;
    Vec position;
    Vec *cur;
    sum = (int)(volatile int)sum;
    if ((DAT_0219bc38[1] < sum) ? E1 : E0) {
        FUN_02037254(self, 14, 1, (Vec *)(self + 0x38), 0);
    }
    delta = FUN_02036c34(self);
    velocity = *(Vec *)(self + 0xdc);
    FUN_02092654(&velocity, &delta);
    cur = (Vec *)(self + 0x38);
    FUN_02035408(&position, cur->x + velocity.x, cur->y + velocity.y, cur->z + velocity.z);
    FUN_02036384(self, &position);
    FUN_02092654((Vec *)(self + 0xdc), data_0219bc38);
    FUN_overlay_29__02198a80(self);
    *(int *)(self + 0xd8) -= delta;
}
