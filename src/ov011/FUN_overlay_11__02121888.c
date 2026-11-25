// flags: -O4,s
typedef struct { unsigned short glyph, b, c, pad; unsigned x, y; } Draw;
#pragma thumb off
extern void FUN_020144f0(void), FUN_02014714(void);
#pragma thumb reset
extern void FUN_02071d0c(Draw *), FUN_02090b44(Draw *), FUN_020c32b4(Draw *, int);
void FUN_overlay_11__02121888(int *self) {
    int i;
    unsigned y;
    Draw right, left;
    FUN_020144f0();
    for (i = 0; i < self[23]; i++) {
        FUN_02071d0c(&right);
        FUN_02090b44(&right);
        right.glyph = 8;
        right.x = 0xd0000;
        y = ((unsigned)i * 24 + 12) << 12;
        right.y = y;
        right.y += 0xc0000;
        if (i == self[18] && self[21] > 0) {
            self[21]--;
            right.x += 0x2000;
        }
        FUN_020c32b4(&right, self[17]);
        FUN_02071d0c(&left);
        FUN_02090b44(&left);
        left.glyph = 7;
        left.x = 0xa0000;
        left.y = y;
        left.y += 0xc0000;
        if (i == self[18] && self[21] < 0) {
            self[21]++;
            left.x -= 0x2000;
        }
        FUN_020c32b4(&left, self[17]);
    }
    FUN_02014714();
}
