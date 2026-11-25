//cpp
// flags: -O4,s
typedef struct { short glyph, a, b, pad; int x, y; } Draw;
typedef struct { unsigned char b[4]; } ItemHead;
typedef struct { unsigned int w[3]; } ItemTail;
typedef struct { ItemHead h; ItemTail t; } Item;
typedef struct { Item item; int extra; } SlotItem;
typedef struct { int x, y; } Point;

extern "C" {
extern void *DAT_0213f2bc;
extern unsigned char DAT_0211a51c[];
extern int DAT_0213e18c[], DAT_021385b4[], DAT_021385a4[], DAT_021385c4[], DAT_021385d4[];
extern const volatile int DAT_02138590[];
extern void FUN_02071d0c(void *), FUN_02090b44(void *), FUN_020c32b4(void *, int);
extern void FUN_overlay_12__0212c920(const void *, int, int, int);
extern void FUN_overlay_12__02133ec4(void *), FUN_overlay_12__02133c44(void *, int);
extern void *FUN_0203955c(void *), *FUN_overlay_12__0212a380(int), *FUN_02079114(void);
extern int FUN_overlay_12__02131ad0(int), FUN_overlay_12__02132390(void), FUN_overlay_12__0212c200(int, void *);
extern int FUN_02084cc0(void *), FUN_0203a1fc(const void *), FUN_020849d4(const void *), FUN_overlay_12__021320d4(const void *);
extern void FUN_02079160(void *, const void *, unsigned, int, int, int, int, int, int);
void FUN_overlay_12__0212b71c(int *self);
}

void FUN_overlay_12__0212b71c(int *self)
{
    Draw background;
    Draw draw;
    Item selected;
    Point first;
    Point second;
    int busy, handle, row, col, total, quantity;
    SlotItem *item;
    void *renderer;

    if (!self[16]) return;
    FUN_02071d0c(&background);
    FUN_02090b44(&background);
    background.x = 0;
    background.y = 5 << 12;
    background.glyph = 0;
    FUN_020c32b4(&background, FUN_overlay_12__02131ad0(3));
    if (((DAT_0213f2bc != 0) ? 1 : 0) != 0 || FUN_overlay_12__02132390()) return;
    busy = FUN_overlay_12__0212c200(self[22], self);
    if (self[27]) {
        FUN_overlay_12__0212c920(FUN_overlay_12__0212a380(FUN_02084cc0(DAT_0211a51c)), DAT_0213e18c[0], DAT_0213e18c[1], 2);
        FUN_overlay_12__0212c920(FUN_overlay_12__0212a380(self[111]), DAT_0213e18c[0], DAT_0213e18c[2], 2);
    }
    FUN_02071d0c(&draw);
    FUN_02090b44(&draw);
    FUN_0203955c(&selected);
    if (!busy) {
        handle = FUN_overlay_12__02131ad0(2);
        if (self[110] == 0) {
            draw.x = DAT_021385b4[self[108]] << 12;
            draw.y = DAT_021385a4[self[109]] << 12;
            draw.glyph = 0;
            FUN_020c32b4(&draw, handle);
        } else if (self[110] == 1) {
            draw.x = 85 << 12;
            draw.y = 59 << 12;
            draw.glyph = 19;
            FUN_020c32b4(&draw, handle);
        } else if (self[110] == 2) {
            draw.x = 85 << 12;
            draw.y = 80 << 12;
            draw.glyph = 20;
            FUN_020c32b4(&draw, handle);
        }
        if ((self[114] ? 1 : 0) != 0) {
            draw.x = 85 << 12;
            draw.y = 120 << 12;
            draw.glyph = 13;
            FUN_020c32b4(&draw, handle);
        }
    }
    total = 0;
    for (row = 0; row < 4; row++) {
        for (col = 0; col < 4; col++, total++) {
            if (row <= 1) {
                item = (SlotItem *)((char *)self + 112) + total;
            } else {
                item = (SlotItem *)((char *)self + 272) + (total - 8);
            }
            if (((FUN_0203a1fc(item) == 0) ? 1 : 0) != 0 && FUN_020849d4(item)) {
                draw.x = DAT_021385c4[col] << 12;
                draw.y = DAT_021385d4[row] << 12;
                draw.glyph = FUN_overlay_12__021320d4(item);
                FUN_020c32b4(&draw, FUN_overlay_12__02131ad0(0));
                if (self[108] == col && self[109] == row && self[110] == 0) {
                    selected.h = item->item.h;
                    selected.t = item->item.t;
                }
            }
        }
    }
    handle = FUN_overlay_12__02131ad0(0);
    {
        int ax = DAT_02138590[1];
        int ay = DAT_02138590[2];
        first.x = ax;
        first.y = ay;
        second.x = DAT_02138590[3];
        second.y = DAT_02138590[4];
    }
    renderer = FUN_02079114();
    quantity = FUN_020849d4(self + 63);
    FUN_02079160(renderer, &first, 0, 8, quantity, handle, -1, 8, 0);
    renderer = FUN_02079114();
    quantity = FUN_020849d4(self + 103);
    FUN_02079160(renderer, &second, 0, 8, quantity, handle, -1, 8, 0);
    FUN_overlay_12__02133ec4(&selected);
    FUN_overlay_12__02133c44(&selected, self[27]);
    self[27] = 0;
}
