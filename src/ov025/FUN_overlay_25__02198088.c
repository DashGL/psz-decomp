//cpp
// flags: -O4,s
#pragma block_assign on
#pragma always_inline on

struct Fixed {
    int v;
    inline int operator>(const Fixed &o) const { if (v > o.v) return 1; return 0; }
    inline int operator>=(const Fixed &o) const { if (v >= o.v) return 1; return 0; }
};

struct Vec3 {
    int x, y, z;
    inline Vec3 operator-(const Vec3 &o) const {
        Vec3 r;
        r.x = x - o.x;
        r.y = y - o.y;
        r.z = z - o.z;
        return r;
    }
    inline int len_sq() const {
        long long zz = (long long)z * z;
        long long xx = (long long)x * x;
        long long yy = (long long)y * y;
        return (int)((zz + 0x800) >> 12) + ((int)((xx + 0x800) >> 12) + (int)((yy + 0x800) >> 12));
    }
};

struct Actor {
    unsigned char pad0[0x38];
    Vec3 pos;
};

struct Owner {
    unsigned char pad0[0x48];
    int state;
};

struct Self {
    int f00;
    Actor *actor;
    Owner *owner;
    Fixed timer;
    int dir;
};

extern "C" {
extern int FUN_overlay_25__0219893c(Owner *, Vec3 *);
extern Fixed DAT_0219ab98;
extern Fixed DAT_0219ab9c;
extern Fixed G_0219ab98[];
extern Fixed DAT_020fc988;
extern void FUN_020bc5cc(Fixed *, const Fixed *, const Fixed *);
extern void FUN_020bc628(Fixed *, const Fixed *);
extern void FUN_overlay_25__02198520(Actor *, const Vec3 *, int, unsigned short);
extern void FUN_overlay_25__02198474(Actor *);
extern void FUN_02037924(Owner *);
extern int FUN_02036c34(Actor *);

void FUN_overlay_25__02198088(Self *self) {
    Owner *owner = self->owner;
    Actor *actor = self->actor;
    Vec3 target;
    if (FUN_overlay_25__0219893c(owner, &target) == 1) {
        Vec3 pos = actor->pos;
        Fixed dist;
        int dy = *(volatile int *)&target.y - pos.y;
        int dz = *(volatile int *)&target.z - pos.z;
        int dx = target.x - pos.x;
        long long zz = (long long)dz * dz;
        long long xx = (long long)dx * dx;
        long long yy = (long long)dy * dy;
        dist.v = (int)((zz + 0x800LL) >> 12) + ((int)((xx + 0x800LL) >> 12) + (int)((yy + 0x800LL) >> 12));
        Fixed outer;
        FUN_020bc5cc(&outer, &DAT_0219ab98, &DAT_0219ab98);
        if (dist > outer) {
            FUN_overlay_25__02198520(actor, &target, 0x300, 0);
        } else {
            unsigned short offset = 0;
            Fixed inner;
            FUN_020bc5cc(&inner, &DAT_0219ab9c, &DAT_0219ab9c);
            if (dist > inner) {
                Fixed length;
                FUN_020bc628(&length, &dist);
                offset += ((length.v - G_0219ab98[1].v) << 14) / (G_0219ab98[0].v - G_0219ab98[1].v);
            }
            unsigned short angle = 0;
            if (self->dir == 1) {
                angle += 0x4400 - offset;
            } else {
                angle += 0xbc00 + offset;
            }
            FUN_overlay_25__02198520(actor, &target, 0x300, angle);
        }
    }
    FUN_overlay_25__02198474(actor);
    if (DAT_020fc988 >= self->timer) {
        owner->state = 0;
        FUN_02037924(owner);
    }
    self->timer.v -= FUN_02036c34(actor);
}
}
