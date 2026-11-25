// flags: -O4,s
typedef struct {
    int f00;
    int f04;
    int f08;
    int f0c;
    int f10;
    int f14;
    int f18;
    int f1c;
    int f20;
    int f24;
} Entry_17;
typedef struct {
    int pad;
    Entry_17 entries[33];
} Obj_17;
extern void *FUN_overlay_17__0211e7a8(int);
extern void FUN_overlay_17__0211e8dc(void *, int);
extern void FUN_overlay_17__0211e95c(void *, int, int, int);

void FUN_overlay_17__02120520(Obj_17 *self, int index, int value) {
    void *first, *second;
    int i;
    if (index <= -1 || index >= 33) return;
    if (!self->entries[index].f00) return;
    first = FUN_overlay_17__0211e7a8(self->entries[index].f04);
    if (first) {
        for (i = 0; i < 3; i++) FUN_overlay_17__0211e95c(first, i, 0, 1);
        FUN_overlay_17__0211e95c(first, value, 0, 0);
    }
    second = FUN_overlay_17__0211e7a8(self->entries[index].f08);
    if (second) {
        FUN_overlay_17__0211e8dc(second, self->entries[index].f10);
        for (i = 0; i < 3; i++) FUN_overlay_17__0211e95c(second, i, 0, 1);
        FUN_overlay_17__0211e95c(second, self->entries[index].f0c, 0, 0);
    }
    self->entries[index].f14 = self->entries[index].f0c;
    self->entries[index].f0c = value;
    self->entries[index].f1c = 0;
    self->entries[index].f24 = 4;
}
