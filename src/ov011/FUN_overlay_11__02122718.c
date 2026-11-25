// flags: -O4,s
extern void FUN_overlay_11__0211ff04(unsigned int);
extern void FUN_overlay_11__021228c8(void *, int *, int *, const void *);
extern unsigned int FUN_overlay_11__0211fe2c(unsigned int, unsigned int, const void *, const void *, const void *, unsigned int);
extern void *FUN_overlay_11__0211ff28(unsigned int);
extern void FUN_overlay_11__0211ffe4(void *, int);
extern void FUN_overlay_11__02120030(void *, int, int);

struct ResEntry_2718 {
    const void *a;
    const void *b;
    const void *c;
};
extern const struct ResEntry_2718 DAT_02123988[];

void FUN_overlay_11__02122718(char *self, signed char *appearance) {
    int category, frame;
    unsigned int handle;
    char *anim;
    handle = *(unsigned int *)(self + 16);
    if (handle != ~0u) {
        FUN_overlay_11__0211ff04(handle);
        *(unsigned int *)(self + 16) = ~0u;
    }
    if (appearance[32] < 0 || appearance[32] >= 3) {
        return;
    }
    category = -1;
    frame = 0;
    FUN_overlay_11__021228c8(self, &category, &frame, appearance);
    handle = FUN_overlay_11__0211fe2c(0x1000, 0x400, DAT_02123988[category].a, DAT_02123988[category].b, DAT_02123988[category].c, 0);
    *(unsigned int *)(self + 16) = handle;
    anim = FUN_overlay_11__0211ff28(handle);
    if (anim) {
        FUN_overlay_11__0211ffe4(anim, frame);
        FUN_overlay_11__02120030(anim, 0, 0);
        *(unsigned int *)(anim + 0x2ba8) = 0;
        *(int *)(self + 20) = category;
        *(int *)(self + 24) = frame;
    }
}
