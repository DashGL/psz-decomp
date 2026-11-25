// flags: -O4,s
typedef struct { int x, y; } Pair;
typedef struct { short a, b, c, pad; int x, y; } Draw;
extern const Pair DAT_overlay_12__0213b7f8[];
extern char *FUN_020a0ce8(void);
extern unsigned int FUN_020a1368(void *);
extern void FUN_overlay_12__02130000(void *), FUN_overlay_12__0212d488(void *, int), FUN_overlay_12__0212d51c(void *, int), FUN_overlay_12__0212d598(int, unsigned int, int), FUN_02071d0c(void *), FUN_02090b44(void *), FUN_020c32b4(void *, int), FUN_overlay_12__0212c9a0(void), FUN_overlay_12__0212c8f8(const void *, int, int, int);
extern void *FUN_02079114(void), *FUN_overlay_12__0212d268(int, int);
extern void FUN_02079160(void *, const Pair *, unsigned int, int, int, int, int, int, int);
extern int FUN_overlay_12__02131ad0(int);
void FUN_overlay_12__02130048(int *self)
{
    Draw draw;
    Pair pos, base;
    int resource, index, row;
    FUN_overlay_12__02130000(self);
    FUN_overlay_12__0212d488(self + 42, 0);
    FUN_overlay_12__0212d51c(self + 42, 0);
    FUN_overlay_12__0212d598(13, FUN_020a1368(FUN_020a0ce8() + 36), 0);
    FUN_02071d0c(&draw);
    FUN_02090b44(&draw);
    resource = FUN_overlay_12__02131ad0(1);
    index = self[45];
    base = *(const Pair *)((const int *)DAT_overlay_12__0213b7f8 + 5);
    for (row = 0; row < 5 && index < self[19]; row++, index++) {
        int y;
        pos = base;
        y = (row * 16 + 69) << 12;
        pos.y = y;
        FUN_02079160(FUN_02079114(), &pos, 2, 3, self[index + 20], resource, -1, 8, 0);
        draw.x = 0xd8000;
        draw.y = y;
        draw.a = 2;
        FUN_020c32b4(&draw, resource);
    }
    if (self[47]) {
        self[47] = 0;
        FUN_overlay_12__0212c9a0();
        index = self[45];
        for (row = 0; row < 5 && index < self[19]; row++, index++)
            FUN_overlay_12__0212c8f8(FUN_overlay_12__0212d268(3, index), 51, row * 16 + 69, 2);
    }
}
