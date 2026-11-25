// flags: -O4,s
typedef struct { int x, y, z; } Vec3;
extern short DAT_020ed83c[];
extern void FUN_020bc5e8(int *, int *);
extern void FUN_02035408(Vec3 *, int, int, int);
extern void FUN_02040c0c(void *, int, int, int, int);
extern void FUN_02037924(void *);
extern int FUN_02036c34(void *);
extern int FUN_02040d2c(void *, int);

#define I(p,o) (*(int *)((char *)(p)+(o)))
#define P(p,o) (*(void **)((char *)(p)+(o)))
#define H(p,o) (*(unsigned short *)((char *)(p)+(o)))
#define V(p,o) (*(Vec3 *)((char *)(p)+(o)))

static inline int has_bit1(void *actor)
{
    return !!(I(actor, 0xec) & 1);
}

void FUN_overlay_20__0219e994(void *self)
{
    void *actor = P(self, 4);
    Vec3 offset, position;
    int horizontal, vertical;
    int scaled_time, delta;

    switch (I(self, 0xc)) {
    case 0:
        if (has_bit1(actor) != 0) {
            I(actor, 0xec) |= 0x20;
            I(self, 0xc) = 1;
        }
        break;
    case 1:
        H(self, 0x30) += (unsigned short)(0x8000 / I(self, 0x34));
        horizontal = -(DAT_020ed83c[((int)H(self, 0x30) >> 4) * 2 + 1] - 0x1000) / 2;
        vertical = DAT_020ed83c[((int)H(self, 0x30) >> 4) * 2];
        FUN_020bc5e8(&horizontal, &I(self, 0x3c));
        FUN_020bc5e8(&vertical, &I(self, 0x38));
        offset = V(self, 0x1c);
        offset.x = (int)(((long long)offset.x * horizontal + 0x800) >> 12);
        offset.y = (int)(((long long)offset.y * horizontal + 0x800) >> 12);
        offset.z = (int)(((long long)offset.z * horizontal + 0x800) >> 12);
        offset.y = vertical;
        FUN_02035408(&position, I(self, 0x10) + offset.x, I(self, 0x14) + offset.y, I(self, 0x18) + offset.z);
        if (position.y < 0) position.y = 0;
        V(actor, 0x38) = position;
        {
            unsigned short yaw = H(actor, 0x44);
            if (I(self, 0x2c)) yaw += H(self, 0x28);
            else yaw -= H(self, 0x28);
            H(actor, 0x44) = yaw;
        }
        delta = FUN_02036c34(actor);
        scaled_time = (int)(((long long)I(self, 0x34) * delta + 0x800) >> 12);
        if (I(self, 0x40) == 0 && H(self, 0x30) >= 0x8000 - (0x8000 / scaled_time) * 43) {
            FUN_02040c0c(actor, 0, 8, 0x1000, 10);
            I(self, 0x40) = 1;
        }
        if (H(self, 0x30) >= 0x8000) {
            I(actor, 0xec) &= ~0x20;
            I(self, 0xc) = 2;
        }
        break;
    case 2:
        if (FUN_02040d2c(actor, 0)) FUN_02037924(P(self, 8));
        break;
    }
}
