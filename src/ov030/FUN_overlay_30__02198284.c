// flags: -O4,s
#pragma opt_propagation off
enum { E0 = 0, E1 = 1 };
typedef struct { int x, y, z; } Vec3;
typedef struct {
    unsigned char pad0[0x38];
    Vec3 pos;
    unsigned short yaw;
} Actor;
typedef struct {
    int f0;
    Actor *actor;
    char *owner;
    int timer;
    int mode;
} Obj30;

extern int DAT_0219adac[];
extern int DAT_0219adb4;
extern int D_0219adac;
extern const short DAT_020ed83c[];
extern int DAT_020fc988;
extern int FUN_02036c34(void *);
extern int FUN_overlay_30__021989b0(void *, Vec3 *);
extern unsigned short FUN_overlay_30__02198568(void *, Vec3 *);
extern void FUN_020bc5cc(int *, const int *, const int *);
extern void FUN_overlay_30__021985b8(void *, Vec3 *, int, int);
extern void FUN_02035408(Vec3 *, int, int, int);
extern void FUN_02036384(void *, Vec3 *);
extern void FUN_02037924(void *);

void FUN_overlay_30__02198284(Obj30 *self) {
    Vec3 target, current, target2, diff, position;
    int delta, speed, limit, alt, step;
    char *owner = self->owner;
    Actor *actor = self->actor;
    int turn;
    unsigned int alignment;
    int index;

    delta = FUN_02036c34(actor);
    speed = DAT_0219adac[3];
    turn = 0x300;
    FUN_020bc5cc(&limit, &DAT_0219adb4, &DAT_0219adb4);
    alignment = 0x1000;
    if (self->mode == 1) {
        speed = DAT_0219adac[1];
        turn = 0x500;
        FUN_020bc5cc(&alt, &D_0219adac, &D_0219adac);
        limit = alt;
        alignment = 0x3000;
    }
    if (FUN_overlay_30__021989b0(owner, &target) == 1) {
        FUN_overlay_30__021985b8(actor, &target, turn, 0);
    }
    index = (actor->yaw >> 4) * 2;
    FUN_020bc5cc(&step, &speed, &delta);
    {
        long long b = step;
        Vec3 *p = (Vec3 *)(unsigned int)((unsigned long long)(unsigned int)&actor->pos & 0xFFFFFFFFFFFFFFFFULL);
        int sx = DAT_020ed83c[index];
        long long lx = (long long)sx * b;
        int sz = DAT_020ed83c[index + 1];
        long long lz = (long long)sz * b;
        FUN_02035408(&position,
                     actor->pos.x + (int)((lx + 0x800LL) >> 12),
                     p->y,
                     p->z + (int)((lz + 0x800LL) >> 12));
    }
    FUN_02036384(actor, &position);
    if ((DAT_020fc988 >= self->timer) ? E1 : E0) {
        *(int *)(owner + 0x48) = 2;
        FUN_02037924(owner);
    } else {
        current = actor->pos;
        if (FUN_overlay_30__021989b0(owner, &target2) == 1) {
            long long dy, dx, dz, zz, xx, yy;
            int dist;
            FUN_02035408(&diff, target2.x - current.x, target2.y - current.y, target2.z - current.z);
            dy = diff.y; dx = diff.x; dz = diff.z;
            zz = dz * dz; xx = dx * dx; yy = dy * dy;
            dist = (int)((zz + 0x800LL) >> 12) + ((int)((xx + 0x800LL) >> 12) + (int)((yy + 0x800LL) >> 12));
            if (((limit > dist) ? E1 : E0) && alignment > FUN_overlay_30__02198568(actor, &diff)) {
                *(int *)(owner + 0x48) = 2;
                FUN_02037924(owner);
            }
        }
    }
    self->timer -= delta;
}
