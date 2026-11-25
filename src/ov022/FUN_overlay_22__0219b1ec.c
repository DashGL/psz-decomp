//cpp
// flags: -O4,s
extern "C" {
extern void FUN_overlay_22__0219b364(void *);
extern void FUN_overlay_22__0219b428(void *);
extern void FUN_overlay_22__0219b440(void *);
}
struct S_0219b1ec {
    int pad[16];
    unsigned state;
    int timer;
    virtual void dummy();
};
typedef void (S_0219b1ec::*Method)();
struct Entry_0219b1ec {
    Method fn;
    int pad[5];
};
extern "C" Entry_0219b1ec DAT_021a1284[];
extern "C" void FUN_overlay_22__0219b1ec(S_0219b1ec *self) {
    Method fn = DAT_021a1284[self->state].fn;
    if (fn) {
        (self->*fn)();
    }
    FUN_overlay_22__0219b364(self);
    FUN_overlay_22__0219b428(self);
    FUN_overlay_22__0219b440(self);
    if (self->timer < 0x7fffffff) self->timer++;
}
