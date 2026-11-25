// flags: -O4,s
typedef unsigned int u32;
typedef struct { u32 x, y; } Vec2;
extern void FUN_020bf618(u32 *, const u32 *, const u32 *);
extern int FUN_020bf62c(const u32 *, const u32 *);
extern int FUN_020c1334(int);
extern u32 DAT_020f5be4[];

int FUN_020c024c(u32 *a, u32 *b, u32 *out) {
    u32 delta[2];
    u32 *axes[4];
    u32 extents[4];
    u32 *other[4];
    int i;
    FUN_020bf618(delta, a, b);
    axes[0] = a + 2;
    axes[1] = a + 4;
    axes[2] = b + 2;
    axes[3] = b + 4;
    other[0] = b;
    other[1] = b;
    other[2] = a;
    other[3] = a;
    extents[0] = a[6];
    extents[1] = a[7];
    extents[2] = b[6];
    extents[3] = b[7];
    for (i = 0; i < 4; i++) {
        u32 *axis = axes[i], *shape = other[i];
        int distance = FUN_020c1334(FUN_020bf62c(delta, axis));
        u32 p = (u32)(((long long)(int)shape[7] * FUN_020c1334(FUN_020bf62c(axis, shape + 4)) + 2048) >> 12);
        if ((int)(extents[i] + (((u32)(((long long)(int)shape[6] * FUN_020c1334(FUN_020bf62c(axis, shape + 2)) + 2048) >> 12)) - (-p))) < distance)
            return 0;
    }
    if (!out)
        return 1;
    *(Vec2 *)out = *(Vec2 *)(DAT_020f5be4 + 6);
    return 1;
}
