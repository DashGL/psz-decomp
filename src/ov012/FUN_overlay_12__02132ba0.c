// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xe0, exact bytes and relocation targets.
// flags: -O4,s
typedef struct {
    unsigned short a, b, c, pad;
    int x, y;
} Draw;

extern void FUN_02071d0c(Draw *), FUN_02090b44(Draw *), FUN_020c32b4(Draw *, int);
extern int FUN_overlay_12__02131ad0(int);

void FUN_overlay_12__02132ba0(int *self)
{
    Draw d;

    FUN_02071d0c(&d);
    FUN_02090b44(&d);
    if (*(int *)((char *)self + self[24] * 4012 + 0xfac + 0xb8) > 0) {
        int base_y = self[42] - 3;
        int base_x, glyph, alt_glyph, handle;

        switch (self[19]) {
        case 0:
            base_x = self[41] - 1;
            glyph = 4;
            alt_glyph = 5;
            handle = FUN_overlay_12__02131ad0(2);
            break;
        case 1:
            base_x = self[41] - 2;
            glyph = 0;
            alt_glyph = 1;
            handle = FUN_overlay_12__02131ad0(5);
            break;
        default:
            return;
        }
        if (!self[9]) {
            glyph = alt_glyph;
        }
        d.a = glyph;
        d.x = base_x << 12;
        d.y = (base_y + ((self[27] - self[28]) << 4)) << 12;
        FUN_020c32b4(&d, handle);
    }
    if (self[20]) {
        int alt_glyph, glyph, handle;

        switch (self[19]) {
        case 0:
            glyph = 2;
            alt_glyph = 3;
            handle = FUN_overlay_12__02131ad0(2);
            break;
        case 1:
            glyph = 2;
            alt_glyph = 3;
            handle = FUN_overlay_12__02131ad0(5);
            break;
        default:
            return;
        }
        if (!self[9]) {
            glyph = alt_glyph;
        }
        d.a = glyph;
        d.x = ((self[24] << 5) + 0x41) << 12;
        d.y = 0x34000;
        FUN_020c32b4(&d, handle);
    }
}
