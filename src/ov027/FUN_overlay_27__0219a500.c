// flags: -O4,s
typedef struct { int x, y, z; } Vec3;
extern short DAT_020ed83c[];
extern int FUN_overlay_27__0219a1f0(void *, Vec3 *);
extern void FUN_overlay_27__02199ae4(void *, Vec3 *);
extern int FUN_02036c34(void *);
#pragma thumb off
extern void FUN_0205c8cc(Vec3 *, Vec3 *);
#pragma thumb on
extern void FUN_02035408(Vec3 *, int, int, int);
extern void FUN_02036384(void *, Vec3 *);
extern int FUN_02040d2c(void *, int);
extern void FUN_02037924(void *);
#define I(p,o) (*(int *)((char *)(p)+(o)))
#define P(p,o) (*(void **)((char *)(p)+(o)))
#define H(p,o) (*(unsigned short *)((char *)(p)+(o)))

void FUN_overlay_27__0219a500(void *self)
{
    void *actor = P(self, 4);
    void *owner = P(self, 8);
    Vec3 target, direction, scaled, unit, position;
    int frame, idx, speed;
    long long x, y, z;
    if (I(self, 0xc) < 0x14000 && FUN_overlay_27__0219a1f0(owner, &target))
        FUN_overlay_27__02199ae4(actor, &target);
    frame = I(self, 0xc);
    if ((frame >= 0x14000 && frame < 0x19000) || (frame >= 0x23000 && frame < 0x28000)) {
        idx = (H(actor, 0x44) >> 4) * 2;
        direction.x = DAT_020ed83c[idx];
        direction.y = 0;
        direction.z = DAT_020ed83c[idx + 1];
        speed = (int)(((long long)FUN_02036c34(actor) * 0x333 + 0x800) >> 12);
        unit = direction;
        if (unit.x || unit.y || unit.z) FUN_0205c8cc(&unit, &unit);
        x = (long long)unit.x * speed;
        y = (long long)unit.y * speed;
        z = (long long)unit.z * speed;
        FUN_02035408(&scaled, (int)((x + 0x800) >> 12), (int)((y + 0x800) >> 12), (int)((z + 0x800) >> 12));
        direction = scaled;
        {
            Vec3 *ap = (Vec3 *)((char *)actor + 0x38);
            FUN_02035408(&position, ap->x + direction.x, ap->y + direction.y, ap->z + direction.z);
        }
        FUN_02036384(actor, &position);
    }
    if (FUN_02040d2c(P(self, 4), 0)) FUN_02037924(P(self, 8));
    frame = FUN_02036c34(actor);
    I(self, 0xc) += frame;
}
