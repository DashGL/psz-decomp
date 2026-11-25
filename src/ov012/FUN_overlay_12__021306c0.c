// flags: -O4,s
typedef struct { int f00, f04, f08, f0c, f10, f14; } Entry24;
typedef struct { unsigned char f0, type, f2, f3; } Item4;
typedef struct { int pad0[16]; int *children[9]; int idx; } Owner;
typedef struct {
    int pad0[39]; Item4 *items; int pad1[4]; int item_idx; int pad2[3];
    void *obj; int pad3[5]; int state; int dir; int timer;
} Self;
extern Owner *DAT_02108c84;
extern const Entry24 DAT_0213b82c[];
extern void FUN_02038000(void *, int, int, int);

void FUN_overlay_12__021306c0(Self *self) {
    int a, b, c, d, t; int type; Owner *owner; int *child;
    if (self->state != 1) return;
    owner = DAT_02108c84;
    if (owner == 0 || self->obj == 0) return;
    child = owner->children[owner->idx];
    if (child == 0) return;
    type = self->items[self->item_idx].type;
    self->timer += 2;
    if (self->dir == 1) {
        a = DAT_0213b82c[type].f0c; c = DAT_0213b82c[type].f10; b = DAT_0213b82c[type].f04; d = DAT_0213b82c[type].f08;
    } else {
        a = DAT_0213b82c[type].f10; c = DAT_0213b82c[type].f0c; b = DAT_0213b82c[type].f08; d = DAT_0213b82c[type].f04;
    }
    t = self->timer;
    child[31] = (c * t + a * (16 - t)) >> 4;
    FUN_02038000(self->obj, DAT_0213b82c[type].f00, (d * t + b * (16 - t)) >> 4, 0);
    if (t >= 16) self->state = 0;
}
