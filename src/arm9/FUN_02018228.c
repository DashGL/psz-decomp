// FUN_02018228 @ 0x02018228 (0xb4, arm) - ported from FUN_0201d78c [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
typedef signed char s8;
typedef unsigned short u16;
typedef unsigned int u32;
extern int FUN_02017bf0(void *, void *, int, int, void *, int);

struct Font {
    u32 f0;
    int (*get_char)(const void **);
};
struct Ctx {
    void *f0;
    struct Font *font;
    int spacing;
};
struct Dirs {
    s8 dx;
    s8 dy;
};

void FUN_02018228(struct Ctx *ctx, int x, int y, void *a3, const void *str, const void **out_str, struct Dirs dirs) {
    int sp = ctx->spacing;
    struct Font *font = ctx->font;
    const void *cur = str;
    int (*get_ch)(const void **) = font->get_char;
    int ch = get_ch(&cur);
    while (ch != 0) {
        if (ch == 0xa) {
            break;
        }
        int adv = FUN_02017bf0(ctx->f0, font, x, y, a3, ch) + sp;
        x += adv * dirs.dx;
        y += adv * dirs.dy;
        ch = get_ch(&cur);
    }
    if (out_str != 0) {
        *out_str = (ch == 0xa) ? cur : 0;
    }
}
