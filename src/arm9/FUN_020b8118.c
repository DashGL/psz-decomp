#pragma always_inline on
// flags: -O4,s
typedef unsigned int u32;
typedef int s32;
typedef unsigned long long u64;
typedef long long s64;
struct Mtx44 {
    s32 m[16];
};
struct Mtx43 {
    s32 m[12];
};
extern struct Mtx44 DAT_02105724;
extern struct Mtx43 DAT_02105768;
extern char *DAT_02108c84;
#pragma thumb off
extern void FUN_0205b960(const s32 *, const struct Mtx43 *, s32 *);
extern void FUN_0205c638(s32);
extern s64 FUN_0205c5dc(void);
extern void FUN_0205eacc(s32, s32, s32, s32, s32, s32, s32, struct Mtx44 *);
extern void FUN_02019968(u32 *, u32 *, u32 *, u32 *);
#pragma thumb reset

static inline s32 FX_Mul32x64c(s32 v32, s64 v64c) {
    return (s32)((v64c * v32 + 0x80000000LL) >> 32);
}

static inline s32 dot_col(const s32 *v, const volatile struct Mtx44 *mat, int k) {
    s32 r = (s32)((((s64)v[0] * mat->m[k] + (s64)v[1] * mat->m[4 + k] + (s64)v[2] * mat->m[8 + k]) >> 12));
    return r + mat->m[12 + k];
}
#define DOT(v, mat, k) dot_col(v, mat, k)

int FUN_020b8118(const s32 *input, s32 *out_x, s32 *out_y) {
    s32 point[3];
    struct Mtx44 matrix;
    u32 left, bottom, right, top;
    volatile struct Mtx44 *m = (volatile struct Mtx44 *)&DAT_02105724;
    s32 px, py, x, y;
    s64 reciprocal;
    int result;

    *(volatile u32 *)0x04000444 = 0;
    FUN_0205b960(input, &DAT_02105768, point);
    FUN_0205c638(DOT(point, m, 3));
    px = DOT(point, m, 0);
    py = DOT(point, m, 1);
    reciprocal = FUN_0205c5dc();
    x = (FX_Mul32x64c(px, reciprocal) + 4096) / 2;
    y = (FX_Mul32x64c(py, reciprocal) + 4096) / 2;
    if (x < 0 || y < 0 || x > 4096 || y > 4096) {
        result = -1;
    } else {
        char *scene = DAT_02108c84;
        s32 *camera = *(s32 **)(scene + 0x40 + *(u32 *)(scene + 0x64) * 4);
        FUN_0205eacc(camera[1], camera[2], camera[3], camera[4], camera[5], 4096, 1, &matrix);
        if (DOT(point, &matrix, 2) < 0) {
            return -1;
        }
        result = 0;
    }
    FUN_02019968(&left, &bottom, &right, &top);
    {
        s32 w = (s32)(right - left);
        s32 h = (s32)(top - bottom);
        *out_x = (s32)left + ((x * w + 2048) >> 12);
        *out_y = (s32)(191 - bottom) - ((y * h + 2048) >> 12);
    }
    *(volatile u32 *)0x04000448 = 1;
    return result;
}
