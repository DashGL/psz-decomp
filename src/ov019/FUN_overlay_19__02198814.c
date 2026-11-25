// flags: -O4,p
typedef struct Vec { int x, y, z; } Vec;
extern int DAT_0219d100;
extern int FUN_02036f7c(void *, Vec *), FUN_02037128(void *, Vec *, const Vec *, const Vec *, unsigned short);
extern void FUN_02036fa8(void *, const Vec *), FUN_0205c8cc(const Vec *, Vec *);
extern void FUN_020bc5cc(int *, const int *, const int *);
extern void FUN_overlay_19__021981f4(void *, const Vec *);
void FUN_overlay_19__02198814(char *self, const Vec *target) {
    Vec direction, current;
    int product, speed, delta;
    unsigned short turn;
    direction.x = 0;
    direction.y = 0;
    direction.z = 0;
    FUN_02036f7c(self, &current);
    product = (unsigned)*(int *)(self + 0x198) * 192;
    turn = product / 4096;
    FUN_02037128(self, &direction, &current, target, turn);
    FUN_02036fa8(self, &direction);
    if (direction.x || direction.y || direction.z) FUN_0205c8cc(&direction, &direction);
    delta = *(int *)(self + 0x198);
    FUN_020bc5cc(&speed, &DAT_0219d100, &delta);
    direction.x = (int)(((long long)direction.x * speed + 2048) >> 12);
    direction.y = (int)(((long long)direction.y * speed + 2048) >> 12);
    direction.z = (int)(((long long)direction.z * speed + 2048) >> 12);
    FUN_overlay_19__021981f4(self, &direction);
    *(int *)(self + 0x19c) = 1;
}
