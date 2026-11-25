// FUN_02016ea0 @ 0x02016ea0 (0x94, arm) - ported from FUN_0201c774 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
typedef signed char s8;
typedef unsigned int u32;
extern int FUN_02016d80(void *, int, const void *, const void **);

struct Pair {
    int w;
    int h;
};
struct Font {
    s8 *info;
};

struct Pair FUN_02016ea0(struct Font *font, int spacing, int line_gap, const void *str) {
    struct Pair res = {0, 0};
    int lines = 1;
    while (str != 0) {
        int w = FUN_02016d80(font, spacing, str, &str);
        if (w > res.w) {
            res.w = w;
        }
        lines++;
    }
    res.h = (lines - 1) * (line_gap + font->info[1]) - line_gap;
    return res;
}
