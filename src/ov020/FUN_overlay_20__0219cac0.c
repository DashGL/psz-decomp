//cpp
// flags: -O4,s
struct Fx {
    int v;
    inline Fx() {}
    inline Fx(int x) : v(x) {}
    inline int operator<(const Fx &o) const { return (v < o.v) ? 1 : 0; }
    inline int operator>(const Fx &o) const { return (v > o.v) ? 1 : 0; }
    inline Fx operator-() const { return Fx(-v); }
    inline Fx operator-(const Fx &o) const { return Fx(v - o.v); }
    inline Fx &operator-=(const Fx &o) { v -= o.v; return *this; }
    inline Fx &operator+=(const Fx &o) { v += o.v; return *this; }
};

struct Vec {
    Fx x, y, z;
};

struct Owner {
    unsigned char pad0[0x38];
    Vec pos;
    unsigned short angle;
};

struct Self {
    unsigned char pad0[4];
    Owner *owner;
    unsigned char pad1[0x14];
    Vec offset;
    Fx vel;
    Fx max_vel;
};

extern "C" {
extern Fx DAT_0219fc1c;
extern Fx DAT_overlay_20__0219fc1c[];
extern Fx DAT_020fc988;
extern short DAT_020ed83c[];
extern Fx *FUN_020bc5e8(Fx *, const Fx *);
extern void FUN_020bc658(Fx *, const Fx *);
extern void FUN_overlay_20__0219ca7c(Self *, Vec *);
extern unsigned short FUN_020869a0(const Vec *, int, const Vec *);
extern void FUN_overlay_20__02198f7c(Owner *, const Vec *);
}

extern "C" void FUN_overlay_20__0219cac0(Self *self) {
    Owner *owner = self->owner;
    FUN_020bc5e8(&self->vel, &DAT_0219fc1c);
    Fx amount = DAT_overlay_20__0219fc1c[1];
    const Vec *owner_pos = &owner->pos;
    unsigned short angle = owner->angle;
    Vec target;
    FUN_overlay_20__0219ca7c(self, &target);
    angle = FUN_020869a0(owner_pos, angle, &target);
    Fx mag;
    Fx sine(DAT_020ed83c[2 * (angle >> 4)]);
    FUN_020bc658(&mag, &sine);
    FUN_020bc5e8(&amount, &mag);
    if ((target.z - owner_pos->z) < DAT_020fc988) {
        self->vel -= amount;
    } else {
        self->vel += amount;
    }
    Fx abs_vel;
    FUN_020bc658(&abs_vel, &self->vel);
    if (abs_vel > self->max_vel) {
        self->vel = (self->vel > DAT_020fc988) ? self->max_vel : -self->max_vel;
    }
    self->offset.z += self->vel;
    FUN_overlay_20__02198f7c(owner, &self->offset);
}
