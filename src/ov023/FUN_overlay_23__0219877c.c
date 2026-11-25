//cpp
// flags: -O4,s
#pragma block_assign on
#pragma always_inline on
struct Fixed {
    int v;
    inline int operator<=(const Fixed &o) const { if (v <= o.v) return 1; return 0; }
    inline int operator>(const Fixed &o) const { if (v > o.v) return 1; return 0; }
};
struct Vec3 {
    int x, y, z;
    inline Vec3 operator+(const Vec3 &o) const {
        Vec3 r;
        r.x = x + o.x;
        r.y = y + o.y;
        r.z = z + o.z;
        return r;
    }
};
struct Actor {
    unsigned char pad0[0x38];
    Vec3 pos;
    unsigned short yaw;
    unsigned char pad1[0x4e];
    unsigned int flags;
};
struct Self {
    int f0;
    Actor *actor;
    int f8;
    int state;
    Fixed timer;
    unsigned short desired;
    unsigned short pad16;
    Vec3 dir;
};
extern "C" {
extern Fixed DAT_020fc988;
extern int DAT_0219d638[];
}
namespace ns { extern "C" int DAT_0219d638[]; }
extern "C" {
extern short DAT_020ed83c[];
extern int FUN_02036c34(void *);
extern int FUN_02040d2c(void *, int);
extern int FUN_02035b60(int);
extern void FUN_02040c0c(void *, int, int, int, int);
extern void FUN_020bc5cc(int *, int *, int *);
extern void FUN_overlay_23__02198068(void *);
extern void FUN_02044570(void *, int, int);
extern void FUN_020445a8(void *, int, int);
extern void FUN_02044630(void *, int, int);
}

static inline int fx_mul(int a, int b) {
    return (int)(((long long)a * b + 0x800) >> 12);
}

extern "C" void FUN_overlay_23__0219877c(Self *self) {
    Vec3 direction;
    Vec3 position;
    int delta;
    int speed;
    unsigned int desired;
    unsigned int yaw;
    Actor *actor = self->actor;
    delta = FUN_02036c34(actor);
    switch (self->state) {
    case 0:
        if (FUN_02040d2c(actor, 0)) {
            self->timer.v = FUN_02035b60(0x96000) + 0x96000;
            self->state = 1;
        }
        break;
    case 1:
        self->timer.v -= delta;
        if (self->timer <= DAT_020fc988) {
            self->timer.v = FUN_02035b60(0x96000) + 0x96000;
            FUN_02040c0c(actor, 0, 7, 0x1000, 0);
            self->state = 2;
        }
        break;
    case 2:
        if (FUN_02040d2c(actor, 0)) {
            int index;
            int s;
            self->timer.v = DAT_0219d638[1];
            FUN_02040c0c(actor, 0, 3, 0x2400, 0);
            self->state = 3;
            self->desired = (unsigned short)FUN_02035b60(0x10000);
            index = ((int)self->desired >> 4) * 2;
            direction.x = DAT_020ed83c[index];
            direction.y = 0;
            direction.z = DAT_020ed83c[index + 1];
            self->dir = direction;
            FUN_020bc5cc(&speed, ns::DAT_0219d638, &delta);
            s = speed;
            self->dir.x = fx_mul(self->dir.x, s);
            self->dir.y = fx_mul(self->dir.y, s);
            self->dir.z = fx_mul(self->dir.z, s);
            FUN_overlay_23__02198068(actor);
            FUN_02044570(actor, 0, 1);
            FUN_020445a8(actor, 0, 1);
            FUN_02044630(actor, 0, 1);
        }
        break;
    case 3:
        self->timer.v -= delta;
        if (self->timer > DAT_020fc988) {
            unsigned short difference;
            unsigned short step;
            int positive = 1;
            yaw = actor->yaw;
            desired = self->desired;
            difference = (unsigned short)(desired - yaw);
            if (difference >= 0x8000) {
                difference = (unsigned short)(0x10000 - difference);
                positive = 0;
            }
            step = (unsigned short)fx_mul(delta, 0xaaa);
            if (difference >= step) {
                if (positive) {
                    desired = (unsigned short)(yaw + step);
                } else {
                    desired = (unsigned short)(yaw - step);
                }
            }
            actor->yaw = (unsigned short)desired;
            Vec3 &pos = actor->pos; pos = pos + self->dir;
        } else {
            actor->flags |= 0x10000;
        }
        break;
    }
}
