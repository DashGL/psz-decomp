// flags: -O4,s
typedef struct { int x, y, z; } Vec3;
enum { E0 = 0, E1 = 1 };
extern int DAT_a_0219bdc0[], DAT_overlay_29__0219bdc0[], DAT_overlay_29__0219bdcc, DAT_overlay_29__0219bdc8, DAT_overlay_29__0219c020;
extern int FUN_overlay_29__0219a038(void *, int, Vec3 *), FUN_overlay_29__02199b94(void *), FUN_020370b8(void *, int, Vec3 *);
extern void FUN_overlay_29__02199598(int *, void *, int *, int *), FUN_020bc5cc(int *, int *, int *), FUN_02036368(Vec3 *), FUN_02091cc0(Vec3 *, Vec3 *, int *);
extern void FUN_overlay_29__021993f8(void *, Vec3 *), FUN_overlay_29__02199438(void *, Vec3 *);
#define I(p,o) (*(int *)((char *)(p)+(o)))
#define P(p,o) (*(void **)((char *)(p)+(o)))

void FUN_overlay_29__02199e50(void *self)
{
    void *owner = P(self, 8), *actor = P(self, 4);
    Vec3 difference, motion, steering, b, a, c, d, e;
    int ramp, limit, temp, base_limit, length, speed;
    long long xx, yy, zz;
    if (!FUN_overlay_29__0219a038(self, I(owner, 0x50), &difference)) return;
    FUN_overlay_29__02199598(&ramp, actor, &I(self, 0xc), DAT_a_0219bdc0);
    if (((DAT_overlay_29__0219bdc0[0] < (int)((unsigned)I(self, 0xc) << 1)) ? E1 : E0) != 0) ramp = 0x1000;
    FUN_020bc5cc(&base_limit, &DAT_overlay_29__0219bdcc, &DAT_overlay_29__0219bdcc);
    FUN_020bc5cc(&temp, &base_limit, &ramp);
    FUN_020bc5cc(&limit, &temp, &ramp);
    zz = (long long)difference.z * difference.z;
    xx = (long long)difference.x * difference.x;
    yy = (long long)difference.y * difference.y;
    length = (int)((zz + 0x800) >> 12) + ((int)((xx + 0x800) >> 12) + (int)((yy + 0x800) >> 12));
    if (((length > limit) ? E1 : E0) != 0) {
        FUN_02036368(&difference);
        FUN_02091cc0(&a, &difference, &DAT_overlay_29__0219bdcc);
        FUN_02091cc0(&b, &a, &ramp);
        motion = b;
        FUN_02091cc0(&c, &difference, &DAT_overlay_29__0219bdc8);
        steering = c;
    } else {
        FUN_02091cc0(&d, &difference, &ramp);
        motion = d;
        FUN_02036368(&difference);
        FUN_02091cc0(&e, &difference, &DAT_overlay_29__0219bdc8);
        steering = e;
    }
    if (DAT_overlay_29__0219c020 == 1 && FUN_020370b8(actor, FUN_overlay_29__02199b94(owner), &steering) == 1) {
        FUN_02036368(&steering);
        speed = DAT_overlay_29__0219bdc0[2];
        steering.x = (int)(((long long)steering.x * speed + 0x800) >> 12);
        steering.y = (int)(((long long)steering.y * speed + 0x800) >> 12);
        steering.z = (int)(((long long)steering.z * speed + 0x800) >> 12);
    }
    FUN_overlay_29__021993f8(actor, &motion);
    FUN_overlay_29__02199438(actor, &steering);
}
