// flags: -O4,s
typedef struct {
    int x;
    int y;
    int z;
} Vec3;

enum { E0 = 0, E1 = 1 };

extern const short DAT_020ed83c[];

extern int FUN_02036c34(void *owner);
extern void FUN_02035408(Vec3 *out_vec, int x, int y, int z);
extern void FUN_02036384(void *owner, const Vec3 *pos);
extern int FUN_02040d2c(void *owner, int idx);
extern void FUN_02040c0c(void *owner, int a1, int anim_id, int speed, int a4);
extern void FUN_02037924(void *state);

static inline int fx_mul(int a, int b) {
    return (int)(((long long)a * b + 0x800LL) >> 12);
}

void FUN_overlay_25__021996d4(char *self) {
    char *owner = *(char **)(self + 4);

    if (*(int *)(self + 0xc) == 1) {
        int idx = ((int)*(unsigned short *)(owner + 0x44) >> 4) << 1;
        int step = fx_mul(FUN_02036c34(owner), 0x19a);
        Vec3 delta;
        Vec3 next_pos;
        const Vec3 *pos;

        FUN_02035408(&delta, fx_mul(DAT_020ed83c[idx], step), 0, fx_mul(DAT_020ed83c[idx + 1], step));
        pos = (const Vec3 *)(owner + 0x38);
        FUN_02035408(&next_pos, pos->x + delta.x, pos->y + delta.y, pos->z + delta.z);
        FUN_02036384(owner, &next_pos);
    }

    if (FUN_02040d2c(owner, 0) != 0) {
        if (*(int *)(self + 0xc) == 0) {
            *(unsigned short *)(owner + 0x44) += 0x8000;
            FUN_02040c0c(owner, 0, 2, 0x1000, 0);
            if (((*(int *)(owner + 0xd4) == 1) ? E1 : E0) != 0) {
                FUN_02037924(*(void **)(self + 8));
            } else {
                *(int *)(self + 0xc) = 1;
                *(int *)(self + 0x10) = 0;
            }
        }
    } else if (*(int *)(self + 0xc) == 1 && *(int *)(self + 0x10) > 0x3c000) {
        FUN_02037924(*(void **)(self + 8));
    }

    *(int *)(self + 0x10) += FUN_02036c34(owner);
}
