// flags: -O4,s
typedef struct { unsigned short glyph, a, z, pad; unsigned int x, y; } Draw;
typedef struct { unsigned int f0, f4, f8; } Entry;
typedef struct {
    unsigned char pad0[0x10];
    int f10, f14, f18;
    unsigned char pad1c[0x18];
    Entry entries[0x36];
    unsigned int keys[0x244];
    int total, limit, pad_bd4, start_idx, dirty;
} Self;
extern void FUN_overlay_12__0211fef8(void *);
extern void FUN_overlay_12__0212006c(void *);
extern void FUN_overlay_12__0212007c(void *);
extern void FUN_overlay_12__0211ffac(void *);
extern void *FUN_02031a74(void);
extern void *FUN_02032208(void *, unsigned int, unsigned int, unsigned int, unsigned int);
extern void FUN_overlay_12__0212c8f8(void *, int, int, int);
extern void FUN_02071d0c(Draw *);
extern void FUN_02090b44(Draw *);
extern void FUN_020c32b4(Draw *, unsigned int);
extern char *FUN_020a0ce8(void);
extern int FUN_overlay_12__0212d3b8(void *, unsigned int, unsigned int);
extern unsigned int FUN_overlay_12__02131ad0(int);

void FUN_overlay_12__0211fdac(Self *self) {
    int base, total, limit, idx, i; Entry *e; Draw draw; char *state; unsigned int key;
    FUN_overlay_12__0211fef8(self);
    base = self->f10;
    total = self->total;
    limit = self->limit;
    if (self->dirty != 0) {
        self->dirty = 0;
        FUN_overlay_12__0212006c(self);
        idx = self->start_idx;
        for (i = 0; idx < total && i < limit; i++, idx++) {
            e = &self->entries[idx];
            void *text = FUN_02032208(FUN_02031a74(), e->f0, e->f4, 0, e->f8);
            FUN_overlay_12__0212c8f8(text, base * 20 + 21, (base + i) * 17 + 32, 2);
        }
    }
    FUN_02071d0c(&draw);
    FUN_02090b44(&draw);
    draw.x = base * 0x14000 + 0x1000;
    state = FUN_020a0ce8();
    key = self->keys[self->f18 - 1];
    idx = self->start_idx;
    for (i = 0; idx < total && i < limit; i++, idx++) {
        e = &self->entries[idx];
        if (e->f4 == 1) {
            draw.glyph = 8;
        } else if (e->f4 == 2) {
            if (FUN_overlay_12__0212d3b8(state + 0x194, e->f0, key) != 0) {
                continue;
            }
            draw.glyph = 3;
        } else {
            continue;
        }
        draw.y = (i + base) * 0x11000 + 0x20000;
        FUN_020c32b4(&draw, FUN_overlay_12__02131ad0(7));
    }
    FUN_overlay_12__0212007c(self);
    FUN_overlay_12__0211ffac(self);
}
