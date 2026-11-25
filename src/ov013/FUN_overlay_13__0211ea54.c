// flags: -O4,s
typedef struct Draw { unsigned short glyph, b, c, pad; int x, y; } Draw;
extern const unsigned short DAT_0211f97c[];
extern void *FUN_0209081c(void);
extern void FUN_02090b44(Draw *), FUN_02090b54(void *, Draw *, int), FUN_02090a28(void *), FUN_overlay_13__0211efbc(int);
#pragma thumb off
extern void FUN_020144f0(void), FUN_02014714(void);
#pragma thumb on
int FUN_overlay_13__0211ea54(int *self) {
    Draw d;
    int selected = self[1], i, y;
    void *renderer = FUN_0209081c();
    FUN_020144f0();
    for (i = 0; i < 2; i++) {
        y = ((i + 1) * 22 + 246) << 12;
        d.glyph = 0; d.b = 0; d.c = 0;
        FUN_02090b44(&d);
        d.glyph = 15; d.x = 262144; d.y = y + 8192;
        FUN_02090b54(renderer, &d, 3);
        FUN_02090b44(&d);
        d.x = 524288; d.y = y; d.glyph = DAT_0211f97c[i];
        if (i == self[1]) d.glyph++;
        FUN_02090b54(renderer, &d, 3);
    }
    FUN_02014714();
    FUN_02090a28(renderer);
    FUN_overlay_13__0211efbc(selected);
    return 1;
}
