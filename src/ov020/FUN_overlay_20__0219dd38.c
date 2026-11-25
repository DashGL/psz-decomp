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
    unsigned char *state;
} Self;

extern unsigned DAT_0219ff80;
extern int DAT_0219fde0[];
extern int DAT_0219fdf0;
extern short DAT_020ed83c[];
extern int FUN_020866b4(int, Vec3 *);
extern int FUN_02036c34(Actor *);
extern int FUN_02034b8c(Vec3 *, int);
extern void FUN_02035408(Vec3 *, int, int, int);
extern void FUN_0205c8cc(Vec3 *, Vec3 *);
extern void FUN_02092654(Vec3 *, int *);
extern unsigned short FUN_0205cc08(int);
extern void FUN_020bc5cc(int *, int *, int *);
extern void FUN_02036384(Actor *, Vec3 *);

void FUN_overlay_20__0219dd38(Self *self) {
    Actor *actor = self->actor;
    Vec3 target;
    if (!FUN_020866b4(*(int *)(self->state + 0xc0), &target)) return;
    {
        Vec3 *actorpos = &actor->pos;
        int delta = FUN_02036c34(actor);
        unsigned short yaw = actor->yaw;
        Vec3 direction;
        unsigned short desired, turn, difference, threshold;
        int positive;
        Vec3 probe;
        Vec3 velocity;
        Vec3 position;
        int speed;
        int index;

        FUN_02035408(&direction, target.x - actor->pos.x, target.y - actorpos->y, target.z - actorpos->z);
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
        turn = (unsigned short)(((long long)delta * 91 + 0x800) >> 12);
        if (!(DAT_0219ff80 & 1)) {
            DAT_0219fde0[4] = 0x7800;
            DAT_0219ff80 |= 1;
        }
        index = (yaw >> 4) * 2;
        probe.x = DAT_020ed83c[index];
        probe.y = 0;
        probe.z = DAT_020ed83c[index + 1];
        FUN_02092654(&probe, &DAT_0219fdf0);
        probe.x += actorpos->x;
        probe.y += actorpos->y;
        probe.z += actorpos->z;
        if (!FUN_02034b8c(&probe, 0x100)) {
            turn = (unsigned short)(turn * 3);
        }
        threshold = (unsigned short)(((long long)delta * 0x38e + 0x800) >> 12);
        if (difference < threshold) {
            turn = (unsigned short)((int)((unsigned)turn * difference) / 0x38e);
        }
        if (positive) {
            yaw += turn;
        } else {
            yaw -= turn;
        }
        actor->yaw = yaw;
        index = (yaw >> 4) * 2;
        velocity.x = DAT_020ed83c[index];
        velocity.y = 0;
        velocity.z = DAT_020ed83c[index + 1];
        FUN_020bc5cc(&speed, &DAT_0219fdf0 - 4, &delta);
        FUN_02092654(&velocity, &speed);
        {
            Vec3 *p = &actor->pos;
            FUN_02035408(&position, actor->pos.x + velocity.x, p->y + velocity.y, p->z + velocity.z);
        }
        FUN_02036384(actor, &position);
    }
}
