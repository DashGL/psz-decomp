//cpp
// flags: -O4,s
#pragma always_inline on
struct Vec3 {
    int x, y, z;
    inline int len_sq() const {
        long long zz = (long long)z * z;
        long long xx = (long long)x * x;
        long long yy = (long long)y * y;
        return (int)((zz + 0x800) >> 12) + ((int)((xx + 0x800) >> 12) + (int)((yy + 0x800) >> 12));
    }
};
struct Actor {
    unsigned char pad[0x38];
    Vec3 pos;
    unsigned short yaw;
};
struct Self {
    int pad0;
    Actor *actor;
    void *owner;
};

extern "C" {
extern int FUN_02036c34(void *);
extern int FUN_overlay_23__0219a364(void *, Vec3 *);
extern void FUN_02035408(Vec3 *, int, int, int);
#pragma thumb off
extern void FUN_0205c8cc(Vec3 *, Vec3 *);
extern unsigned short FUN_0205cc08(int);
#pragma thumb reset
void FUN_overlay_23__0219b604(Self *self);
}

static inline int fx_mul(int a, int b) {
    return (int)(((long long)a * b + 0x800) >> 12);
}

static inline void vec_norm(Vec3 *v) {
    if (v->x || v->y || v->z) {
        FUN_0205c8cc(v, v);
    }
}

void FUN_overlay_23__0219b604(Self *self) {
    Actor *actor = self->actor;
    void *owner = self->owner;
    Vec3 target, direction;
    int delta = FUN_02036c34(actor);
    Vec3 *actor_pos = &actor->pos;
    unsigned short yaw = actor->yaw;
    if (!FUN_overlay_23__0219a364(owner, &target)) return;
    FUN_02035408(&direction, target.x - actor_pos->x, target.y - actor_pos->y, target.z - actor_pos->z);
    direction.y = 0;
    if (direction.len_sq() <= 0) return;
    vec_norm(&direction);
    unsigned short desired = FUN_0205cc08(direction.z);
    if (direction.x < 0) desired = (unsigned short)(0x10000 - desired);
    unsigned short diff = (unsigned short)(desired - yaw);
    int positive = 1;
    if (diff >= 0x8000) {
        diff = (unsigned short)(0x10000 - diff);
        positive = 0;
    }
    unsigned short step = (unsigned short)fx_mul(delta, 0x1c7);
    if (diff >= step) {
        if (positive) desired = (unsigned short)(yaw + step);
        else desired = (unsigned short)(yaw - step);
    }
    actor->yaw = desired;
}
