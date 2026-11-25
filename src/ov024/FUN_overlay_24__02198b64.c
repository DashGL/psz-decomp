// flags: -O4,s
typedef struct { int x, y, z; } Vec3;
extern int DAT_0219c364, DAT_0219c360;
extern short DAT_020ed83c[];
extern int FUN_02036c34(void *), FUN_overlay_24__021983a0(void *, Vec3 *);
extern unsigned FUN_overlay_24__02198e20(void *, Vec3 *);
extern void FUN_020bc5cc(int *, int *, int *), FUN_0205c8cc(Vec3 *, Vec3 *), FUN_02035408(Vec3 *, int, int, int), FUN_02036384(void *, Vec3 *), FUN_overlay_24__02198e70(void *, Vec3 *, int, int), FUN_02037924(void *);
#define I(p,o) (*(int *)((char *)(p)+(o)))
#define P(p,o) (*(void **)((char *)(p)+(o)))
#define H(p,o) (*(unsigned short *)((char *)(p)+(o)))
#define V(p,o) (*(Vec3 *)((char *)(p)+(o)))

void FUN_overlay_24__02198b64(void *self) {
    void *actor = P(self, 4), *owner = P(self, 8);
    Vec3 direction, target, current, difference, scaled, normal, position;
    int delta = FUN_02036c34(actor), speed, limit;
    int index, distance;
    unsigned angle;
    long long x, y, z, xx, yy, zz;
    Vec3 *pos;
    FUN_020bc5cc(&speed, &DAT_0219c364, &delta);
    index = (H(actor, 0x44) >> 4) * 2;
    direction.x = DAT_020ed83c[index];
    direction.y = 0;
    direction.z = DAT_020ed83c[index + 1];
    normal = direction;
    if (normal.x || normal.y || normal.z) FUN_0205c8cc(&normal, &normal);
    x = (long long)normal.x * speed;
    y = (long long)normal.y * speed;
    z = (long long)normal.z * speed;
    FUN_02035408(&scaled, (int)((x + 0x800) >> 12), (int)((y + 0x800) >> 12), (int)((z + 0x800) >> 12));
    direction = scaled;
    pos = &V(actor, 0x38);
    FUN_02035408(&position, pos->x + direction.x, pos->y + direction.y, pos->z + direction.z);
    FUN_02036384(actor, &position);
    if (FUN_overlay_24__021983a0(owner, &target) == 1) {
        FUN_overlay_24__02198e70(actor, &target, 0x100, 0);
        current = V(actor, 0x38);
        FUN_02035408(&difference, target.x - current.x, target.y - current.y, target.z - current.z);
        angle = FUN_overlay_24__02198e20(actor, &difference);
        FUN_020bc5cc(&limit, &DAT_0219c360, &DAT_0219c360);
        zz = (long long)difference.z * difference.z;
        xx = (long long)difference.x * difference.x;
        yy = (long long)difference.y * difference.y;
        distance = (int)((zz + 0x800) >> 12) + ((int)((xx + 0x800) >> 12) + (int)((yy + 0x800) >> 12));
        unsigned ok = (distance < limit); if (ok != 0 && angle < 0x2aaa) {
            I(owner, 0x54) = 4;
            FUN_02037924(owner);
        }
    } else {
        I(owner, 0x54) = 4;
        FUN_02037924(owner);
    }
}
