// flags: -O4,s
typedef unsigned short u16;
typedef unsigned int u32;
typedef long long s64;

typedef struct {
    int x, y, z;
} Vec3;

typedef struct {
    int m[9];
    int tx, ty, tz;
} Mtx43;

extern const short DAT_020ed83c[];
extern int FUN_02040d2c(void *, int);
extern void FUN_02040c0c(void *, int, int, int, int);
extern void *FUN_02036c88(void *, int);
extern void FUN_0204260c(void *, int, Mtx43 *, int);
extern void FUN_02035408(Vec3 *, int, int, int);
extern void FUN_overlay_20__0219c23c(void *, Vec3 *, u16, int, int);
extern void *FUN_02074e9c(void *, int, int, int);
extern char *FUN_02075040(void *, void *);
extern int FUN_02036c34(void *);
extern int FUN_0205c520(int, int);
extern void FUN_02037924(void *);
extern void FUN_02036384(void *, Vec3 *);

void FUN_overlay_20__0219cf80(char *self) {
    char *actor = *(char **)(self + 4);
    switch (*(int *)(self + 0xc)) {
    case 0:
        if (FUN_02040d2c(actor, 0) != 0) {
            FUN_02040c0c(actor, 0, 0xb, 0x1000, 0);
            *(int *)(self + 0xc) = 1;
        }
        break;
    case 1:
        *(int *)(self + 0x10) -= 1;
        if (*(int *)(self + 0x10) < 0) {
            FUN_02040c0c(actor, 0, 0xc, 0x1000, 0);
            *(int *)(self + 0xc) = 2;
        }
        break;
    case 2: {
        unsigned b = (*(u32 *)(actor + 0xec) & 2) != 0;
        if (b != 0) {
            *(int *)(self + 0x18) -= 1;
            if (*(int *)(self + 0x18) < 0) {
                Mtx43 mtx;
                Vec3 pos;
                u16 yaw = *(u16 *)(actor + 0x44);
                int p24;
                char *fx;
                FUN_0204260c(FUN_02036c88(actor, 0), 0xb, &mtx, 0);
                FUN_02035408(&pos, mtx.tx, mtx.ty, mtx.tz);
                p24 = *(int *)(self + 0x24);
                if (*(int *)(self + 0x1c) != 0) {
                    FUN_overlay_20__0219c23c(actor, &pos, yaw, p24, 1);
                    *(int *)(self + 0x20) = 4;
                } else {
                    FUN_overlay_20__0219c23c(actor, &pos, yaw, p24, 0);
                    FUN_overlay_20__0219c23c(actor, &pos, (u16)(yaw + 0xe38), p24, 0);
                    FUN_overlay_20__0219c23c(actor, &pos, (u16)(yaw - 0xe38), p24, 0);
                }
                fx = FUN_02075040(actor, FUN_02074e9c(actor, 5, 0, 0));
                if (fx != 0) {
                    *(Vec3 *)(fx + 0x5c) = pos;
                    *(u32 *)(fx + 0xe4) |= 0x10000;
                }
                *(int *)(self + 0x14) -= 1;
                if (*(int *)(self + 0x14) <= 0) {
                    *(int *)(self + 0xc) = 3;
                } else {
                    *(int *)(self + 0x18) = FUN_0205c520(0x8000, FUN_02036c34(actor)) >> 12;
                }
            }
        }
        break;
    }
    case 3:
        if (FUN_02040d2c(actor, 0) != 0) {
            FUN_02037924(*(void **)(self + 8));
        }
        break;
    }
    if (*(int *)(self + 0x20) > 0) {
        Vec3 next;
        Vec3 *cur;
        int idx;
        s64 step;
        int s, c;
        idx = (*(u16 *)(actor + 0x44) >> 4) << 1;
        step = (*(int *)(self + 0x20) * 0x266) / 4;
        cur = (Vec3 *)(actor + 0x38);
        s = -DAT_020ed83c[idx];
        c = -DAT_020ed83c[idx + 1];
        FUN_02035408(&next, cur->x + (int)(((s64)s * step + 0x800) >> 12), cur->y, cur->z + (int)(((s64)c * step + 0x800) >> 12));
        FUN_02036384(actor, &next);
        *(int *)(self + 0x20) -= 1;
    }
}
