// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xe0, exact bytes and relocation targets.
// flags: -O4,s
typedef struct {
    unsigned short a, b, c, pad;
    int x, y;
} Draw;

extern void *FUN_02031a74(void);
extern signed char *FUN_02031cb8(void *, int, int);
extern void FUN_overlay_12__0212ca54(void);
extern const char *FUN_02032208(void *, int, int, int, int);
extern void FUN_overlay_12__0212ca2c(const char *, int, int, int);
extern void FUN_02071d0c(Draw *), FUN_02090b44(Draw *), FUN_020c32b4(Draw *, int);

void FUN_overlay_12__0212eb90(int *self, int id, int kind)
{
    signed char *entry = FUN_02031cb8(FUN_02031a74(), id, kind);
    int icon;
    Draw d;

    if (!entry) {
        self[2] = -1;
        FUN_overlay_12__0212ca54();
        return;
    }
    icon = entry[0x34] - 1;
    if (id != self[2]) {
        const char *desc, *title, *p;
        int i, width;

        self[2] = id;
        FUN_overlay_12__0212ca54();
        desc = FUN_02032208(FUN_02031a74(), id, kind, 1, entry[0x33]);
        FUN_overlay_12__0212ca2c(desc, 0x60, 0x43, 2);
        title = FUN_02032208(FUN_02031a74(), id, kind, 0, entry[0x32]);
        p = title;
        width = 0;
        if (title) {
            for (i = 0; i < 256; i++, p++) {
                if (*p == 0) {
                    break;
                }
                width += 5;
            }
        }
        FUN_overlay_12__0212ca2c(title, 0xa6 - width / 2, 0x2d, 2);
    }
    FUN_02071d0c(&d);
    FUN_02090b44(&d);
    d.x = 0x15000;
    d.y = 0xf5000;
    d.a = icon;
    FUN_020c32b4(&d, self[1]);
    d.x = 0xc000;
    d.y = 0xdd000;
    d.a = 7;
    FUN_020c32b4(&d, self[0]);
}
