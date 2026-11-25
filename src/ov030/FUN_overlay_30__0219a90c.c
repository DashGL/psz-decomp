// flags: -O4,p
typedef struct { int x, y, z; } Vec3;
typedef struct {
    unsigned char pad0[0x38];
    Vec3 pos;
    unsigned short yaw;
} Actor;
typedef struct {
    unsigned char pad0[4];
    Actor *actor;
    void *owner;
} Self;

extern int DAT_0219b114, DAT_0219b11c;
extern short DAT_020ed83c[];
extern int FUN_02036c34(Actor *);
extern int FUN_overlay_30__02199ab4(void *, Vec3 *);
extern void FUN_02035408(Vec3 *, int, int, int);
extern void FUN_0205c8cc(Vec3 *, Vec3 *);
extern void FUN_020bc5cc(int *, int *, int *);
extern void FUN_02036384(Actor *, Vec3 *);
extern unsigned short FUN_0205cc08(int);

static inline int FxMul(int a, int b) {
    return (int)(((long long)a * b + 0x800) >> 12);
}
static inline int VecDot(const Vec3 *a, const Vec3 *b) {
    return FxMul(a->z, b->z) + (FxMul(a->x, b->x) + FxMul(a->y, b->y));
}

void FUN_overlay_30__0219a90c(Self *self) {
    Actor *actor = self->actor;
    void *owner = self->owner;
    Vec3 target;
    Vec3 direction;
    Vec3 position;
    int delta = FUN_02036c34(actor);
    int speed;
    int distance;
    int positive;
    int index;
    unsigned short yaw, difference, desired, step;

    if (!FUN_overlay_30__02199ab4(owner, &target)) return;
    {
        Vec3 *pos = &actor->pos;
        yaw = actor->yaw;
        FUN_02035408(&direction, target.x - actor->pos.x, target.y - pos->y, target.z - pos->z);
    }
    direction.y = 0;
    distance = VecDot(&direction, &direction);
    if (direction.x || direction.y || direction.z) {
        FUN_0205c8cc(&direction, &direction);
    }
    desired = FUN_0205cc08(direction.z);
    if (direction.x < 0) desired = (unsigned short)(0x10000 - desired);
    difference = (unsigned short)(yaw - desired);
    positive = 0;
    if (difference >= 0x8000) {
        difference = (unsigned short)(0x10000 - difference);
        positive = 1;
    }
    step = (unsigned short)(((long long)delta * 227 + 0x800) >> 12);
    if (difference >= step) {
        if (positive) {
            desired = (unsigned short)(yaw + step);
        } else {
            desired = (unsigned short)(yaw - step);
        }
    }
    actor->yaw = desired;
    {
        int far = !(distance <= DAT_0219b114);
        if (far != 0) {
            Vec3 *p;
            int dx, dz;
            FUN_020bc5cc(&speed, &DAT_0219b11c, &delta);
            index = (desired >> 4) * 2;
            dx = FxMul(DAT_020ed83c[index], speed);
            dz = FxMul(DAT_020ed83c[index + 1], speed);
            p = &actor->pos;
            FUN_02035408(&position, actor->pos.x + dx, p->y, p->z + dz);
            FUN_02036384(actor, &position);
        }
    }
}
