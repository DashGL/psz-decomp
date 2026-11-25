//cpp
// flags: -O4,s
extern "C" {
extern void FUN_020ba8b4(void *);
extern void FUN_020ba8ac(void *);
extern void FUN_020c3578(void *);
extern void FUN_0200c4d4(void *, unsigned, unsigned, void (*)(void *));
extern void *FUN_overlay_14__0211fc20(void *);
extern void *FUN_020b3074(void *);
extern void *FUN_020c2b68(void *);
extern void *FUN_overlay_14__0211fd64(void *);
extern void FUN_overlay_14__0211f71c(void *);
extern void FUN_overlay_14__0211fcc4(void *);
extern void FUN_overlay_14__0211e6b4(void *);
}

struct Child1 {
    inline ~Child1() { FUN_overlay_14__0211fc20(this); }
    inline void operator delete(void *p) { FUN_020ba8ac(p); }
};

struct Child2 {
    inline ~Child2() { FUN_020b3074(this); }
    inline void operator delete(void *p) { FUN_020ba8ac(p); }
};

enum Flag { F0 = 0, F1 = 1 };

extern "C" char *FUN_overlay_14__0211e89c(char *self) {
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
    FUN_overlay_14__0211f71c(self);
    FUN_020c3578(self + 0xb0);
    FUN_020c2b68(self + 0xac);
    FUN_0200c4d4(self + 0x60, 2, 0x14, FUN_overlay_14__0211fcc4);
    FUN_overlay_14__0211fd64(self + 0x54);
    FUN_0200c4d4(self + 0x0c, 2, 0x18, FUN_overlay_14__0211e6b4);
    return self;
}
