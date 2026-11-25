// flags: -O4,s
extern int DAT_overlay_12__0213e20c;
extern void FUN_overlay_12__02131c58(void);
extern void FUN_overlay_12__0212d470(void *);
extern void FUN_020c32b4(void *, int);
extern void FUN_overlay_12__0212c9a0(void);
extern void FUN_overlay_12__0212c8f8(const void *, int, int, int);
extern void FUN_overlay_12__0212d63c(const void *, int);
extern int FUN_overlay_12__02131ad0(int);
extern void *FUN_overlay_12__0212d268(int, int);

typedef struct { short a, b, c, pad; int x, y; } Draw;

void FUN_overlay_12__0213156c(int *self) {
    Draw draw;
    unsigned ok = (DAT_overlay_12__0213e20c == self[2]);
    if (!ok) return;
    FUN_overlay_12__02131c58();
    FUN_overlay_12__0212d470(self + 119);
    ((volatile Draw *)&draw)->a = 0;
    ((volatile Draw *)&draw)->b = 0;
    ((volatile Draw *)&draw)->c = 0;
    ((volatile Draw *)&draw)->a = 0;
    ((volatile Draw *)&draw)->b = 0;
    ((volatile Draw *)&draw)->c = 0;
    ((volatile Draw *)&draw)->x = 0;
    ((volatile Draw *)&draw)->y = 0;
    draw.x = 0;
    draw.y = 0x5000;
    draw.a = 6;
    FUN_020c32b4(&draw, FUN_overlay_12__02131ad0(4));
    if (self[17] > 0) {
        draw.x = 0x6000;
        draw.y = (26u * ((unsigned)self[121] - (unsigned)self[122]) + 66u) << 12;
        draw.a = 17;
        FUN_020c32b4(&draw, FUN_overlay_12__02131ad0(4));
        if (self[123]) {
            int index, row;
            self[123] = 0;
            FUN_overlay_12__0212c9a0();
            index = self[122];
            row = 0;
            while (row < 3 && index < self[17]) {
                FUN_overlay_12__0212c8f8(FUN_overlay_12__0212d268(6, self[index + 18]), 30, 26 * row + 76, 2);
                row++;
                index++;
            }
        }
    } else if (self[123]) {
        self[123] = 0;
        FUN_overlay_12__0212c9a0();
        FUN_overlay_12__0212d63c(FUN_overlay_12__0212d268(0, 20), 2);
    }
}
