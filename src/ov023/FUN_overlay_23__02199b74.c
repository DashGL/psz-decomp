// flags: -O4,s
typedef struct { int x, y, z; } Vec3;
typedef struct { int words[25]; } Request;
typedef struct { void *obj; int id; } Slot;
extern unsigned DAT_0219dc00;
extern int DAT_0219d84c, DAT_0219cec0[], DAT_0219ceac[], DAT_0219ce98[];
extern void *DAT_02108d04;
extern char DAT_0211a51c[], DAT_02199d6d[];
extern void *FUN_02036888(void *, int), *FUN_02046d94(Request *, int, int), *FUN_0208555c(int);
extern void FUN_0203666c(Request *), FUN_020345f0(Vec3 *, void *), FUN_02035408(Vec3 *, int, int, int);
extern int FUN_0205c86c(Vec3 *), FUN_02084cc0(void *), FUN_0203bf48(void *);
extern void FUN_020472bc(void *), FUN_0204b3ac(void *, void *, void *, int);
#define I(p,o) (*(int *)((char *)(p)+(o)))
#define P(p,o) (*(void **)((char *)(p)+(o)))
#define H(p,o) (*(unsigned short *)((char *)(p)+(o)))
#define V(p,o) (*(Vec3 *)((char *)(p)+(o)))

void FUN_overlay_23__02199b74(void *actor, unsigned type) {
    int effect_id, kind, variant, distance, base, target_id;
    void *obj, *target;
    Request request, target_request;
    Vec3 position, targetpos1, targetpos2, difference;
    if (!(DAT_0219dc00 & 1)) {
        DAT_0219d84c = 0x1800;
        DAT_0219dc00 |= 1;
    }
    kind = DAT_0219cec0[type];
    variant = 0;
    obj = FUN_02036888(actor, DAT_0219ceac[type]);
    if (obj) variant = *(signed char *)((char *)obj + 13);
    effect_id = DAT_0219ce98[type];
    switch (type) {
    case 0:
    case 1:
    case 2:
    case 3: {
        unsigned short rot;
        FUN_0203666c(&request);
        I(&request, 0x54) = effect_id;
        I(&request, 0x58) = I(actor, 0xc);
        position = V(actor, 0x38);
        position.y = DAT_0219d84c;
        rot = H(actor, 0x44);
        V(&request, 0x20) = position;
        H(&request, 0x3a) = rot;
        I(&request, 0x60) = kind;
        if (type == 1) {
            distance = 0x2000;
            if (DAT_02108d04) {
                Vec3 *pos = &V(actor, 0x38);
                FUN_020345f0(&targetpos1, (char *)DAT_02108d04 + 0x9c);
                targetpos1.y = 0;
                FUN_02035408(&difference, pos->x - targetpos1.x, pos->y - targetpos1.y, pos->z - targetpos1.z);
                distance = FUN_0205c86c(&difference);
                if (distance < 0x2000) distance = 0x2000;
                else if (distance > 0x14000) distance = 0x14000;
            }
            FUN_02046d94(&request, variant, distance);
        } else {
            obj = FUN_02046d94(&request, variant, 0);
            if (obj) {
                base = I(obj, 0x44);
                I(obj, 0x48) = base + (int)(((long long)(I(obj, 0x48) - base) * 0x1800 + 0x800) >> 12);
            }
        }
        break;
    }
    case 4: {
        Slot *slot = (Slot *)((char *)actor + 0xe0);
        target_id = FUN_02084cc0(DAT_0211a51c);
        target = FUN_0208555c(target_id);
        if (!target || !FUN_0203bf48(target)) break;
        FUN_020345f0(&targetpos2, (char *)target + 0x9c);
        targetpos2.y = 0x1000;
        FUN_0203666c(&target_request);
        I(&target_request, 0x54) = effect_id;
        I(&target_request, 0x58) = I(actor, 0xc);
        V(&target_request, 0x20) = targetpos2;
        I(&target_request, 0x60) = kind;
        FUN_020472bc(slot->obj);
        slot->obj = FUN_02046d94(&target_request, variant, 0);
        if (slot->obj) FUN_0204b3ac(slot->obj, DAT_02199d6d, actor, 0);
        slot->id = target_id;
        break;
    }
    }
}
