//cpp
// flags: -O4,s
extern "C" {
extern void FUN_overlay_18__02120ef4(void *);
extern void FUN_020ba8ac(void *);
}
struct Item {
    inline ~Item() { FUN_overlay_18__02120ef4(this); }
    inline void operator delete(void *p) { FUN_020ba8ac(p); }
};
struct Sub {
    inline ~Sub() {}
    inline void operator delete(void *p) { FUN_020ba8ac(p); }
};
struct Container {
    Item *items[6];
    Sub *subs[6][4];
};
extern "C" Container *FUN_overlay_18__02120dc0(Container *self) {
    for (int i = 0; i < 6; i++) {
        if (self->items[i] != 0) {
            delete self->items[i];
            self->items[i] = 0;
        }
        for (int j = 0; j < 4; j++) {
            if (self->subs[i][j] != 0) {
                delete self->subs[i][j];
                self->subs[i][j] = 0;
            }
        }
    }
    return self;
}
