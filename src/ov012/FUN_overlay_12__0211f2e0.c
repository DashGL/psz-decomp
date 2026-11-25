// flags: -O4,s
typedef struct {
    unsigned char pad0[0x118];
    int active;
    unsigned char pad1[4];
} Slot;
typedef struct {
    int f0, f1, f2, f3, f4, f5, f6, f7;
    int f8, f9, f10, f11, mode;
    unsigned char pad[712 - 13 * 4];
    Slot slots[8];
    int child;
    int pad2[6];
    int saved_sel;
} Menu;
extern void FUN_overlay_12__0211f188(void *), FUN_overlay_12__0212c9a0(void), FUN_overlay_12__02120364(void *, void *), FUN_overlay_12__0211f434(void *), FUN_overlay_12__0211f9f8(void *, int), FUN_overlay_12__0211f83c(void *), FUN_overlay_12__0211f8c0(void *), FUN_overlay_12__02136380(void), FUN_overlay_12__0211fb50(void *), FUN_overlay_12__0212c8f8(const char *, int, int, int);
extern void *FUN_02031a74(void), *FUN_02031c98(void *), *FUN_020ba894(unsigned), *FUN_overlay_12__0212201c(void *);
extern int FUN_overlay_12__021206e0(void *, int), FUN_overlay_12__021206b4(void *);
extern const char *FUN_overlay_12__02121fc8(int, int);
void FUN_overlay_12__0211f2e0(Menu *self, int mode)
{
    int i, skip, last, label;
    void *child, *owner;
    for (i = 0; i < 8; i++) FUN_overlay_12__0211f188(&self->slots[i]);
    self->f1 = 0;
    FUN_overlay_12__0212c9a0();
    self->f3 = 0;
    self->f7 = 0;
    owner = FUN_02031c98(FUN_02031a74());
    if (!owner) return;
    skip = 0;
    switch (mode) {
    case 0:
        FUN_overlay_12__02120364(self, owner);
        FUN_overlay_12__0211f434(self);
        self->f3 = self->saved_sel;
        break;
    case 1:
        for (i = 0; i < 3; i++) if (!FUN_overlay_12__021206e0(self, i)) break;
        FUN_overlay_12__0211f9f8(self, i);
        break;
    case 2: FUN_overlay_12__0211f83c(self); break;
    case 3: FUN_overlay_12__0211f8c0(self); break;
    case 4: FUN_overlay_12__02136380(); skip = 1; break;
    case 5:
        child = FUN_020ba894(20);
        if (child) child = FUN_overlay_12__0212201c(child);
        self->child = (int)child;
        FUN_overlay_12__0211fb50(self);
        break;
    case 6: skip = 1; break;
    }
    self->mode = mode;
    if (FUN_overlay_12__021206b4(self)) {
        last = self->f1 - 1;
        if (self->f3 < 0) self->f3 = 0;
        for (;;) {
            if (last < self->f3) { self->f3 = 0; continue; }
            if (self->slots[self->f3].active) break;
            self->f3++;
        }
    }
    if (!skip) {
        if (self->mode == 0) label = 0;
        else if (self->mode == 1) label = 1;
        else if (self->mode == 2) label = 2;
        else if (self->mode == 3) label = 3;
        else if (self->mode == 5) label = 4;
        else label = 0;
        FUN_overlay_12__0212c8f8(FUN_overlay_12__02121fc8(2, label), 18, 177, 2);
    }
}
