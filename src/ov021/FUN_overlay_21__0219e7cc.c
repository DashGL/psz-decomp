//cpp
// flags: -O4,s
struct Fx {
    int v[1];
    inline Fx() {}
    inline Fx(int x) { v[0] = x; }
    inline int operator>(const volatile Fx &o) const { return (v[0] > o.v[0]) ? 1 : 0; }
    inline int operator<(const volatile Fx &o) const { return (v[0] < o.v[0]) ? 1 : 0; }
    inline Fx operator-(const volatile Fx &o) const { Fx r(v[0] - o.v[0]); return r; }
    inline Fx operator+(const volatile Fx &o) const { Fx r(v[0] + o.v[0]); return r; }
    inline Fx operator-=(const volatile Fx &o) { *this = *this - o; return *this; }
    inline Fx operator+=(const volatile Fx &o) { *this = *this + o; return *this; }
};

    struct Vec3 {
    union {
        struct { int x, y, z; };
        int w[3];
    };
};

struct Part {
    unsigned char pad0[0x2c];
    int id0;
    int id1;
    unsigned char pad1[0x10];
    Fx f44;
    unsigned char pad2[0x74];
    inline void SetF44(Fx x) { f44 = x; }
    inline Fx GetF44() const { return f44; }
};

struct Actor {
    unsigned char pad0[0xfc];
    Vec3 pos;
    unsigned short yaw;
};

struct Effect {
    unsigned char pad0[0x5c];
    Vec3 pos;
    unsigned short pad68;
    unsigned short yaw;
    unsigned char pad6c[0x78];
    int flags;
};

struct Owner {
    unsigned char pad0[0x80];
    int f80;
};

struct Self {
    int f0;
    Actor *actor;
    Owner *owner;
    int state;
    Part *parts;
    int eff_id;
    int se_id;
    unsigned short spin_vel;
    unsigned short pad1e;
    unsigned int frame;
    Fx dist;
};

extern "C" {
extern volatile Fx DAT_021a17dc[];
extern Fx DAT_020fc988;
extern void FUN_02044570(void *, int, int);
extern int FUN_02072650(void *, int, int, int);
extern int FUN_02074e9c(void *, int, int, int);
extern void FUN_02072750(void *, int, Vec3 *);
extern void FUN_02072724(void *, int);
extern void FUN_02075068(void *, int);
extern Effect *FUN_02075040(void *, int);
extern void *FUN_02090c20(void);
extern void FUN_0204bf88(void *);
extern void FUN_02090f74(short *, void *, Vec3 *, int);
extern void FUN_020c1d7c(int, int, int, int, int);
extern void FUN_02037924(void *);
void FUN_overlay_21__0219e7cc(Self *self);
}

void FUN_overlay_21__0219e7cc(Self *self) {
    Actor *actor = self->actor;
    switch (self->state) {
    case 0:
        if (self->dist > DAT_021a17dc[0]) {
            int i;
            for (i = 0; i < 4; i++) {
                FUN_02044570(actor, self->parts[i].id0, 0);
                FUN_02044570(actor, self->parts[i].id1, 0);
            }
            self->state = 1;
        } else {
            int i;
            for (i = 0; i < 4; i++) {
                self->parts[i].SetF44(self->parts[i].f44 - DAT_021a17dc[1]);
            }
            self->dist.v[0] += DAT_021a17dc[1].v[0];
        }
        break;
    case 1: {
        Vec3 pos = actor->pos;
        unsigned int frame = self->frame;
        if (frame < 30) {
            self->spin_vel += 80;
        } else if (frame == 30) {
            unsigned short yaw = actor->yaw;
            self->se_id = FUN_02072650(actor, 11, 0, 0);
            FUN_02072750(actor, self->se_id, &pos);
            self->eff_id = FUN_02074e9c(actor, 3, 0, 0);
            Effect *eff = FUN_02075040(actor, self->eff_id);
            if (eff) {
                eff->pos = pos;
                eff->yaw = yaw;
                FUN_0204bf88(eff);
                eff->flags |= 2;
            }
        } else if (frame > 30 && frame < 90) {
            short screen[2];
            FUN_02090f74(screen, FUN_02090c20(), &pos, 0);
            FUN_020c1d7c(26, 1, 0, screen[1], 4);
        } else if (frame == 90) {
            if (self->eff_id != -1) {
                FUN_02075068(actor, self->eff_id);
                self->eff_id = -1;
            }
            if (self->se_id != -1) {
                FUN_02072724(actor, self->se_id);
                self->se_id = -1;
            }
        } else if (frame > 90 && frame < 120) {
            self->spin_vel -= 80;
        } else if (frame == 120) {
            int i;
            for (i = 0; i < 4; i++) {
                FUN_02044570(actor, self->parts[i].id0, 1);
                FUN_02044570(actor, self->parts[i].id1, 1);
            }
            self->state = 2;
        }
        actor->yaw = (unsigned short)(self->spin_vel + actor->yaw);
        self->frame++;
        break;
    }
    case 2:
        if (self->dist < DAT_020fc988) {
            Owner *owner = self->owner;
            owner->f80 = 1;
            FUN_02037924(owner);
        } else {
            int i;
            for (i = 0; i < 4; i++) {
                self->parts[i].SetF44(self->parts[i].f44 + DAT_021a17dc[1]);
            }
            self->dist.v[0] -= DAT_021a17dc[1].v[0];
        }
        break;
    }
}
