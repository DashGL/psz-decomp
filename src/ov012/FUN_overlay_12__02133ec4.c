// flags: -O4,s
typedef struct { unsigned char b[4]; } Id;
typedef struct { unsigned a, b, c; } Data;
typedef struct { Id id; Data data; } Item;
typedef struct { unsigned short glyph, b, c, pad; unsigned x, y; } Draw;

extern int *DAT_overlay_12__0213f2f4;
extern unsigned FUN_02098d84(const void *);
extern void FUN_overlay_12__02133ac4(int);
extern void FUN_0203955c(void *);
extern void FUN_overlay_12__021340fc(void *, int);
extern void FUN_overlay_12__02133d48(void *);
extern const char *FUN_0209e0b0(const Item *, int);
extern void FUN_020c3788(void *, const char *, int, int, int);
extern void FUN_02071d0c(Draw *);
extern void FUN_02090b44(Draw *);
extern void FUN_020c32b4(Draw *, int);

void FUN_overlay_12__02133ec4(const Item *item) {
    int *panel = DAT_overlay_12__0213f2f4;
    int handle, invalid;
    unsigned key;
    const char *text;
    Draw draw;

    if (panel && panel[16] == 1) {
        int b;
        handle = panel[17];
        b = item->id.b[0];
        if (b < 0 || b >= 4) invalid = 1;
        else invalid = 0;
        key = FUN_02098d84(item);
        panel[85] = key != FUN_02098d84(panel + 79);
        if (panel[85]) FUN_overlay_12__02133ac4(0);
        if (invalid) {
            FUN_0203955c(panel + 79);
        } else {
            ((Item *)(panel + 79))->id = item->id;
            ((Item *)(panel + 79))->data = item->data;
        }
        FUN_overlay_12__021340fc(panel, invalid);
        if (!invalid) {
            if (!panel[86]) {
                text = FUN_0209e0b0(item, 0);
                if (text) {
                    panel[86] = 1;
                    FUN_020c3788(panel + 19, text, 0, 0, 2);
                }
            }
            FUN_02071d0c(&draw);
            FUN_02090b44(&draw);
            draw.x = 0x80000;
            draw.y = 0x120000;
            draw.glyph = 0;
            FUN_020c32b4(&draw, handle);
        }
        FUN_overlay_12__02133d48(panel);
    }
}
