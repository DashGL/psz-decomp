// flags: -O4,s
typedef struct {
    int x, y, z;
} Vec3;

typedef struct {
    unsigned char pad[0x38];
    Vec3 pos;
    unsigned short yaw;
} Actor;

typedef struct {
    unsigned char pad[0x64];
    int target_id;
} State;

typedef struct {
    int pad0;
    Actor *actor;
    State *state;
} Self;

extern int FUN_02036c34(void *);
extern int FUN_020866b4(int, Vec3 *);
extern void FUN_02036348(Vec3 *, Vec3 *, Vec3 *);
extern void FUN_02036368(Vec3 *);
#pragma thumb off
extern int FUN_0205c86c(Vec3 *);
extern unsigned short FUN_0205cc08(int);
#pragma thumb reset

static inline int fx_mul(int a, int b) {
    return (int)(((long long)a * b + 0x800) >> 12);
}

void FUN_overlay_23__0219cb84(Self *self) {
    Actor *actor = self->actor;
    State *state = self->state;
    Vec3 *actor_pos = &actor->pos;
    unsigned short yaw = actor->yaw;
    int delta = FUN_02036c34(actor);
    Vec3 target;
    Vec3 direction;
    int positive;
    unsigned short desired;
    unsigned short diff;
    unsigned short step;

    if (!FUN_020866b4(state->target_id, &target)) {
        return;
    }
    FUN_02036348(&direction, &target, actor_pos);
    FUN_0205c86c(&direction);
    FUN_02036368(&direction);

    desired = FUN_0205cc08(direction.z);
    if (direction.x < 0) {
        desired = (unsigned short)(0x10000 - desired);
    }
    positive = 1;
    diff = (unsigned short)(desired - yaw);
    if (diff >= 0x8000) {
        diff = (unsigned short)(0x10000 - diff);
        positive = 0;
    }
    step = (unsigned short)fx_mul(delta, 0x38e);
    if (diff >= step) {
        if (positive) {
            desired = (unsigned short)(yaw + step);
        } else {
            desired = (unsigned short)(yaw - step);
        }
    }
    actor->yaw = desired;
}
