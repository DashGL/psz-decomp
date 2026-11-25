//cpp
// flags: -O4,s
struct Vec3 { union { struct { int x, y, z; }; int w[3]; }; };
struct Fx {
    int v;
    inline Fx() {}
    inline Fx(int x) : v(x) {}
    inline int operator>(const Fx &o) const { return (v > o.v) ? 1 : 0; }
};
extern "C" {
extern int DAT_0219be50, DAT_0219be54, DAT_0219be4c;
extern int FUN_020370b8(void *, int, Vec3 *);
extern void FUN_02037924(void *);
extern void FUN_02036f7c(void *, Vec3 *);
extern void FUN_020bbfbc(Vec3 *, unsigned short);
extern void FUN_overlay_29__0219aad8(void *, Vec3 *);
extern void FUN_02036fa8(void *, Vec3 *);
extern void FUN_02037254(void *, int, int, Vec3 *, int);
#pragma thumb off
extern void FUN_0205c8cc(Vec3 *, Vec3 *);
extern int FUN_0205c7ac(Vec3 *, Vec3 *);
#pragma thumb on
}
struct Actor {
    char pad0[0x38];
    Vec3 pos;
    unsigned short yaw;
};
struct Owner {
    char pad0[0x54];
    int f54;
};
struct Self {
    int f0;
    Actor *actor;
    Owner *owner;
    int state;
};
extern "C" void FUN_overlay_29__0219a304(Self *self)
{
    Vec3 velocity, target, heading, turned, position, scaled, side;
    Actor *actor = self->actor;
    Owner *owner = self->owner;
    velocity.x = 0;
    velocity.y = 0;
    velocity.z = 0;
    if (!FUN_020370b8(actor, owner->f54, &target)) {
        FUN_02037924(owner);
        return;
    }
    if (target.x || target.y || target.z) {
        FUN_0205c8cc(&target, &target);
    }
    FUN_02036f7c(actor, &heading);
    {
        int dot = FUN_0205c7ac(&target, &heading);
        int threshold = (self->state == 1) ? DAT_0219be50 : DAT_0219be54;
        self->state = (dot > threshold) ? 1 : 0;
    }
    if (self->state == 1) {
        int speed = DAT_0219be4c;
        scaled.x = (int)(((long long)heading.x * speed + 0x800) >> 12);
        scaled.y = (int)(((long long)heading.y * speed + 0x800) >> 12);
        scaled.z = (int)(((long long)heading.z * speed + 0x800) >> 12);
        velocity = scaled;
    } else {
        side = heading;
        FUN_020bbfbc(&side, 0x4000);
        int dot = FUN_0205c7ac(&side, &target);
        unsigned short yaw = actor->yaw;
        int delta = (dot > 0 ? 0x160 : 0xfea0);
        turned.x = 0;
        turned.y = 0;
        turned.z = 0x1000;
        FUN_020bbfbc(&turned, (unsigned short)(delta + yaw));
        Fx desired_dot(FUN_0205c7ac(&heading, &target));
        Fx turned_dot(FUN_0205c7ac(&heading, &turned));
        if (turned_dot.v > 0 && (desired_dot > turned_dot)) {
            turned = target;
        }
        heading = turned;
    }
    FUN_overlay_29__0219aad8(actor, &velocity);
    FUN_02036fa8(actor, &heading);
    position = actor->pos;
    FUN_02037254(actor, 15, 1, &position, 0);
}
