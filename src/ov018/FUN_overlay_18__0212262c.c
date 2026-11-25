// flags: -O4,s
extern void FUN_overlay_18__0211f8fc(unsigned int);
extern void FUN_overlay_18__021227dc(void *, int *, int *, const void *);
extern unsigned int FUN_overlay_18__0211f824(unsigned int, unsigned int, const void *, const void *, const void *, unsigned int);
extern void *FUN_overlay_18__0211f920(unsigned int);
extern void FUN_overlay_18__0211f9dc(void *, int);
extern void FUN_overlay_18__0211fa28(void *, int, int);

struct ResEntry_2718 {
    const void *a;
    const void *b;
    const void *c;
};
extern const struct ResEntry_2718 DAT_0212391c[];

void FUN_overlay_18__0212262c(char *self, signed char *appearance) {
    int category, frame;
    unsigned int handle;
    char *anim;
    handle = *(unsigned int *)(self + 16);
    if (handle != ~0u) {
        FUN_overlay_18__0211f8fc(handle);
        *(unsigned int *)(self + 16) = ~0u;
    }
    if (appearance[32] < 0 || appearance[32] >= 3) {
        return;
    }
    category = -1;
    frame = 0;
    FUN_overlay_18__021227dc(self, &category, &frame, appearance);
    handle = FUN_overlay_18__0211f824(0x1000, 0x400, DAT_0212391c[category].a, DAT_0212391c[category].b, DAT_0212391c[category].c, 0);
    *(unsigned int *)(self + 16) = handle;
    anim = FUN_overlay_18__0211f920(handle);
    if (anim) {
        FUN_overlay_18__0211f9dc(anim, frame);
        FUN_overlay_18__0211fa28(anim, 0, 0);
        *(unsigned int *)(anim + 0x2ba8) = 0;
        *(int *)(self + 20) = category;
        *(int *)(self + 24) = frame;
    }
}
