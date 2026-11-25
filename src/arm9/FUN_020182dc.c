// FUN_020182dc @ 0x020182dc (0x168, arm) - ported from FUN_0201d840 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
typedef signed char s8;
typedef unsigned char u8;
typedef unsigned int u32;

struct Dirs {
    s8 dx;
    s8 dy;
};
extern int FUN_02016d80(void *, int, const void *, int);
extern void FUN_02018228(void *, int, int, void *, const void *, void **, struct Dirs);

struct Ctx1d840 {
    u32 f0;
    u8 **font;
    int f8;
    int fc;
};

void FUN_020182dc(struct Ctx1d840 *ctx, int x, int y, int w, void *a4, u32 flags, void *str, struct Dirs dirs) {
    int cx;
    int cy;
    int off_x;
    int off_y;
    void *cur;
    int step = ctx->fc + (s8)ctx->font[0][1];
    int step_x = step * (-dirs.dy);
    int step_y = step * dirs.dx;
    cur = str;
    if (cur == 0) {
        return;
    }
    off_x = 0;
    int flag800 = flags & 0x800;
    int flag400 = flags & 0x400;
    off_y = off_x;
    do {
        cx = x + off_x;
        cy = y + off_y;
        if (flag800 != 0) {
            int d = w - FUN_02016d80(ctx->font, ctx->f8, cur, 0);
            cx += d * dirs.dx;
            cy += d * dirs.dy;
        } else if (flag400 != 0) {
            int lw = FUN_02016d80(ctx->font, ctx->f8, cur, 0);
            int d = ((w + 1) / 2) - ((lw + 1) / 2);
            cx += d * dirs.dx;
            cy += d * dirs.dy;
        }
        FUN_02018228(ctx, cx, cy, a4, cur, &cur, dirs);
        off_x += step_x;
        off_y += step_y;
    } while (cur != 0);
}
