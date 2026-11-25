//cpp
// flags: -O4,s
typedef struct { int x, y, z; } Vec;

extern "C" {
extern int DAT_021a12d4[];
extern int FUN_020866b4(int, Vec *);
extern void FUN_02036348(Vec *, const Vec *, const Vec *);

static inline int fx_mul(int a, int b) {
    return (int)(((long long)a * b + 0x800) >> 12);
}

int FUN_overlay_21__0219a7e4(char *self) {
    int i;
    for (i = 0; i < 4; i++) {
        if (*(unsigned *)(self + 0x90 + 4 * i) > 10) {
            Vec player;
            if (FUN_020866b4(i, &player)) {
                Vec origin = *(Vec *)(*(char **)(self + 4) + 0xfc);
                Vec diff;
                int sum;
                FUN_02036348(&diff, &player, &origin);
                sum = fx_mul(diff.x, diff.x) + fx_mul(diff.y, diff.y) + fx_mul(diff.z, diff.z);
                sum = (int)(volatile int)sum;
                if ((DAT_021a12d4[1] > sum) ? 1 : 0) {
                    return 1;
                }
            }
        }
    }
    return 0;
}
}
