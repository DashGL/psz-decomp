//cpp
// flags: -O4,s
#pragma always_inline on
struct Vec3 {
    int v[3];
    inline int len_sq() const {
        long long zz = (long long)v[2] * v[2];
        long long xx = (long long)v[0] * v[0];
        long long yy = (long long)v[1] * v[1];
        return (int)((zz + 0x800) >> 12) + ((int)((xx + 0x800) >> 12) + (int)((yy + 0x800) >> 12));
    }
};
typedef struct { signed char a[2]; } Pair;
typedef struct { Pair *offsets; int count, range; } Pattern;
#define I(p,o) (*(int *)((char *)(p)+(o)))
#define P(p,o) (*(void **)((char *)(p)+(o)))
#define H(p,o) (*(unsigned short *)((char *)(p)+(o)))
extern "C" {
extern void *FUN_overlay_31__021995ec(void *);
extern void FUN_overlay_31__0219a944(void *, signed char *, signed char *, signed char *);
extern signed char FUN_overlay_31__0219a914(void *, signed char *, signed char *);
extern int FUN_overlay_31__0219a774(void *, signed char *);
extern Vec3 FUN_overlay_31__0219a844(void *, signed char *);
extern void FUN_020866b4(void *, Vec3 *);
extern Vec3 FUN_02036348(const Vec3 *, const Vec3 *);
extern void FUN_020bc658(int *, int *);
extern Pattern DAT_0219cd64[], DAT_0219cd40[];
extern Vec3 DAT_020fc958;
}

extern "C" int FUN_overlay_31__021999bc(void *self) {
    void *owner = P(self, 0x10), *grid = FUN_overlay_31__021995ec(self);
    Vec3 target;
    int distance;
    int absolute;
    signed char cell[6];
    Pattern *pattern;
    unsigned is_alt;
    int idx;
    cell[3] = -1;
    cell[2] = -1;
    cell[1] = *(signed char *)((char *)self + 0xdc);
    FUN_overlay_31__0219a944(grid, cell + 1, cell + 3, cell + 2);
    is_alt = ((I(self, 0xd4) & 1) != 0);
    idx = I(self, 0xd8);
    if (is_alt == 1) pattern = &DAT_0219cd64[idx]; else pattern = &DAT_0219cd40[idx];
    if (pattern) {
        unsigned int angle = (unsigned short)(H(self, 0x44) + 0x2000);
        int swap = 0, negate = 0;
        int count, best, i;
        if (angle < 0x4000) negate = 1;
        else if (angle < 0x8000) { swap = 1; negate = 1; }
        else if (angle >= 0xc000) swap = 1;
        best = 0x2710000;
        target = DAT_020fc958;
        FUN_020866b4(P(owner, 0x58), &target);
        count = pattern->count;
        for (i = 0; i < count; i++) {
            *(Pair *)(cell + 4) = pattern->offsets[i];
            if (swap == 1) {
                signed char t = cell[4];
                cell[4] = cell[5];
                cell[5] = t;
            }
            if (negate == 1) {
                cell[4] = -cell[4];
                cell[5] = -cell[5];
            }
            cell[4] = cell[3] + cell[4];
            cell[5] = cell[2] + cell[5];
            cell[0] = FUN_overlay_31__0219a914(grid, cell + 4, cell + 5);
            if (FUN_overlay_31__0219a774(grid, cell) == 1) {
                unsigned ok;
                distance = FUN_02036348(&target, &FUN_overlay_31__0219a844(grid, cell)).len_sq();
                distance -= pattern->range;
                FUN_020bc658(&absolute, &distance);
                distance = absolute;
                ok = (best > distance);
                if (ok != 0) {
                    best = *(volatile int *)&distance;
                    cell[1] = cell[0];
                }
            }
        }
    }
    return cell[1];
}
