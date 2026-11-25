// FUN_02018444 @ 0x02018444 (0x124, arm) - ported from FUN_0201d9a8 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
typedef signed char s8;
typedef unsigned char u8;
typedef unsigned int u32;

struct Dirs {
    s8 dx;
    s8 dy;
};
struct Size2 {
    int w;
    int h;
};
extern struct Size2 FUN_02016ea0(void *, int, int, const void *);
extern void FUN_020182dc(void *, int, int, int, void *, u32, const void *, struct Dirs);

struct Ctx1d9a8 {
    u32 f0;
    void *font;
    int f8;
    int fc;
};

static inline struct Size2 get_size(struct Ctx1d9a8 *ctx, const void *str) {
    struct Size2 res = FUN_02016ea0(ctx->font, ctx->f8, ctx->fc, str);
    return res;
}

void FUN_02018444(struct Ctx1d9a8 *ctx, int x, int y, void *a3, u32 flags, const void *str, struct Dirs dirs) {
    struct Size2 sz = get_size(ctx, str);
    if (flags & 0x10) {
        int d = -(sz.w + 1) / 2;
        x += d * dirs.dx;
        y += d * dirs.dy;
    } else if (flags & 0x20) {
        int d = -sz.w;
        x += d * dirs.dx;
        y += d * dirs.dy;
    }
    if (flags & 2) {
        int d = -(sz.h + 1) / 2;
        x += d * (-dirs.dy);
        y += d * dirs.dx;
    } else if (flags & 4) {
        int d = -sz.h;
        x += d * (-dirs.dy);
        y += d * dirs.dx;
    }
    FUN_020182dc(ctx, x, y, sz.w, a3, flags, str, dirs);
}
