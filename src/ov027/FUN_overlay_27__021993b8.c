// flags: -O4,p
typedef struct { int x, y, z; } Vec3;
typedef struct {
    unsigned char pad0[0x38];
    Vec3 pos;
    unsigned short yaw;
} Actor;
typedef struct {
    unsigned char pad0[4];
    Actor *actor;
    void *state;
    unsigned short targetYaw;
    unsigned short pad0e;
    int timer;
    int fastTurn;
} Self;

extern unsigned DAT_0219c8d0;
extern int DAT_0219c398[];
extern int DAT_0219c3a0;
extern short DAT_020ed83c[];
extern int FUN_02036c34(Actor *);
extern void FUN_02092654(Vec3 *, int *);
extern int FUN_02034b8c(Vec3 *, int);
extern void FUN_020bc5cc(int *, int *, int *);
extern void FUN_02036384(Actor *, Vec3 *);
extern void FUN_02037924(void *);

void FUN_overlay_27__021993b8(Self *self) {
    Actor *actor = self->actor;
    Vec3 *pos = &actor->pos;
    int delta = FUN_02036c34(actor);
    Vec3 probe;
    Vec3 velocity;
    Vec3 next;
    int speed;
    int idx;
    unsigned short yaw;
    unsigned short target;

    if (!(DAT_0219c8d0 & 1)) {
        DAT_0219c398[0] = 0x7800;
        DAT_0219c8d0 |= 1;
    }
    idx = (self->targetYaw >> 4) * 2;
    probe.x = DAT_020ed83c[idx];
    probe.y = 0;
    probe.z = DAT_020ed83c[idx + 1];
    FUN_02092654(&probe, &DAT_0219c3a0 - 2);
    probe.x += pos->x;
    probe.y += pos->y;
    probe.z += pos->z;
    if (!FUN_02034b8c(&probe, 0x100)) {
        self->targetYaw += 0x8000;
        self->fastTurn = 1;
    }
    yaw = actor->yaw;
    target = self->targetYaw;
    if (yaw != target) {
        int positive = 1;
        unsigned short difference = (unsigned short)(target - yaw);
        long long prod;
        unsigned short step;

        if (difference >= 0x8000) {
            difference = (unsigned short)(0x10000 - difference);
            positive = 0;
        }
        if (self->fastTurn) {
            prod = (long long)delta * 182;
        } else {
            prod = (long long)delta * 45;
        }
        step = (unsigned short)((prod + 0x800) >> 12);
        if (difference < step) {
            yaw = target;
        } else if (positive) {
            yaw = (unsigned short)(yaw + step);
        } else {
            yaw = (unsigned short)(yaw - step);
        }
        actor->yaw = yaw;
    }
    idx = (yaw >> 4) * 2;
    velocity.x = DAT_020ed83c[idx];
    velocity.y = 0;
    velocity.z = DAT_020ed83c[idx + 1];
    FUN_020bc5cc(&speed, &DAT_0219c3a0, &delta);
    FUN_02092654(&velocity, &speed);
    {
        Vec3 *p = &actor->pos;
        int nx = actor->pos.x + velocity.x;
        int nz = p->z + velocity.z;
        int ny = p->y + velocity.y;
        next.x = nx;
        next.y = ny;
        next.z = nz;
    }
    FUN_02036384(actor, &next);
    self->timer += delta;
    {
        int done = !(self->timer < DAT_0219c398[1]);
        if (done != 0) {
            FUN_02037924(self->state);
        }
    }
}
