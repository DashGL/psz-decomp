//cpp
// flags: -O4,s
extern "C" {
extern void *FUN_overlay_14__0211fd64(void *);
extern void *FUN_overlay_14__0211fde8(void *);
extern void FUN_020ba8ac(void *);
}
struct A_0211fc20 {
    inline ~A_0211fc20() { FUN_overlay_14__0211fd64(this); }
    inline void operator delete(void *p) { FUN_020ba8ac(p); }
};
struct B_0211fc20 {
    inline ~B_0211fc20() { FUN_overlay_14__0211fde8(this); }
    inline void operator delete(void *p) { FUN_020ba8ac(p); }
};
struct S_0211fc20 {
    A_0211fc20 *a[6];
    B_0211fc20 *b[6][4];
};
extern "C" void *FUN_overlay_14__0211fc20(S_0211fc20 *s) {
    int i, j;
    for (i = 0; i < 6; i++) {
        if (s->a[i]) {
            delete s->a[i];
            s->a[i] = 0;
        }
        for (j = 0; j < 4; j++) {
            if (s->b[i][j]) {
                delete s->b[i][j];
                s->b[i][j] = 0;
            }
        }
    }
    return s;
}
