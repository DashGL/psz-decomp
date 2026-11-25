//cpp
// flags: -O4,s -inline auto
#pragma always_inline on
struct Vec3 {
    union {
        struct { int x, y, z; };
        int w[3];
    };
    inline int len_sq() const {
        long long zz = (long long)z * z;
        long long xx = (long long)x * x;
        long long yy = (long long)y * y;
        return (int)((zz + 0x800) >> 12) + ((int)((xx + 0x800) >> 12) + (int)((yy + 0x800) >> 12));
    }
};
#define I(p,o) (*(int *)((char *)(p)+(o)))
#define P(p,o) (*(void **)((char *)(p)+(o)))
#define H(p,o) (*(unsigned short *)((char *)(p)+(o)))
#define V(p,o) (*(Vec3 *)((char *)(p)+(o)))

extern "C" {
extern short DAT_020ed83c[];
extern int DAT_0219d804;
extern int FUN_overlay_23__0219933c(void *, Vec3 *);
extern void FUN_overlay_23__02198e38(void *, Vec3 *, int);
extern int FUN_02036c34(void *);
extern void FUN_02035408(Vec3 *, int, int, int);
extern void FUN_02036384(void *, Vec3 *);
extern int FUN_02040d2c(void *, int);
extern void FUN_02040c0c(void *, int, int, int, int);
extern void FUN_02037924(void *);
void FUN_overlay_23__021997b4(void *self);
}

static inline int fx_mul(int a, int b) {
    return (int)(((long long)a * b + 0x800) >> 12);
}

void FUN_overlay_23__021997b4(void *self) {
    void *owner = P(self, 8);
    void *actor = P(self, 4);
    int finish = 0;
    Vec3 target, current, velocity, difference, position;
    if (FUN_overlay_23__0219933c(owner, &target)) {
        FUN_overlay_23__02198e38(actor, &target, 0x5000);
        int index = (H(actor, 0x44) >> 4) * 2;
        int speed = fx_mul(FUN_02036c34(actor), 0x19a);
        FUN_02035408(&velocity, fx_mul(DAT_020ed83c[index], speed), 0, fx_mul(DAT_020ed83c[index + 1], speed));
        Vec3 *pos_p = (Vec3 *)((char *)actor + 0x38);
        FUN_02035408(&position, I(actor, 0x38) + velocity.x, pos_p->y + velocity.y, pos_p->z + velocity.z);
        FUN_02036384(actor, &position);
        current = V(actor, 0x38);
        FUN_02035408(&difference, ((volatile Vec3 *)&target)->x - current.x, ((volatile Vec3 *)&target)->y - current.y, ((volatile Vec3 *)&target)->z - current.z);
        int distance = difference.len_sq();
        if (FUN_02040d2c(actor, 0)) {
            if (I(self, 0xc) > 0x3c000 || ((distance < DAT_0219d804) ? 1 : 0)) {
                finish = 1;
            } else {
                FUN_02040c0c(actor, 0, 3, 0x1000, 0);
            }
        }
        I(self, 0xc) += FUN_02036c34(actor);
    } else {
        finish = 1;
    }
    if (finish) {
        FUN_02037924(owner);
    }
}
