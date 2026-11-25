//cpp
// flags: -O4,s
struct Vec { int v[3]; };
extern "C" {
extern int DAT_0219ff44;
extern int DAT_0219f940;
extern int DAT_020fc988;
extern void FUN_020bc658(int *, const int *);
extern int FUN_02036c34(void *);
extern void FUN_020bc5cc(int *, const int *, const int *);
extern void FUN_overlay_20__02198f90(void *);
extern void FUN_02091c20(void *, Vec *, const int *);
extern void FUN_02036348(Vec *, const Vec *, const Vec *);
extern void FUN_02036368(Vec *);
extern void FUN_02092654(Vec *, const int *);
extern void FUN_02036848(Vec *, const Vec *);
#pragma thumb off
extern int FUN_0205c86c(const Vec *);
#pragma thumb on
}

static inline Vec sub_vec(const Vec &a, const Vec &b) {
    Vec r;
    FUN_02036348(&r, &a, &b);
    return r;
}

static inline void norm_byval(Vec v) {
    FUN_02036368(&v);
}

extern "C" void FUN_overlay_20__02198898(char *self) {
    Vec pt, v1, v3, vel, v4, v2;
    int diff, dt, step_dist, turn_rate, abs_diff;
    char *state = *(char **)(self + 0xd4);
    int *cur, *tgt;
    if (*(void **)(state + 4) == 0) return;
    cur = (int *)(state + 0x28);
    tgt = (int *)(state + 0x24);
    if ((*cur != *tgt ? 1 : 0) != 0) {
        if (!(DAT_0219ff44 & 1)) {
            DAT_0219f940 = 0x19a;
            DAT_0219ff44 |= 1;
        }
        diff = *tgt - *cur;
        FUN_020bc658(&abs_diff, &diff);
        if ((abs_diff < DAT_0219f940 ? 1 : 0) != 0) {
            *cur = *tgt;
        } else {
            if ((diff >= DAT_020fc988 ? 1 : 0) != 0) {
                *cur += DAT_0219f940;
            } else {
                *cur -= DAT_0219f940;
            }
        }
    }
    dt = FUN_02036c34(self);
    FUN_020bc5cc(&step_dist, (int *)(*(char **)(self + 0xd4) + 0x28), &dt);
    FUN_020bc5cc(&turn_rate, (int *)(*(char **)(self + 0xd4) + 0x2c), &dt);
    state = *(char **)(self + 0xd4);
    {
        int limit = *(int *)(*(char **)(state + 4) + 0x28);
        *(int *)(state + 8) += step_dist;
        if ((*(int *)(state + 8) >= limit ? 1 : 0) != 0) {
            FUN_overlay_20__02198f90(self);
        } else {
            state = *(char **)(self + 0xd4);
            FUN_02091c20(*(void **)(state + 4), &pt, (int *)(state + 8));
            FUN_02036348(&v1, &pt, (Vec *)(state + 0x34));
            v2 = v1;
            v3 = v2;
            v3 = v2;
            v4 = v3;
            FUN_02036368(&v4);
            FUN_02092654(&v3, &turn_rate);
            vel = *(Vec *)(*(char **)(self + 0xd4) + 0xc);
            FUN_02036848(&vel, &v3);
            if ((FUN_0205c86c(&vel) > step_dist ? 1 : 0) != 0) {
                FUN_02036368(&vel);
                FUN_02092654(&vel, &step_dist);
            }
            *(Vec *)(*(char **)(self + 0xd4) + 0xc) = vel;
        }
    }
}
