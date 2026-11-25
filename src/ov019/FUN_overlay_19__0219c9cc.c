// flags: -O4,s
#pragma opt_propagation off
typedef struct { int x, y, z; } Vec3;
typedef struct {
    int kind;
    Vec3 extra, pos, scale;
    int id;
    int f0, f1, f2, f3, f4;
} EffectDesc;

extern int DAT_0219d4d4;
extern void FUN_020bbfbc(Vec3 *, unsigned short);
extern void FUN_02035408(Vec3 *, int, int, int);
extern int FUN_overlay_19__02198418(void *);
extern void *FUN_020ba894(unsigned int);
extern void *FUN_overlay_19__0219933c(void *, const EffectDesc *);
extern void FUN_overlay_19__02198438(void *, void *);

void FUN_overlay_19__0219c9cc(unsigned char *self) {
    unsigned char *actor = *(unsigned char **)(self + 4);
    unsigned short angle = *(unsigned short *)(actor + 0x44);
    Vec3 pos = *(const Vec3 *)(actor + 0x38);
    Vec3 offset;
    EffectDesc desc;
    Vec3 direction, unit, sum, scale;
    int magnitude = DAT_0219d4d4;
    long long x, y, z;
    void *effect;

    unit.x = 0;
    unit.y = 0;
    unit.z = 0x1000;
    direction = unit;
    FUN_020bbfbc(&direction, angle);
    x = (long long)direction.x * magnitude;
    y = (long long)direction.y * magnitude;
    z = (long long)direction.z * magnitude;
    FUN_02035408(&offset, (int)((x + 0x800) >> 12), (int)((y + 0x800) >> 12), (int)((z + 0x800) >> 12));
    desc.kind = 0;
    FUN_02035408(&desc.extra, 0, 0, 0);
    FUN_02035408(&desc.pos, 0, 0, 0);
    FUN_02035408(&desc.scale, 0x1000, 0x1000, 0x1000);
    desc.id = -1;
    desc.f0 = 0;
    desc.f1 = 0;
    desc.f2 = 0;
    desc.f3 = 0;
    desc.f4 = 0;
    desc.kind = 0x46000;
    FUN_02035408(&sum, pos.x + offset.x, pos.y + offset.y, pos.z + offset.z);
    desc.pos = sum;
    desc.id = 3;
    desc.f2 = 1;
    desc.f1 = 1;
    desc.f3 = 1;
    if (*(int *)(self + 0x10) == 1) {
        scale.x = 0x2000;
        scale.y = 0x2000;
        desc.f4 = 1;
        desc.f0 = 1;
        scale.z = 0x1000;
        desc.scale = scale;
    } else {
        desc.pos.y = 0x2000;
    }
    if (FUN_overlay_19__02198418(actor) == 1) {
        effect = FUN_020ba894(0x7c);
        if (effect != 0) {
            effect = FUN_overlay_19__0219933c(effect, &desc);
        }
        FUN_overlay_19__02198438(actor, effect);
    }
}
