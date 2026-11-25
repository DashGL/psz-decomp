//cpp
// flags: -O4,s
#pragma block_assign on
#pragma always_inline on

struct Fixed {
    int v;
    inline int operator<(const Fixed &o) const { if (v < o.v) return 1; return 0; }
    inline int operator>(const Fixed &o) const { if (v > o.v) return 1; return 0; }
    inline int operator!=(const Fixed &o) const { if (v != o.v) return 1; return 0; }
};

static inline int fx_lt(int a, int b) { if (a < b) return 1; return 0; }
static inline int fx_gt(int a, int b) { if (a > b) return 1; return 0; }
static inline int fx_ne(int a, int b) { if (a != b) return 1; return 0; }

struct Vec3 {
    int x, y, z;
};

struct Actor {
    unsigned char pad0[0x38];
    Vec3 pos;
};

struct Self {
    int f00;
    Actor *actor;
    int f08;
    Vec3 center;
    unsigned char pad18[0x1c];
    Fixed f34;
    Fixed f38;
    Fixed f3c;
    Fixed f40;
    Fixed f44;
    Fixed f48;
    int f4c;
    Fixed f50;
    Fixed f54;
    Fixed f58;
    Fixed f5c;
    Fixed f60;
};

extern "C" {
extern Fixed DAT_0219db0c[];
extern Fixed DAT_020fc988;
extern short DAT_020ed83c[];
extern int FUN_02036c34(void *);
extern void FUN_02036348(Vec3 *, Vec3 *, Vec3 *);
extern void FUN_02036368(Vec3 *);
extern void FUN_020bc610(Fixed *, Fixed *, Fixed *);
extern void FUN_020bc658(Fixed *, Fixed *);
extern void FUN_020bc5e8(Fixed *, Fixed *);
extern void FUN_020bc5cc(Fixed *, Fixed *, Fixed *);
extern void FUN_02083a70(Vec3 *, int);
extern void FUN_overlay_23__0219cb54(void *, Vec3 *);
extern int FUN_020375d8(void *);
extern int FUN_02034b8c(Vec3 *, int);
#pragma thumb off
extern int FUN_0205c86c(Vec3 *);
extern unsigned short FUN_0205cc08(int);
#pragma thumb reset
}

extern "C" void FUN_overlay_23__0219c8dc(Self *self) {
    Actor *actor = self->actor;
    Vec3 *origin = &actor->pos;
    Vec3 direction;
    Vec3 radial;
    Vec3 side;
    Vec3 side_move;
    Vec3 probe;
    Fixed delta;
    int distance;
    unsigned short yaw;

    delta.v = FUN_02036c34(actor);
    FUN_02036348(&direction, &self->center, origin);
    distance = FUN_0205c86c(&direction);
    FUN_02036368(&direction);
    yaw = FUN_0205cc08(direction.z);
    if (direction.x < 0) {
        yaw = (unsigned short)(0x10000 - yaw);
    }

    {
        int center_dist = self->f34.v;
        int margin = DAT_0219db0c[14].v;
        int hi = center_dist + margin;
        int lo = center_dist - margin;
        if (fx_lt(distance, lo) || fx_lt(hi, distance)) {
            if (fx_gt(distance, center_dist)) {
                self->f38.v += self->f48.v;
            } else {
                self->f38.v -= self->f48.v;
            }
            if (fx_ne(self->f3c.v, self->f40.v)) {
                Fixed div1;
                Fixed gap1;
                Fixed ten1;
                ten1.v = 0xa000;
                gap1.v = self->f40.v - self->f3c.v;
                FUN_020bc610(&div1, &gap1, &ten1);
                self->f3c.v += div1.v;
            }
            Fixed abs1;
            FUN_020bc658(&abs1, &self->f38);
            if (fx_gt(abs1.v, self->f3c.v)) {
                if (fx_gt(self->f38.v, DAT_020fc988.v)) {
                    self->f38 = self->f3c;
                } else {
                    self->f38.v = -self->f3c.v;
                }
            }
        }
    }

    FUN_020bc5e8(&self->f38, &self->f44);
    radial = direction;
    {
        Fixed radial_step;
        FUN_020bc5cc(&radial_step, &self->f38, &delta);
        FUN_02083a70(&radial, radial_step.v);
    }
    FUN_overlay_23__0219cb54(actor, &radial);

    if (self->f4c != 0) {
        if (self->f4c == 1) {
            self->f50.v += self->f60.v;
        } else {
            self->f50.v -= self->f60.v;
        }
        if (fx_ne(self->f54.v, self->f58.v)) {
            Fixed div2;
            Fixed gap2;
            Fixed ten2;
            ten2.v = 0xa000;
            gap2.v = self->f58.v - self->f54.v;
            FUN_020bc610(&div2, &gap2, &ten2);
            self->f54.v += div2.v;
        }
        Fixed abs2;
        FUN_020bc658(&abs2, &self->f50);
        if (fx_gt(abs2.v, self->f54.v)) {
            if (fx_gt(self->f50.v, DAT_020fc988.v)) {
                self->f50 = self->f54;
            } else {
                self->f50.v = -self->f54.v;
            }
        }
    }

    FUN_020bc5e8(&self->f50, &self->f5c);
    {
        int index = ((int)(unsigned short)(yaw - 0x4000) >> 4) * 2;
        side.x = DAT_020ed83c[index];
        side.y = 0;
        side.z = DAT_020ed83c[index + 1];
    }
    side_move = side;
    if (self->f50.v < 0) {
        FUN_02083a70(&side_move, -0x1000);
    }
    probe = side_move;
    {
        Fixed side_step;
        Fixed abs_speed;
        FUN_020bc658(&abs_speed, &self->f50);
        FUN_020bc5cc(&side_step, &abs_speed, &delta);
        FUN_02083a70(&side_move, side_step.v);
    }
    FUN_overlay_23__0219cb54(actor, &side_move);

    if (self->f4c != 0) {
        FUN_02083a70(&probe, DAT_0219db0c[7].v);
        probe.x += origin->x;
        probe.y += origin->y;
        probe.z += origin->z;
        if (FUN_02034b8c(&probe, FUN_020375d8(actor)) == 0) {
            self->f4c = 0;
        }
    }
}
