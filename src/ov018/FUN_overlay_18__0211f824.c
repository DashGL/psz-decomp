// flags: -O4,s
extern void *FUN_020ba894(unsigned);
extern void *FUN_020ba374(void *, unsigned *, unsigned);
extern char *FUN_overlay_18__0211f934(void *);
extern void FUN_overlay_18__0211f9a8(void *, void *, void **, unsigned *);
extern void FUN_overlay_18__0211f9c4(void *, void **);
extern void FUN_overlay_18__02120ba8(void *);
extern unsigned FUN_overlay_18__02120a88(void *, void *, unsigned, unsigned, unsigned);
extern unsigned FUN_overlay_18__02120ac0(void *, void *, unsigned, unsigned, unsigned);
extern void *DAT_overlay_18__021565a0[32];

unsigned FUN_overlay_18__0211f824(unsigned first, unsigned second, void *resource, void *texture, void *palette, unsigned mode) {
    char *self = (char *)FUN_020ba894(0x2be8);
    unsigned length;
    void *temporary;
    unsigned size;
    unsigned index;
    if (self) {
        self = FUN_overlay_18__0211f934(self);
    }
    length = 0;
    temporary = 0;
    size = 0;
    *(void **)(self + 0x2be4) = FUN_020ba374(resource, &size, 32);
    length = size;
    *(void **)(self + 904) = *(void **)(self + 0x2be4);
    if (texture) {
        FUN_overlay_18__0211f9a8(self, texture, &temporary, &length);
        FUN_overlay_18__02120a88(self, temporary, length, first, 0);
        FUN_overlay_18__0211f9c4(self, &temporary);
    } else {
        *(unsigned *)(self + 0x2bd8) = first;
    }
    if (palette) {
        FUN_overlay_18__0211f9a8(self, palette, &temporary, &length);
        FUN_overlay_18__02120ac0(self, temporary, length, second, 1);
        FUN_overlay_18__0211f9c4(self, &temporary);
    } else {
        *(unsigned *)(self + 0x2bdc) = second;
    }
    FUN_overlay_18__02120ba8(self);
    for (index = 0; index < 32; index++) {
        if (!DAT_overlay_18__021565a0[index]) {
            DAT_overlay_18__021565a0[index] = self;
            break;
        }
    }
    *(unsigned *)(self + 0x2be0) = mode;
    return index;
}
