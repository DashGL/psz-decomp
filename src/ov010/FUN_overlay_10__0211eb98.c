//cpp
// flags: -O4,s
extern "C" {
extern void FUN_020ba8b4(void *);
extern void FUN_020ba8ac(void *);
extern void FUN_020c3578(void *);
extern void FUN_0200c4d4(void *, unsigned, unsigned, void (*)(void *));
extern void *FUN_overlay_11__0211e734(void *);
extern void *FUN_020b3074(void *);
extern void *FUN_020c2b68(void *);
extern void *FUN_overlay_11__0211e868(void *);
extern void FUN_overlay_10__0211f878(void *);
extern void FUN_overlay_11__0211e7c8(void *);
extern void FUN_overlay_11__0211e9b0(void *);
}

struct Child1 {
    inline ~Child1() { FUN_overlay_11__0211e734(this); }
    inline void operator delete(void *p) { FUN_020ba8ac(p); }
};

struct Child2 {
    inline ~Child2() { FUN_020b3074(this); }
    inline void operator delete(void *p) { FUN_020ba8ac(p); }
};

enum Flag { F0 = 0, F1 = 1 };

extern "C" char *FUN_overlay_10__0211eb98(char *self) {
    unsigned m = *(unsigned *)self;
    enum Flag flag = F0;
    if (m <= 3) { if ((1U << m) & 11) flag = F1; }
    if (flag == F0) {
        if (*(void **)(self + 0x8c) != 0) {
            FUN_020ba8b4(*(void **)(self + 0x8c));
            *(void **)(self + 0x8c) = 0;
        }
    } else {
        if (*(void **)(self + 0x88) != 0) {
            FUN_020ba8b4(*(void **)(self + 0x88));
            *(void **)(self + 0x88) = 0;
        }
    }
    if (*(Child1 **)(self + 8) != 0) {
        delete *(Child1 **)(self + 8);
        *(Child1 **)(self + 8) = 0;
    }
    if (*(Child2 **)(self + 0x100) != 0) {
        delete *(Child2 **)(self + 0x100);
        *(Child2 **)(self + 0x100) = 0;
    }
    FUN_overlay_10__0211f878(self);
    FUN_020c3578(self + 0xb0);
    FUN_020c2b68(self + 0xac);
    FUN_0200c4d4(self + 0x60, 2, 0x14, FUN_overlay_11__0211e7c8);
    FUN_overlay_11__0211e868(self + 0x54);
    FUN_0200c4d4(self + 0x0c, 2, 0x18, FUN_overlay_11__0211e9b0);
    return self;
}
