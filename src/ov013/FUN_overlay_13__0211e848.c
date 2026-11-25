// flags: -O4,s
typedef struct {
    unsigned short glyph, b, z, pad;
    unsigned x, y;
} Draw;
extern int FUN_020bb0bc(void), FUN_020b3bc8(void *);
extern void *FUN_020bb0c8(int), *FUN_020b3cbc(void *, unsigned), *FUN_0209081c(void);
extern void FUN_020c38f0(void *, unsigned), FUN_020144f0(void), FUN_02014714(void),
    FUN_02090b54(void *, void *, unsigned), FUN_02090a28(void *),
    FUN_020c3864(void *, void *, int, int, int), FUN_overlay_13__0211efc8(int);

static __inline void set_range(int *self, int count, int sel) {
    self[2] = count;
    self[1] = sel;
}

int FUN_overlay_13__0211e848(char *self) {
    int count = FUN_020bb0bc();
    int selected;
    void *renderer;
    Draw item;
    if (count != *(int *)(self + 16) && count <= 4) {
        int i;
        for (i = 0; i < *(int *)(self + 16); i++) {
            FUN_020c38f0(self + 20 + 60 * (unsigned)i, 0);
        }
        *(int *)(self + 16) = count;
        set_range((int *)self, count, *(int *)(self + 4));
    }
    selected = *(int *)(self + 4);
    renderer = FUN_0209081c();
    FUN_020144f0();
    {
        int i;
        for (i = 0; i < 4; i++) {
            item.glyph = 0;
            item.b = 0;
            item.z = 0;
            item.glyph = 0;
            item.b = 0;
            item.z = 0;
            item.y = 0;
            item.x = 0;
            if (selected >= 0 && selected < *(int *)(self + 16) && selected == i) {
                item.glyph = 14;
            } else {
                item.glyph = 13;
            }
            item.x = 0x80000;
            item.y = ((unsigned)i * 22 + 246) << 12;
            FUN_02090b54(renderer, &item, 3);
        }
    }
    FUN_02014714();
    {
        int i;
        for (i = 0; i < *(int *)(self + 16); i++) {
            char *p = FUN_020bb0c8(i);
            char *record = 0;
            if (p != 0) {
                record = p + 80;
            }
            FUN_020c38f0(self + 20 + 60 * (unsigned)i, 0);
            if (record && !FUN_020b3bc8(record)) {
                FUN_020c3864(self + 20 + 60 * (unsigned)i, FUN_020b3cbc(record, 0), 0, 0, 2);
            }
        }
    }
    FUN_02090a28(renderer);
    FUN_overlay_13__0211efc8(selected);
    return 0;
}
