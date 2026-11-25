// flags: -O4,s
typedef struct { short glyph, a, b, pad; int x, y; } Draw;
enum { E0 = 0, E1 = 1 };
extern char DAT_0211a51c[];
extern void FUN_overlay_12__0212c9a0(void), FUN_overlay_12__0212c8f8(const char *, int, int, int), FUN_overlay_12__0212c920(const void *, int, int, int), FUN_020c32b4(void *, int);
extern int FUN_overlay_12__0212a7d8(void), FUN_overlay_12__02129c70(const void *), FUN_02084cc0(void *), FUN_overlay_12__02131ad0(int);
extern const char *FUN_overlay_12__0212a7f8(unsigned);
extern const unsigned char *FUN_overlay_12__0212a380(int);
#pragma thumb off
extern void *FUN_020014d4(void *, const void *, unsigned);
#pragma thumb on

void FUN_overlay_12__02129acc(int *self)
{
    signed char copy[256];
    Draw draw;
    const char *text;
    const unsigned char *record;
    int i, width, height, maxwidth, ch, y, handle;
    const unsigned short *wide;
    if (self[16] != 1) return;
    if (self[25]) { FUN_overlay_12__0212c9a0(); return; }
    if (self[24] && FUN_overlay_12__0212a7d8()) {
        FUN_overlay_12__0212c9a0();
        self[24] = 0;
        if (self[18] == 0) {
            text = FUN_overlay_12__0212a7f8(20);
            if (text) {
                FUN_020014d4(copy, text, 256);
                width = 0; height = 10; maxwidth = 0;
                for (i = 0; i < 256; i++) {
                    ch = copy[i];
                    if (ch == 10) { if (maxwidth < width) maxwidth = width; width = 0; height += 10; }
                    else if (ch == 0) { if (maxwidth < width) maxwidth = width; width = maxwidth; break; }
                    else width += 5;
                }
                FUN_overlay_12__0212c8f8(text, 126 - width / 2, 98 - height / 2, 2);
            }
        } else {
            text = FUN_overlay_12__0212a7f8(21);
            width = FUN_overlay_12__02129c70(text);
            FUN_overlay_12__0212c8f8(text, 126 - width / 2, 60, 2);
            y = 86;
            for (i = 0; i < 4; i++) if (self[19 + i] && i != FUN_02084cc0(DAT_0211a51c)) {
                record = FUN_overlay_12__0212a380(i);
                if (record) {
                    if (((*(const signed char *)record == 1) ? E1 : E0) != 0) width = FUN_overlay_12__02129c70(record + 2);
                    else {
                        int n;
                        wide = (const unsigned short *)((unsigned)record + 2u);
                        width = 0;
                        if (wide) for (n = 0; n < 256; n++, wide++) { if (!*wide) break; width += 10; }
                    }
                    FUN_overlay_12__0212c920(record, 126 - width / 2, y, 2);
                    y += 12;
                }
            }
        }
    }
    handle = FUN_overlay_12__02131ad0(2);
    draw.glyph = 0; draw.a = 0; draw.b = 0; draw.glyph = 0; draw.a = 0; draw.b = 0; draw.y = 0; draw.x = 0;
    if (self[18] > 0) {
        draw.x = 41 << 12;
        draw.y = ((unsigned)self[17] * 12u + 85u) << 12;
        draw.glyph = 7;
        FUN_020c32b4(&draw, handle);
    }
    draw.x = 40 << 12;
    draw.y = 49 << 12;
    draw.glyph = 14;
    FUN_020c32b4(&draw, handle);
}
