// flags: -O4,s
typedef struct { int x, y, z; } Vec;
typedef struct { Vec direction, target; } Frame;
extern int FUN_020866b4(int, void *);
extern void *FUN_02035408(void *, int, int, int);
#pragma thumb off
extern void FUN_0205c8cc(void *, void *);
extern unsigned short FUN_0205cc08(int);
#pragma thumb on
extern void FUN_02040c0c(void *, int, int, int, int);

void FUN_overlay_20__0219eb84(int *self) {
    Frame f;
    int *state = (int *)self[2], *owner = (int *)self[1];
    int forward = 1;
    if (FUN_020866b4(state[13], &f.target)) {
        Vec *pos = (Vec *)(owner + 14);
        unsigned short angle;
        FUN_02035408(&f.direction, f.target.x - pos->x, f.target.y - pos->y, f.target.z - pos->z);
        f.direction.y = 0;
        if (f.direction.x || f.direction.y || f.direction.z) FUN_0205c8cc(&f.direction, &f.direction);
        angle = FUN_0205cc08(f.direction.z);
        if (f.direction.x < 0) angle = (unsigned short)(65536 - angle);
        if ((unsigned short)(angle - *(unsigned short *)(owner + 17)) >= 0x8000u) forward = 0;
    }
    FUN_02040c0c(owner, 0, forward ? 15 : 14, 4096, 10);
    self[3] = 0;
    self[4] = 0;
}
