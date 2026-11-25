// flags: -O2,s
typedef struct { unsigned short glyph, b, z, pad; unsigned x, y; } Draw;
typedef struct { unsigned char pad[4]; unsigned char data[68]; } Row72;
typedef struct {
    int f0;
    int selected;
    int f8, fc;
    Row72 rows[3];
    int prev;
} Obj14;

extern void *FUN_0209081c(void);
#pragma thumb off
extern void FUN_020144f0(void), FUN_02014714(void);
#pragma thumb on
extern void FUN_02090b54(void *, void *, unsigned), FUN_02090a28(void *);
extern void *FUN_overlay_14__02120078(void);
extern void FUN_overlay_14__021204ec(void *, int, void *), FUN_overlay_14__02120574(void *), FUN_overlay_14__02120700(void *), FUN_overlay_14__02120718(void *), FUN_overlay_14__021209b8(void *, int);
extern const unsigned short DAT_overlay_14__02121978[];

int FUN_overlay_14__02120f7c(Obj14 *self)
{
    int i;
    unsigned int j;
    int selected = self->selected;
    void *renderer;
    Draw item;
    if (self->prev != selected) {
        int special = 0;
        void *panel = FUN_overlay_14__02120078();
        if (panel) {
            if (selected >= 0 && selected < 3) {
                Row72 *r = &self->rows[selected];
                FUN_overlay_14__021204ec(panel, selected, r->data);
            } else {
                FUN_overlay_14__02120574(panel);
                if (selected == 4) { special = 1; FUN_overlay_14__02120700(panel); }
                if (!special) FUN_overlay_14__02120718(panel);
            }
        }
        self->prev = selected;
    }
    renderer = FUN_0209081c();
    FUN_020144f0();
    i = 0;
    do {
        if (i == selected) FUN_overlay_14__021209b8(&self->rows[i], 1);
        else FUN_overlay_14__021209b8(&self->rows[i], 0);
        i++;
    } while (i < 3);
    for (j = 0; j < 2; j++) {
        item.glyph = 0; item.b = 0; item.z = 0;
        item.glyph = 0; item.b = 0; item.z = 0; item.y = 0; item.x = 0;
        item.glyph = DAT_overlay_14__02121978[j];
        if ((int)j + 3 == selected) item.glyph++;
        item.x = 0x80000;
        item.y = (j * 23 + 314) << 12;
        FUN_02090b54(renderer, &item, 1);
    }
    FUN_02014714();
    FUN_02090a28(renderer);
    return 1;
}
