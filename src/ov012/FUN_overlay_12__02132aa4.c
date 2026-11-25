// flags: -O4,s
typedef struct { unsigned short glyph, b, c, pad; unsigned x, y; } Draw;
extern int FUN_overlay_12__02131ad0(int);
extern void FUN_02071d0c(Draw *);
extern void FUN_02090b44(Draw *);
extern void FUN_020c32b4(Draw *, int);
#pragma thumb off
extern int FUN_0200a3a0(int, int);
#pragma thumb reset
void FUN_overlay_12__02132aa4(int *self) {
    int glyph;
    unsigned x;
    int handle, count, visible, position, remaining, step;
    Draw draw;
    switch (self[19]) {
    case 0:
        x = 0xe2000;
        glyph = 16;
        handle = FUN_overlay_12__02131ad0(2);
        break;
    case 1:
        x = 0xf7000;
        glyph = 4;
        handle = FUN_overlay_12__02131ad0(5);
        break;
    default:
        return;
    }
    count = *(int *)((char *)self + (unsigned)self[24] * 4012 + 4196);
    if (count <= 5)
        return;
    visible = self[26];
    position = self[28];
    FUN_02071d0c(&draw);
    FUN_02090b44(&draw);
    draw.x = x;
    remaining = (int)((unsigned)count - (unsigned)visible);
    step = FUN_0200a3a0(0x42000, remaining);
    draw.glyph = 78;
    if (remaining <= position)
        draw.y = 0x83000;
    else
        draw.y = (unsigned)step * (unsigned)position + 0x41000;
    FUN_020c32b4(&draw, FUN_overlay_12__02131ad0(0));
    draw.glyph = glyph;
    draw.y = 0x41000;
    FUN_020c32b4(&draw, handle);
}
