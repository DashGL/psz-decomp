// flags: -O4,s
typedef struct { int a; int id; } Entry;
typedef struct {
    unsigned char pad0[0x48];
    int cats[6];
    int cat_idx;
    unsigned char pad64[0x1a4];
    int count;
    int pad20c;
    int sel_idx;
    int scroll_idx;
    int pad218;
    int dirty;
    unsigned char widget[4];
} Self12;

extern void FUN_overlay_12__0212c9a0(void);
extern void FUN_overlay_12__0212d63c(const void *, int);
extern void FUN_overlay_12__0212c8f8(const void *, int, int, int);
extern void FUN_overlay_12__0212eb90(void *, int, int);
extern void *FUN_overlay_12__0212d268(int, int);
extern void *FUN_02031a74(void);
extern signed char *FUN_02031cb8(void *, int, int);
extern void *FUN_02032208(void *, int, int, int, int);

void FUN_overlay_12__0212e980(Self12 *self) {
    int category = self->cats[self->cat_idx];
    Entry *list = 0;
    int kind = 0;
    int id;
    int count = self->count;
    switch (category) {
    case 0:
    case 1:
    case 2:
        list = (Entry *)((char *)self + 0x64 + category * 0x38);
        kind = 1;
        break;
    case 3:
        list = (Entry *)((char *)self + 0x10c);
        kind = 2;
        break;
    case 4:
        list = (Entry *)((char *)self + 0x184);
        kind = 2;
        break;
    }
    if (list == 0 || count <= 0) {
        if (self->dirty) {
            self->dirty = 0;
            FUN_overlay_12__0212c9a0();
            FUN_overlay_12__0212d63c(FUN_overlay_12__0212d268(0, 16), 2);
        }
    } else {
        if (self->dirty) {
            int index, row;
            self->dirty = 0;
            FUN_overlay_12__0212c9a0();
            index = self->scroll_idx;
            for (row = 0; row < 5 && index < count; row++, index++) {
                signed char *def;
                id = list[index].id;
                def = FUN_02031cb8(FUN_02031a74(), id, kind);
                if (def) {
                    FUN_overlay_12__0212c8f8(FUN_02032208(FUN_02031a74(), id, kind, 0, def[50]), 51, row * 16 + 69, 2);
                }
            }
        }
        FUN_overlay_12__0212eb90(self->widget, list[self->sel_idx].id, kind);
    }
}
