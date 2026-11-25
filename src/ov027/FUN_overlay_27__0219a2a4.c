//cpp
// flags: -O4,s
static inline int FX_Mul(int a, int b) { return (int)(((long long)a * (long long)b + 0x800LL) >> 12); }

struct Vec {
    union { struct { int x, y, z; }; int w[3]; };
    inline Vec() {}
    inline Vec(int a, int b, int c) { set(a, b, c); }
    inline void set(int a, int b, int c) { x = a; y = b; z = c; }
};
struct Actor { unsigned char pad0[0x38]; Vec pos; unsigned short yaw; };

extern "C" {
extern short DAT_020ed83c[];
extern int DAT_0219c534;
extern int DAT_0219c524[3];
extern unsigned short FUN_overlay_27__02199ae4(void *, const Vec *);
extern Vec FUN_02036348(const Vec &, const Vec &);
extern int FUN_02036c34(void *);
extern void FUN_020bc5cc(int *, const int *, const int *);
extern Vec FUN_02035408(int, int, int);
extern void FUN_02036384(void *, const Vec &);
extern int FUN_overlay_27__0219a1f0(void *, Vec *);
extern void FUN_02037924(void *);
extern unsigned short FUN_overlay_27__02199a94(void *, const Vec *);
#pragma thumb off
extern int FUN_0205c86c(const Vec *);
#pragma thumb on
}
extern "C" void FUN_overlay_27__0219a2a4(unsigned char *self) {
    if (!*(int *)(self + 0x1c)) return;
    const Vec *ap;
    Actor *actor = *(Actor **)(self + 4);
    unsigned char *state = *(unsigned char **)(self + 8);
    unsigned short gap = FUN_overlay_27__02199ae4(actor, (const Vec *)(self + 0x10));
    Vec diff1 = FUN_02036348(*(const Vec *)(self + 0x10), actor->pos);
    int idx = (actor->yaw >> 4) * 2;
    int delta = FUN_02036c34(actor);
    int step;
    FUN_020bc5cc(&step, &DAT_0219c534, &delta);
    int dx = FX_Mul(DAT_020ed83c[idx], step);
    int dz = FX_Mul(DAT_020ed83c[idx + 1], step);
    ap = &actor->pos;
    FUN_02036384(actor, FUN_02035408(ap->x + dx, ap->y, ap->z + dz));
    if ((gap < 0x2000 && (((int)(((long long)diff1.x * (long long)diff1.x + 0x800LL) >> 12) + (int)(((long long)diff1.y * (long long)diff1.y + 0x800LL) >> 12) + (int)(((long long)diff1.z * (long long)diff1.z + 0x800LL) >> 12) < DAT_0219c524[2]) ? 1 : 0)) || *(int *)(self + 0x0c) > 0x3c000) {
        Vec target2;
        if (!FUN_overlay_27__0219a1f0(state, &target2)) {
            *(int *)(state + 0x54) = 1;
            FUN_02037924(*(void **)(self + 8));
        }
        Vec origin2 = actor->pos;
        Vec diff2 = FUN_02036348(target2, origin2);
        unsigned short angle2 = FUN_overlay_27__02199a94(actor, &diff2);
        if (angle2 < 0x2000 && ((FUN_0205c86c(&diff2) < DAT_0219c524[1]) ? 1 : 0)) {
            *(int *)(state + 0x54) = 3;
            FUN_02037924(*(void **)(self + 8));
        } else if (angle2 < 0x2000 && ((FUN_0205c86c(&diff2) < DAT_0219c524[0]) ? 1 : 0)) {
            *(int *)(state + 0x54) = 4;
            FUN_02037924(*(void **)(self + 8));
        } else {
            *(int *)(state + 0x54) = 1;
            FUN_02037924(*(void **)(self + 8));
        }
    }
    *(int *)(self + 0x0c) += FUN_02036c34(actor);
}
