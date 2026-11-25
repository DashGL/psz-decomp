// flags: -O4,s
typedef struct {
    int x, y, z;
} Vec;

typedef struct {
    unsigned char pad0[0x38];
    Vec pos;
    unsigned short angle;
    unsigned char pad1[0xd4 - 0x46];
    int speed;
} Obj;

extern short DAT_020ed83c[];
extern int DAT_0219abe4;
extern int DAT_0219abd8;
extern int FUN_02036c34(void *);
extern void FUN_020bc5cc(int *, const int *, const int *);
extern void FUN_02035408(Vec *, int, int, int);
extern void FUN_02036384(void *, const Vec *);

void FUN_overlay_25__0219838c(Obj *self) {
    Vec target;
    int delta;
    int distance;
    int deceleration;
    int idx;
    long long dist64;
    long long x, z;
    Vec *pos;
    int lt;
    delta = FUN_02036c34(self);
    idx = ((int)self->angle >> 4) * 2;
    FUN_020bc5cc(&distance, &self->speed, &delta);
    dist64 = distance;
    pos = &self->pos;
    {
        int s = DAT_020ed83c[idx];
        x = (long long)s * dist64;
    }
    {
        int c = DAT_020ed83c[idx + 1];
        z = (long long)c * dist64;
    }
    FUN_02035408(&target,
        self->pos.x + (int)((x + 0x800LL) >> 12),
        pos->y,
        pos->z + (int)((z + 0x800LL) >> 12));
    FUN_02036384(self, &target);
    FUN_020bc5cc(&deceleration, &DAT_0219abe4, &delta);
    self->speed -= deceleration;
    if (*(volatile int *)&DAT_0219abd8 > self->speed) {
        lt = 1;
    } else {
        lt = 0;
    }
    if (lt != 0) {
        self->speed = *(volatile int *)&DAT_0219abd8;
    }
}
