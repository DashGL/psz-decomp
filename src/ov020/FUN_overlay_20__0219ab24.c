// flags: -O4,s
#pragma opt_propagation off
typedef struct { int x, y, z; } Vec3;
extern int DAT_0219fa44, DAT_0219fa48, DAT_0219fa4c, DAT_0219fa38[], DAT_020fc988, DAT_0219ff4c[];
extern int FUN_02036c34(void *), FUN_0205c86c(Vec3 *), FUN_02040d2c(void *, int);
extern void FUN_02092654(Vec3 *, int *), FUN_020bc5cc(int *, int *, int *), FUN_0205c8cc(Vec3 *, Vec3 *), FUN_020bc658(int *, int *), FUN_020bc610(int *, int *, int *);
extern void FUN_02040c0c(void *, int, int, int, int), FUN_overlay_20__0219ad1c(void *);
#define I(p,o) (*(int *)((char *)(p)+(o)))
#define P(p,o) (*(void **)((char *)(p)+(o)))
#define V(p,o) (*(Vec3 *)((char *)(p)+(o)))

void FUN_overlay_20__0219ab24(void *self) {
    void *actor = P(self, 4);
    Vec3 position;
    int delta = FUN_02036c34(actor);
    int height, vertical, gravity, time, absolute;
    Vec3 *velocity = &V(self, 0x14);
    int dx, dy, dz;
    unsigned b;
    FUN_02092654(velocity, &DAT_0219fa44);
    FUN_020bc5cc(&gravity, &DAT_0219fa48, &delta);
    velocity->y -= gravity;
    b = (FUN_0205c86c(velocity) > DAT_0219fa38[5]);
    if (b != 0) {
        if (velocity->x || velocity->y || velocity->z) FUN_0205c8cc(velocity, velocity);
        FUN_02092654(velocity, &DAT_0219fa4c);
    }
    position = V(actor, 0x38);
    dz = (int)(((long long)velocity->z * delta + 0x800) >> 12);
    dy = (int)(((long long)velocity->y * delta + 0x800) >> 12);
    dx = (int)(((long long)velocity->x * delta + 0x800) >> 12);
    position.x += dx;
    position.y += dy;
    position.z += dz;
    height = position.y;
    switch (I(self, 0x10)) {
    case 0:
        b = ((I(actor, 0xec) & 8) != 0);
        if (b != 0) {
            vertical = velocity->y;
            b = (vertical < DAT_020fc988);
            if (b != 0) {
                FUN_020bc658(&absolute, &vertical);
                FUN_020bc610(&time, &height, &absolute);
                b = (time <= DAT_0219fa38[2]);
                if (b != 0) {
                    FUN_02040c0c(actor, 0, 8, 0x1000, 0);
                    I(self, 0x10) = 1;
                }
            }
        } else {
            b = (height <= DAT_0219ff4c[2]);
            if (b != 0) I(actor, 0x94) |= 0x10000;
        }
        break;
    case 1:
        b = (position.y < DAT_020fc988);
        if (b != 0) position.y = DAT_020fc988;
        if (FUN_02040d2c(actor, 0)) {
            I(actor, 0xec) &= ~0x10;
            I(actor, 0xec) &= ~0x20;
            FUN_overlay_20__0219ad1c(self);
            I(self, 0xc) = 1;
        }
        break;
    }
    V(actor, 0x38) = position;
}
