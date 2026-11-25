//cpp
// flags: -O4,s
struct Fx {
    int v;
    inline Fx() {}
    inline Fx(int x) : v(x) {}
    inline int operator<(const Fx &o) const { return (v < o.v) ? 1 : 0; }
};

struct Vec3 {
    union {
        struct { int x, y, z; };
        int w[3];
    };
};

struct Actor {
    unsigned char pad0[0x38];
    Vec3 pos;
};

struct Self {
    int f0;
    Actor *actor;
    void *owner;
    int timer;
    int max_timer;
};

extern "C" {
extern Fx DAT_0219c0fc;
extern int FUN_overlay_28__021999d8(void *, Vec3 *);
extern int FUN_02036c34(void *);
extern void FUN_02035408(Vec3 *, int, int, int);
extern void FUN_0205c8cc(Vec3 *, Vec3 *);
extern void FUN_02036384(void *, Vec3 *);
extern void FUN_overlay_28__02199420(void *, Vec3 *, int);
extern int FUN_02040d2c(void *, int);
extern void FUN_02037924(void *);
extern void FUN_02040c0c(void *, int, int, int, int);
void FUN_overlay_28__02199a9c(Self *self);
}

static inline int fx_mul(int a, int b) {
    return (int)(((long long)a * b + 0x800) >> 12);
}

void FUN_overlay_28__02199a9c(Self *self) {
    int finish = 0;
    Actor *actor = self->actor;
    Vec3 target;
    if (FUN_overlay_28__021999d8(self->owner, &target)) {
        Vec3 origin = self->actor->pos;
        Vec3 diff;
        FUN_02035408(&diff, target.x - origin.x, target.y - origin.y, target.z - origin.z);
        int speed = fx_mul(FUN_02036c34(actor), 205);
        Vec3 velocity;
        Vec3 normal = diff;
        if (normal.x || normal.y || normal.z) {
            FUN_0205c8cc(&normal, &normal);
        }
        FUN_02035408(&velocity, fx_mul(normal.x, speed), fx_mul(normal.y, speed), fx_mul(normal.z, speed));
        Vec3 position;
        {
            const Vec3 *ap = &actor->pos;
            FUN_02035408(&position, ap->x + velocity.x, ap->y + velocity.y, ap->z + velocity.z);
        }
        FUN_02036384(actor, &position);
        FUN_overlay_28__02199420(actor, &target, 0xa000);
        Fx dist(fx_mul(diff.z, diff.z) + (fx_mul(diff.x, diff.x) + fx_mul(diff.y, diff.y)));
        if (dist < DAT_0219c0fc) {
            finish = 1;
        }
    } else {
        finish = 1;
    }
    if (FUN_02040d2c(actor, 0)) {
        if (self->timer > self->max_timer || finish) {
            FUN_02037924(self->owner);
        } else {
            FUN_02040c0c(actor, 0, 3, 0x1000, 0);
        }
    }
    self->timer += FUN_02036c34(actor);
}
