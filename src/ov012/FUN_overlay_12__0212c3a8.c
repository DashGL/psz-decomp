// flags: -O4,s
typedef struct { short glyph, a, b, pad; int x, y; } Draw;
typedef struct { int a, b, c, d, e, f; } Row;
extern const Row DAT_overlay_12__0213bf68[];
extern void FUN_overlay_12__0212c978(unsigned, unsigned, unsigned, unsigned), FUN_overlay_12__0212c920(const void *, int, int, int), FUN_overlay_12__0212c8f8(const char *, int, int, int), FUN_020c32b4(void *, int);
extern const char *FUN_overlay_12__021362c4(int, int);
extern int FUN_overlay_12__02129c70(const char *), FUN_overlay_12__02131ad0(int);

void FUN_overlay_12__0212c3a8(int *self)
{
    int handle;
    Draw draw;
    const Row *table = DAT_overlay_12__0213bf68;
    if (!self[17]) {
        int x, y, width, height, i, maxwidth, ch;
        const char *first, *second;
        self[17] = 1;
        FUN_overlay_12__0212c978(40, 53, 177, 89);
        x = 44; y = 63;
        if (table[self[20]].a) {
            width = 0; height = 10; maxwidth = 0;
            for (i = 0; i < 256; i++) {
                ch = ((signed char *)self)[96 + i];
                if (ch == 10) { if (maxwidth < width) maxwidth = width; width = 0; height += 10; }
                else if (ch == 0) { if (maxwidth < width) maxwidth = width; width = maxwidth; break; }
                else width += 5;
            }
            x = 126 - width / 2; y = 98 - height / 2;
            if (table[self[20]].e) y -= 5;
            else if (table[self[20]].f) y -= 10;
        }
        if (self[18]) FUN_overlay_12__0212c920((char *)self + 352, x, y, 2);
        FUN_overlay_12__0212c8f8((char *)self + 96, x, y, 2);
        if (table[self[20]].e) {
            first = FUN_overlay_12__021362c4(2, 2);
            width = FUN_overlay_12__02129c70(first);
            FUN_overlay_12__0212c8f8(first, 126 - width / 2, 122, 2);
        } else if (table[self[20]].f) {
            first = FUN_overlay_12__021362c4(2, 0);
            second = FUN_overlay_12__021362c4(2, 1);
            width = FUN_overlay_12__02129c70(first);
            FUN_overlay_12__0212c8f8(first, 126 - width / 2, 110, 2);
            width = FUN_overlay_12__02129c70(second);
            FUN_overlay_12__0212c8f8(second, 126 - width / 2, 122, 2);
        }
    }
    handle = FUN_overlay_12__02131ad0(2);
    draw.glyph = 0; draw.a = 0; draw.b = 0; draw.glyph = 0; draw.a = 0; draw.b = 0; draw.y = 0; draw.x = 0;
    draw.x = 41 << 12; draw.glyph = 7;
    if (table[self[20]].e) {
        draw.y = 121 << 12;
        FUN_020c32b4(&draw, handle);
    } else if (table[self[20]].f) {
        draw.y = ((unsigned)self[16] * 12u + 109u) << 12;
        FUN_020c32b4(&draw, handle);
    }
    draw.x = 40 << 12; draw.y = 49 << 12; draw.glyph = 14;
    FUN_020c32b4(&draw, handle);
}
