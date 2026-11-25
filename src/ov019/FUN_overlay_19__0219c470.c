//cpp
// flags: -O4,s
#pragma block_assign on
#pragma always_inline on

struct Fixed {
    int v;
    inline int operator!=(const Fixed &o) const { if (v != o.v) return 1; return 0; }
};
struct Vec { int x, y, z; };
#define I(p, o) (*(int *)((char *)(p) + (o)))
#define P(p, o) (*(void **)((char *)(p) + (o)))
#define H(p, o) (*(unsigned short *)((char *)(p) + (o)))
#define V(p, o) (*(Vec *)((char *)(p) + (o)))

extern "C" {
extern unsigned char DAT_0219d494[];
extern int DAT_0219d498;
extern unsigned short DAT_0219cd7c[];
extern Fixed DAT_020fc988;
extern int DAT_0219d4ac;
extern short DAT_020ed83c[];
extern int DAT_0219d4a8;

extern void FUN_020bc5cc(int *, const int *, const int *);
extern void FUN_020bc5e8(int *, const int *);
extern void FUN_02036f7c(void *, Vec *);
extern void FUN_overlay_19__021981f4(void *, const Vec *);
extern void FUN_020bbfbc(Vec *, unsigned short);
extern void FUN_02036fa8(void *, const Vec *);
#pragma thumb off
extern void FUN_0205c8cc(Vec *, Vec *);
#pragma thumb reset
extern void FUN_02037128(void *, Vec *, const Vec *, const Vec *, int);
extern void FUN_overlay_19__02198438(void *, void *);
extern void FUN_02037924(void *);
extern void FUN_02040c0c(void *, int, int, int, int);
extern void FUN_02037254(void *, int, int, const Vec *, int);
extern int FUN_overlay_19__021982bc(void *);
extern int FUN_overlay_19__02198418(void *);
extern int FUN_02040d44(void *, int);
extern int FUN_02037208(void *, int);
extern int FUN_overlay_19__021988f8(void *);
extern void *FUN_020ba894(int);
extern void *FUN_overlay_19__0219a778(void *, const Vec *);
}

static inline int fx_ne(int a, int b) { if (a != b) return 1; return 0; }

extern "C" void FUN_overlay_19__0219c470(void *self) {
    void *owner = P(self, 4);
    void *child;
    Vec direction1, motion, direction2, pos1, zero, pos2, pos3, pos4, rotated, unit;
    int scale, height, amplitude, sine;
    int distance;

    if (I(self, 0x1c) > 0 && I(self, 0x1c) < 3) {
        I(self, 0x14) += I(DAT_0219d494, 0xc);
        I(self, 0x14) = (I(self, 0x14) <= 0) ? 0 : I(self, 0x14);
        I(self, 0x14) = (I(self, 0x14) >= 4096) ? 4096 : I(self, 0x14);
        FUN_020bc5cc(&scale, &DAT_0219d498, &I(self, 0x14));
        FUN_02036f7c(owner, &direction1);
        motion.x = (int)(((long long)direction1.x * scale + 2048) >> 12);
        motion.y = (int)(((long long)direction1.y * scale + 2048) >> 12);
        motion.z = (int)(((long long)direction1.z * scale + 2048) >> 12);
        FUN_overlay_19__021981f4(owner, &motion);
        {
            unsigned short ang = DAT_0219cd7c[I(self, 0x20)];
            rotated = motion;
            FUN_020bbfbc(&rotated, ang);
            FUN_02036fa8(owner, &rotated);
        }
    } else {
        FUN_02036f7c(owner, &direction2);
        pos1 = V(owner, 0x38);
        pos1.y = 0;
        distance = (int)(((long long)pos1.z * pos1.z + 2048) >> 12) +
                   ((int)(((long long)pos1.x * pos1.x + 2048) >> 12) +
                    (int)(((long long)pos1.y * pos1.y + 2048) >> 12));
        if (fx_ne(distance, DAT_020fc988.v)) {
            unit = pos1;
            if (unit.x != 0 || unit.y != 0 || unit.z != 0) {
                FUN_0205c8cc(&unit, &unit);
            }
            FUN_020bbfbc(&pos1, 0x8000);
            zero.x = 0;
            zero.y = 0;
            zero.z = 0;
            FUN_02037128(owner, &zero, &direction2, &pos1, 0x520);
            FUN_02036fa8(owner, &zero);
        }
    }
    sine = DAT_020ed83c[(H(self, 0x18) >> 4) * 2];
    FUN_020bc5cc(&amplitude, &sine, &DAT_0219d4ac);
    FUN_020bc5cc(&height, &amplitude, &I(self, 0x10));
    {
        int y = I(self, 0xc) + height;
        H(self, 0x18) += 0x500;
        pos2 = V(owner, 0x38);
        pos2.y = y;
        V(owner, 0x38) = pos2;
    }
    if (I(self, 0x1c) == 3) {
        FUN_020bc5e8(&I(self, 0x10), &DAT_0219d4a8);
    }
    if (FUN_overlay_19__021982bc(owner) == 1 && FUN_overlay_19__02198418(owner) == 1) {
        pos3 = V(owner, 0x38);
        child = FUN_020ba894(0x34);
        if (child) {
            child = FUN_overlay_19__0219a778(child, &pos3);
        }
        FUN_overlay_19__02198438(owner, child);
    }
    if (FUN_02040d44(owner, 0)) {
        I(self, 0x1c)++;
        if (I(self, 0x1c) >= 4) {
            FUN_02037924(P(self, 8));
        } else if (I(self, 0x1c) == 3) {
            FUN_02040c0c(owner, 0, 5, 4096, 0);
        } else if (I(self, 0x1c) == 1) {
            if (!FUN_02037208(owner, 4)) {
                FUN_02040c0c(owner, 0, 8, 4096, 0);
            } else {
                FUN_02040c0c(owner, 0, 4, 4096, 0);
            }
        } else {
            if (!FUN_02037208(owner, 2)) {
                FUN_02040c0c(owner, 0, 8, 4096, 0);
            } else {
                FUN_02040c0c(owner, 0, 4, 4096, 0);
            }
        }
    }
    if (FUN_overlay_19__021988f8(owner) == 1) {
        pos4 = V(owner, 0x38);
        FUN_02037254(owner, 0x1d, 12, &pos4, 1);
    }
}
