//cpp
// flags: -O4,s -inline auto
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
#define I(p,o) (*(int *)((char *)(p)+(o)))
#define P(p,o) (*(void **)((char *)(p)+(o)))
#define H(p,o) (*(unsigned short *)((char *)(p)+(o)))

extern "C" {
extern int DAT_0219d678, DAT_0219d680, DAT_020fc988;
extern short DAT_020ed83c[];
extern int FUN_02036c34(void *);
extern int FUN_overlay_23__0219838c(void *, Vec3 *);
extern void FUN_02035408(Vec3 *, int, int, int);
extern void FUN_0205c8cc(Vec3 *, Vec3 *);
extern unsigned short FUN_0205cc08(int);
extern void FUN_020bc5cc(int *, const int *, const int *);
extern void FUN_02036384(void *, Vec3 *);
extern void FUN_overlay_23__02198af4(void *);
void FUN_overlay_23__02198b80(void *self);
}

static inline int fx_mul(int a, int b) {
    return (int)(((long long)a * b + 0x800) >> 12);
}

static inline void vec_norm(Vec3 *v) {
    if (v->x || v->y || v->z) {
        FUN_0205c8cc(v, v);
    }
}

void FUN_overlay_23__02198b80(void *self) {
    void *actor = P(self, 4);
    void *owner = P(self, 8);
    Vec3 target, direction, position;
    int delta = FUN_02036c34(actor);
    if (FUN_overlay_23__0219838c(owner, &target)) {
        Vec3 *actor_pos = (Vec3 *)((char *)actor + 0x38);
        unsigned short yaw = H(actor, 0x44);
        FUN_02035408(&direction, target.x - actor_pos->x, target.y - actor_pos->y, target.z - actor_pos->z);
        direction.y = 0;
        int distance = direction.len_sq();
        vec_norm(&direction);
        unsigned short diff;
        unsigned short desired = FUN_0205cc08(direction.z);
        if (direction.x < 0) desired = (unsigned short)(0x10000 - desired);
        diff = (unsigned short)(yaw - desired);
        int positive = 0;
        if (diff >= 0x8000) {
            diff = (unsigned short)(0x10000 - diff);
            positive = 1;
        }
        unsigned short step = (unsigned short)fx_mul(delta, 0x1c7);
        if (diff >= step) {
            if (positive) desired = (unsigned short)(yaw + step);
            else desired = (unsigned short)(yaw - step);
        }
        H(actor, 0x44) = desired;
        if ((distance > DAT_0219d678) ? 1 : 0) {
            int speed;
            FUN_020bc5cc(&speed, &DAT_0219d680, &delta);
            int index = (desired >> 4) * 2;
            int dx = fx_mul(DAT_020ed83c[index], speed);
            int dz = fx_mul(DAT_020ed83c[index + 1], speed);
            Vec3 *pos_p = (Vec3 *)actor;
            pos_p = (Vec3 *)((char *)actor + 0x38);
            FUN_02035408(&position, I(actor, 0x38) + dx, pos_p->y, pos_p->z + dz);
            FUN_02036384(actor, &position);
        }
    }
    I(self, 0x10) -= delta;
    if ((I(self, 0x10) <= DAT_020fc988) ? 1 : 0) {
        FUN_overlay_23__02198af4(self);
    }
}
