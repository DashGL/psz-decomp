//cpp
// flags: -O4,s
struct Vec3 { int x, y, z; };
extern "C" {
extern int DAT_020fc988;
extern int DAT_0219fe20[];
extern short DAT_020ed83c[];
extern int FUN_02036c34(void *);
extern int FUN_020866b4(int, Vec3 *);
extern int FUN_overlay_20__0219e154(Vec3 *);
extern int FUN_02034b8c(Vec3 *, int);
extern void FUN_02086d60(int *, int *, int *);
extern void FUN_02092654(Vec3 *, int *);
extern void FUN_02035408(Vec3 *, int, int, int);
extern void FUN_overlay_20__0219d59c(void *, Vec3 *, int);
extern void FUN_02036348(Vec3 *, Vec3 *, Vec3 *);
extern void FUN_02036368(Vec3 *);
extern unsigned short FUN_0205cc08(int);
extern void FUN_020bc5cc(int *, int *, int *);
extern void FUN_overlay_20__0219df38(void *);
void FUN_overlay_20__0219df8c(void *actor);
}
#define I(p,o) (*(int *)((char *)(p)+(o)))
#define P(p,o) (*(void **)((char *)(p)+(o)))
#define H(p,o) (*(unsigned short *)((char *)(p)+(o)))
#define V(p,o) (*(Vec3 *)((char *)(p)+(o)))

void FUN_overlay_20__0219df8c(void *actor) {
    void *state = P(actor, 0xe0);
    if (I(state, 0x1c) == 0) return;
    Vec3 lateral, target, direction, velocity, spawn;
    int delta = FUN_02036c34(actor);
    I(state, 0x14) -= delta;
    I(state, 0x18) += delta;
    if ((I(state, 0x14) <= DAT_020fc988) ? 1 : 0) {
        I(state, 0x14) = I(state, 0x24);
        unsigned short yaw = (unsigned short)(H(state, 0xc) + 0x4000);
        int index = (yaw >> 4) * 2;
        lateral.x = DAT_020ed83c[index];
        lateral.y = 0;
        lateral.z = DAT_020ed83c[index + 1];
        int high = I(state, 0x28) / 2;
        int low = (-I(state, 0x28)) / 2;
        int offset;
        FUN_02086d60(&offset, &low, &high);
        FUN_02092654(&lateral, &offset);
        FUN_02035408(&spawn, I(state, 0) + lateral.x, I(state, 4) + lateral.y, I(state, 8) + lateral.z);
        FUN_overlay_20__0219d59c(actor, &spawn, I(state, 0x20));
    }
    if (FUN_020866b4(I(state, 0x10), &target)) {
        FUN_02036348(&direction, &target, &V(state, 0));
        direction.y = 0;
        if (FUN_overlay_20__0219e154(&direction) > 0) {
            FUN_02036368(&direction);
            unsigned short desired = FUN_0205cc08(direction.z);
            if (direction.x < 0) desired = (unsigned short)(0x10000 - desired);
            unsigned short yaw = H(state, 0xc);
            unsigned short difference = (unsigned short)(desired - yaw);
            int positive = 1;
            if (difference >= 0x8000) {
                difference = (unsigned short)(0x10000 - difference);
                positive = 0;
            }
            unsigned short step = (unsigned short)(((long long)H(state, 0x30) * delta + 0x800) >> 12);
            if (difference >= step) {
                if (positive) desired = (unsigned short)(yaw + step); else desired = (unsigned short)(yaw - step);
            }
            H(state, 0xc) = desired;
        }
    }
    int index = (H(state, 0xc) >> 4) * 2;
    velocity.x = DAT_020ed83c[index];
    velocity.y = 0;
    velocity.z = DAT_020ed83c[index + 1];
    int speed;
    FUN_020bc5cc(&speed, &I(state, 0x2c), &delta);
    FUN_02092654(&velocity, &speed);
    I(state, 0) += velocity.x;
    I(state, 4) += velocity.y;
    I(state, 8) += velocity.z;
    if (((I(state, 0x18) >= DAT_0219fe20[3]) ? 1 : 0) || !FUN_02034b8c(&V(state, 0), 0x100)) {
        FUN_overlay_20__0219df38(state);
    }
}
