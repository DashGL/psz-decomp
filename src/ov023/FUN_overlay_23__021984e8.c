//cpp
// flags: -O4,s
#pragma always_inline on

struct VecFx32 { int x, y, z; };
struct Vec3 : public VecFx32 {
    inline Vec3() {}
    inline Vec3(int x_, int y_, int z_) { x = x_; y = y_; z = z_; }
    inline Vec3 operator-(const Vec3 &o) const { return Vec3(x - o.x, y - o.y, z - o.z); }
};

struct Actor {
    char pad0[0xc];
    int id;
    char pad1[0x28];
    Vec3 pos;
};

struct Player {
    char pad0[0x9c];
    Vec3 pos;
};

struct Self {
    int f0;
    Actor *actor;
    void *owner;
    int state;
    int timer;
};

static inline int fx_ge(int a, int b) { return (a >= b) ? 1 : 0; }
static inline int fx_le(int a, int b) { return (a <= b) ? 1 : 0; }

extern "C" {
extern char *DAT_0210e24c;
extern int DAT_0219d60c[];
extern int DAT_020fc988;
extern unsigned long long DAT_0211c844[3];
extern int FUN_02036c34(void *);
extern int FUN_02040d2c(void *, int);
extern void *FUN_02090c20(void);
extern Player *FUN_02086a1c(int);
extern void FUN_02090f74(short *, void *, Vec3 *, int);
extern void FUN_020c193c(int, int, int, int, int);
extern void FUN_02043ea4(void *, int, int);
extern void FUN_02044570(void *, int, int);
extern void FUN_020445a8(void *, int, int);
extern void FUN_02040c0c(void *, int, int, int, int);
extern void FUN_02037924(void *);
extern void FUN_020729a4(void *, int, int, int, int, int);
extern int FUN_02072a70(void *, int);

void FUN_overlay_23__021984e8(Self *self) {
    Actor *actor = self->actor; void *owner = self->owner; int i; char *manager = DAT_0210e24c + 0x74;
    int delta = FUN_02036c34(actor);

    switch (self->state) {
    case 0:
        self->timer += 0x1000;
        if (fx_ge(self->timer, DAT_0219d60c[3])) {
            short screen[2];
            FUN_02090f74(screen, FUN_02090c20(), &actor->pos, 0);
            FUN_020c193c(20, 0, screen[0], screen[1], 4);
            FUN_02043ea4(actor, 0, 1);
            FUN_02044570(actor, 0, 1);
            FUN_02040c0c(actor, 0, 0, 0x1000, 0);
            self->timer = DAT_020fc988;
            self->state = 1;
        }
        break;
    case 1:
        self->timer += delta;
        if (fx_ge(self->timer, DAT_0219d60c[2])) {
            FUN_020445a8(actor, 0, 1);
            self->state = 2;
        }
        break;
    case 2:
        
        for (i = 0; i <= 3; i++) {
            Player *player = FUN_02086a1c(i);
            if (player) {
                const Vec3 &actorPos = actor->pos;
                const Vec3 &playerPos = player->pos;
                int dz = *(volatile int *)&playerPos.z - actorPos.z;
                int dy = playerPos.y - actorPos.y;
                int dx = playerPos.x - actorPos.x;
                long long zz = (long long)dz * dz;
                long long xx = (long long)dx * dx;
                long long yy = (long long)dy * dy;
                int dist = (int)((zz + 0x800LL) >> 12) + ((int)((xx + 0x800LL) >> 12) + (int)((yy + 0x800LL) >> 12));
                if (fx_le(dist, DAT_0219d60c[0])) {
                    FUN_020729a4(manager, actor->id, 3, 0, 0, 0);
                }
            }
        }

        if (FUN_02072a70(manager, 3) > 0) {
            unsigned long long n = DAT_0211c844[1] * DAT_0211c844[0] + DAT_0211c844[2];
            DAT_0211c844[0] = n;
            self->timer = (int)(((n >> 32) * 0x25800ULL) >> 32);
            self->state = 3;
        }
        break;
    case 3:
        self->timer -= delta;
        if (fx_le(self->timer, DAT_020fc988)) {
            FUN_02040c0c(actor, 0, 1, 0x1000, 0);
            self->state = 4;
        }
        break;
    case 4:
        if (FUN_02040d2c(actor, 0)) {
            FUN_02037924(owner);
        }
        break;
    }
}
}
