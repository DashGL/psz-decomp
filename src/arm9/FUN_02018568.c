// FUN_02018568 @ 0x02018568 (0xe0, arm) - ported from FUN_0201dacc [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
typedef signed char s8;
typedef unsigned char u8;
typedef unsigned int u32;
struct Dirs {
    s8 dx;
    s8 dy;
};
extern int FUN_02016e2c(void *, int, const void *);
extern void FUN_020182dc(void *, int, int, void *, void *, u32, const void *, struct Dirs);

struct Ctx {
    void *f0;
    void *font;
    u32 f8;
    int spacing;
};

void FUN_02018568(struct Ctx *ctx, int x, int y, void *a3, int width, void *a5, u32 flags, const void *str, struct Dirs dirs) {
    if (flags & 0x100) {
        int w = FUN_02016e2c(ctx->font, ctx->spacing, str);
        int diff = width - w;
        x += diff * (-dirs.dy);
        y += diff * dirs.dx;
    } else if (flags & 0x80) {
        int w = FUN_02016e2c(ctx->font, ctx->spacing, str);
        int diff = ((width + 1) / 2) - ((w + 1) / 2);
        x += diff * (-dirs.dy);
        y += diff * dirs.dx;
    }
    FUN_020182dc(ctx, x, y, a3, a5, flags, str, dirs);
}
