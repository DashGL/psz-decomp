//cpp
// flags: -O4,s
struct Obj_22_cac4 {
    unsigned char pad0[0x44];
    int state;
    int timer;
    unsigned char pad1[0x50];
    int a, b, c;
    unsigned char pad2[0x1c];
    int sub_timer;
};
typedef void (Obj_22_cac4::*StateFn)();
struct StateEntry {
    StateFn fn;
    int pad[4];
};
extern "C" {
extern const StateEntry DAT_021a143c[];
extern void FUN_overlay_22__0219ab34(void *, int, int, int);
extern void FUN_overlay_22__0219cc78(void *);
extern void FUN_overlay_22__0219cd30(void *);

void FUN_overlay_22__0219cac4(Obj_22_cac4 *self) {
    StateFn fn = DAT_021a143c[self->state].fn;
    if (fn) {
        (self->*fn)();
    }
    FUN_overlay_22__0219ab34(self, self->a, self->b, self->c);
    FUN_overlay_22__0219cc78(self);
    FUN_overlay_22__0219cd30(self);
    if (self->timer < 0x7fffffff) {
        self->timer++;
    }
    int st = self->state;
    if (st == 10 || st == 11 || st == 13) {
        if (self->sub_timer < 1800) {
            self->sub_timer++;
        }
    } else {
        self->sub_timer = 0;
    }
}
}
