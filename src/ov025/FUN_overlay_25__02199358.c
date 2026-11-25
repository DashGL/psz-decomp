// flags: -O4,s
enum { E0 = 0, E1 = 1 };
typedef struct { int x, y, z; } Vec3;
extern int DAT_0219ad80;
extern int FUN_overlay_25__021992c4(void *, Vec3 *), FUN_02036c34(void *);
extern void FUN_02035408(Vec3 *, int, int, int), FUN_0205c8cc(Vec3 *, Vec3 *),
    FUN_02036384(void *, Vec3 *), FUN_overlay_25__02198d6c(void *, Vec3 *),
    FUN_02037924(void *);
#define I(p, o) (*(int *)((char *)(p) + (o)))
#define P(p, o) (*(void **)((char *)(p) + (o)))
#define V(p, o) (*(Vec3 *)((char *)(p) + (o)))
#define FX_MUL(a, b) ((int)(((long long)(a) * (b) + 0x800) >> 12))

void FUN_overlay_25__02199358(void *self) {
    Vec3 target, origin, difference, velocity, normal, position;
    void *actor = P(self, 4); int finish = 0; int speed; int distance;
    if (FUN_overlay_25__021992c4(P(self, 8), &target)) {
        Vec3 *apos;
        origin = V(P(self, 4), 0x38);
        FUN_02035408(&difference, target.x - origin.x, target.y - origin.y, target.z - origin.z);
        speed = FX_MUL(FUN_02036c34(actor), 205);
        normal = difference;
        if (normal.x || normal.y || normal.z) {
            FUN_0205c8cc(&normal, &normal);
        }
        FUN_02035408(&velocity, FX_MUL(normal.x, speed), FX_MUL(normal.y, speed), FX_MUL(normal.z, speed));
        apos = (Vec3 *)((char *)actor + 0x38);
        FUN_02035408(&position, apos->x + velocity.x, apos->y + velocity.y, apos->z + velocity.z);
        FUN_02036384(actor, &position);
        FUN_overlay_25__02198d6c(actor, &target);
        distance = FX_MUL(difference.z, difference.z) + (FX_MUL(difference.x, difference.x) + FX_MUL(difference.y, difference.y));
        if ((distance < DAT_0219ad80 ? E1 : E0) != 0) {
            finish = 1;
        }
    } else {
        finish = 1;
    }
    if (I(self, 0xc) > 0x5a000 || finish) {
        FUN_02037924(P(self, 8));
    }
    I(self, 0xc) += FUN_02036c34(actor);
}
