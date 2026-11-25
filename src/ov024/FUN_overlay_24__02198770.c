// flags: -O4,s
typedef struct { int x, y, z; } Vec3;
extern int DAT_020fc98c, DAT_0219c2f8;
extern int DAT_0219c2f4[];
extern int DAT_overlay_24__0219c2f4[];
extern Vec3 DAT_020fc958;
extern short DAT_020ed83c[];
extern int FUN_overlay_24__021983a0(void *, Vec3 *), FUN_0205c86c(Vec3 *), FUN_02036c34(void *), FUN_02040d2c(void *, int);
extern void FUN_overlay_24__021983ac(void *, Vec3 *), FUN_02091cc0(Vec3 *, Vec3 *, int *), FUN_02035408(Vec3 *, int, int, int);
extern void FUN_020bc610(int *, int *, int *), FUN_020bc5cc(int *, int *, int *), FUN_020bc5e8(int *, int *);
extern void FUN_overlay_24__02198e70(void *, Vec3 *, int, int), FUN_0205c8cc(Vec3 *, Vec3 *), FUN_02036384(void *, Vec3 *), FUN_02037924(void *);
#define I(p,o) (*(int *)((char *)(p)+(o)))
#define P(p,o) (*(void **)((char *)(p)+(o)))
#define H(p,o) (*(unsigned short *)((char *)(p)+(o)))
#define V(p,o) (*(Vec3 *)((char *)(p)+(o)))

void FUN_overlay_24__02198770(void *self) {
    enum { E0 = 0, E1 = 1 };
    void *actor = P(self, 4), *owner;
    Vec3 origin, target, target_velocity, difference, direction, prediction, scaled, normal, position;
    int distance, delta, step, speed, index;

    if (((I(actor, 0xd4) & 1) ? E1 : E0) == 1 && ((DAT_020fc98c >= I(self, 0xc)) ? E1 : E0) != 0) {
        owner = P(self, 8);
        origin = V(actor, 0x38);
        if (FUN_overlay_24__021983a0(owner, &target) == 1) {
            target_velocity = DAT_020fc958;
            FUN_overlay_24__021983ac(owner, &target_velocity);
            FUN_02091cc0(&prediction, &target_velocity, &DAT_0219c2f8);
            target.x += prediction.x;
            target.y += prediction.y;
            target.z += prediction.z;
            FUN_02035408(&difference, target.x - origin.x, target.y - origin.y, target.z - origin.z);
            distance = FUN_0205c86c(&difference);
            if (((distance < DAT_0219c2f4[4]) ? E1 : E0) != 0) distance = DAT_0219c2f4[2];
            if (((distance > DAT_0219c2f4[3]) ? E1 : E0) != 0) distance = *(volatile int *)&DAT_0219c2f4[3];
            FUN_020bc610(&speed, &distance, &DAT_0219c2f8);
            I(self, 0xc) = speed;
            FUN_overlay_24__02198e70(actor, &target, 0x1c00, 0);
        }
    }
    delta = FUN_02036c34(actor);
    FUN_020bc5cc(&step, &I(self, 0xc), &delta);
    index = (H(actor, 0x44) >> 4) * 2;
    direction.x = DAT_020ed83c[index];
    direction.y = 0;
    direction.z = DAT_020ed83c[index + 1];
    normal = direction;
    if (normal.x || normal.y || normal.z)
        FUN_0205c8cc(&normal, &normal);
    FUN_02091cc0(&scaled, &normal, &step);
    direction = scaled;
    {
        Vec3 *ap = &V(actor, 0x38);
        FUN_02035408(&position, ap->x + direction.x, ap->y + direction.y, ap->z + direction.z);
    }
    FUN_02036384(actor, &position);
    if (((I(actor, 0xd4) & 1) ? E1 : E0) == 0)
        FUN_020bc5e8(&I(self, 0xc), DAT_overlay_24__0219c2f4);
    if (FUN_02040d2c(actor, 0))
        FUN_02037924(P(self, 8));
}
