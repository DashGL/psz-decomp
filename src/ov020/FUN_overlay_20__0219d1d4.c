//cpp
// flags: -O4,s
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
    int q1;
    int q2;
    int state;
    int timer;
    int start;
    int end;
    int duration;
    int elapsed;
    unsigned short speed;
    unsigned char pad2e[2];
    void *targetObj;
} Self;

extern "C" {
extern int DAT_020fc988;
extern int DAT_0219fce0[];
extern short DAT_020ed83c[];
extern void FUN_02040c0c(Actor *, int, int, int, int);
extern void FUN_02040c94(Actor *, int, int);
extern void FUN_02037924(void *);
extern int FUN_02040d2c(Actor *, int);
extern int FUN_02036c34(Actor *);
extern int FUN_020866b4(void *, Vec3 *);
}
#pragma thumb off
extern "C" {
extern void FUN_0205c8cc(Vec3 *, Vec3 *);
extern unsigned short FUN_0205cc08(int);
}
#pragma thumb reset

extern "C" void FUN_overlay_20__0219d1d4(Self *self) {
    Actor *actor = self->actor;
    void *owner = self->owner;
    switch (self->state) {
    case 0:
        if (self->q1 > 0) {
            self->timer = DAT_020fc988;
            self->start = DAT_0219fce0[3];
            self->end = DAT_0219fce0[2];
            self->duration = self->end - self->start;
            self->elapsed = DAT_020fc988;
            self->speed = 0;
            FUN_02040c0c(actor, 0, 16, 0x1000, 10);
            self->state = 1;
            self->q1--;
        } else if (self->q2 > 0) {
            self->timer = DAT_020fc988;
            self->start = DAT_0219fce0[1];
            self->end = DAT_0219fce0[0];
            self->duration = self->end - self->start;
            self->elapsed = DAT_020fc988;
            self->speed = 364;
            FUN_02040c0c(actor, 0, 17, 0x1000, 10);
            FUN_02040c94(actor, 0, 0x1800);
            self->state = 1;
            self->q2--;
        } else {
            FUN_02040c0c(actor, 0, 4, 0x1000, 0);
            FUN_02037924(owner);
        }
        break;
    case 1:
        if (FUN_02040d2c(actor, 0)) {
            self->state = 0;
            break;
        }
        {
            Vec3 target;
            Vec3 direction;
            unsigned short desired;
            unsigned short difference;
            unsigned short step;
            int delta = FUN_02036c34(actor);
            if (((self->start <= self->timer) ? 1 : 0) && ((self->timer < self->end) ? 1 : 0)) {
                if (FUN_020866b4(self->targetObj, &target)) {
                    Vec3 *actorpos = &actor->pos;
                    unsigned short yaw = actor->yaw;
                    int positive, phase;
                    int dz = target.z - actorpos->z;
                    int dy = target.y - actorpos->y;
                    int dx = target.x - actor->pos.x;
                    direction.x = dx;
                    direction.y = dy;
                    direction.z = dz;
                    direction.y = 0;
                    if (direction.x || direction.y || direction.z) {
                        FUN_0205c8cc(&direction, &direction);
                    }
                    desired = FUN_0205cc08(direction.z);
                    if (direction.x < 0) desired = (unsigned short)(0x10000 - desired);
                    difference = (unsigned short)(desired - yaw);
                    positive = 1;
                    if (difference >= 0x8000) {
                        difference = (unsigned short)(0x10000 - difference);
                        positive = 0;
                    }
                    step = (unsigned short)(((long long)self->speed * delta + 0x800) >> 12);
                    phase = ((self->elapsed >> 12) << 15) / (self->duration >> 12);
                    step = (unsigned short)(((long long)step * DAT_020ed83c[(phase >> 4) * 2] + 0x800) >> 12);
                    if (step > difference) {
                        yaw = desired;
                    } else if (positive) {
                        yaw += step;
                    } else {
                        yaw -= step;
                    }
                    actor->yaw = yaw;
                }
                self->elapsed += delta;
            }
            self->timer += delta;
        }
        break;
    }
}
