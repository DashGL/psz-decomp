//cpp
// flags: -O4,s -inline auto
struct Vec3 { int x, y, z; };
#define I(p,o) (*(int *)((char *)(p)+(o)))
#define P(p,o) (*(void **)((char *)(p)+(o)))
#define H(p,o) (*(unsigned short *)((char *)(p)+(o)))

extern "C" {
extern int FUN_02036c34(void *);
extern int FUN_overlay_23__0219a364(void *, Vec3 *);
extern void FUN_02035408(Vec3 *, int, int, int);
extern int FUN_0205c86c(Vec3 *);
extern void FUN_0205c8cc(Vec3 *, Vec3 *);
extern unsigned short FUN_0205cc08(int);
extern void FUN_020bc5cc(int *, const int *, const int *);
extern void FUN_020bc658(int *, const int *);
extern void FUN_020bc610(int *, const int *, const int *);
extern void FUN_020bc5e8(int *, const int *);
extern void FUN_02036384(void *, Vec3 *);
extern int DAT_0219da18[];
extern int DAT_overlay_23__0219da18;
extern int DAT_0219da20;
extern int DAT_0219dc0c;
extern short DAT_020ed83c[];
void FUN_overlay_23__0219b788(void *self);
}

static inline int fx_mul(int a, int b) {
    return (int)(((long long)a * b + 0x800) >> 12);
}

void FUN_overlay_23__0219b788(void *self) {
    void *actor = P(self, 4);
    void *owner = P(self, 8);
    Vec3 target, direction, position;
    int delta = FUN_02036c34(actor);
    if (!FUN_overlay_23__0219a364(owner, &target)) return;
    Vec3 *actor_pos = (Vec3 *)((char *)actor + 0x38);
    unsigned short yaw = H(actor, 0x44);
    FUN_02035408(&direction, target.x - actor_pos->x, target.y - actor_pos->y, target.z - actor_pos->z);
    direction.y = 0;
    int positive;
    int distance = FUN_0205c86c(&direction);
    if (direction.x || direction.y || direction.z) {
        FUN_0205c8cc(&direction, &direction);
    }
    unsigned short diff;
    unsigned short desired = FUN_0205cc08(direction.z);
    if (direction.x < 0) desired = (unsigned short)(0x10000 - desired);
    diff = (unsigned short)(yaw - desired);
    positive = 0;
    if (diff >= 0x8000) {
        diff = (unsigned short)(0x10000 - diff);
        positive = 1;
    }
    unsigned short step = (unsigned short)fx_mul(delta, 364);
    if (diff < 0x11c7) {
        step = (unsigned short)((int)(step * diff) / 0x11c7);
    }
    if (diff >= step) {
        if (positive) desired = (unsigned short)(yaw + step);
        else desired = (unsigned short)(yaw - step);
    }
    H(actor, 0x44) = desired;

    int speed;
    int absolute;
    int forward_step, backward_step, negative;
    if ((distance > DAT_0219da18[1]) ? 1 : 0) {
        FUN_020bc5cc(&forward_step, &DAT_0219da20, &delta);
        speed = forward_step;
    } else {
        negative = -DAT_0219da18[2];
        FUN_020bc5cc(&backward_step, &negative, &delta);
        speed = backward_step;
    }
    if (!(DAT_0219dc0c & 1)) {
        DAT_0219da18[0] = 0x2000;
        DAT_0219dc0c |= 1;
    }
    int difference = distance - DAT_0219da18[1];
    FUN_020bc658(&absolute, &difference);
    if ((absolute < DAT_0219da18[0]) ? 1 : 0) {
        int ratio;
        FUN_020bc610(&ratio, &absolute, &DAT_overlay_23__0219da18);
        FUN_020bc5e8(&speed, &ratio);
    }
    int index = (desired >> 4) * 2;
    int dx = fx_mul(DAT_020ed83c[index], speed);
    int dz = fx_mul(DAT_020ed83c[index + 1], speed);
    Vec3 *pos_p = (Vec3 *)actor;
    pos_p = (Vec3 *)((char *)actor + 0x38);
    FUN_02035408(&position, I(actor, 0x38) + dx, pos_p->y, pos_p->z + dz);
    FUN_02036384(actor, &position);
}
