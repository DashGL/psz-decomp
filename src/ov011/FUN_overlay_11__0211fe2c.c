// flags: -O4,s
extern void *FUN_020ba894(unsigned);
extern void *FUN_020ba374(void *, unsigned *, unsigned);
extern char *FUN_overlay_11__0211ff3c(void *);
extern void FUN_overlay_11__0211ffb0(void *, void *, void **, unsigned *);
extern void FUN_overlay_11__0211ffcc(void *, void **);
extern void FUN_overlay_11__021211b0(void *);
extern unsigned FUN_overlay_11__02121090(void *, void *, unsigned, unsigned, unsigned);
extern unsigned FUN_overlay_11__021210c8(void *, void *, unsigned, unsigned, unsigned);
extern void *DAT_overlay_11__02124a8c[32];

unsigned FUN_overlay_11__0211fe2c(unsigned first, unsigned second, void *resource, void *texture, void *palette, unsigned mode) {
    char *self = (char *)FUN_020ba894(0x2be8);
    unsigned length;
    void *temporary;
    unsigned size;
    unsigned index;
    if (self) {
        self = FUN_overlay_11__0211ff3c(self);
    }
    length = 0;
    temporary = 0;
    size = 0;
    *(void **)(self + 0x2be4) = FUN_020ba374(resource, &size, 32);
    length = size;
    *(void **)(self + 904) = *(void **)(self + 0x2be4);
    if (texture) {
        FUN_overlay_11__0211ffb0(self, texture, &temporary, &length);
        FUN_overlay_11__02121090(self, temporary, length, first, 0);
        FUN_overlay_11__0211ffcc(self, &temporary);
    } else {
        *(unsigned *)(self + 0x2bd8) = first;
    }
    if (palette) {
        FUN_overlay_11__0211ffb0(self, palette, &temporary, &length);
        FUN_overlay_11__021210c8(self, temporary, length, second, 1);
        FUN_overlay_11__0211ffcc(self, &temporary);
    } else {
        *(unsigned *)(self + 0x2bdc) = second;
    }
    FUN_overlay_11__021211b0(self);
    for (index = 0; index < 32; index++) {
        if (!DAT_overlay_11__02124a8c[index]) {
            DAT_overlay_11__02124a8c[index] = self;
            break;
        }
    }
    *(unsigned *)(self + 0x2be0) = mode;
    return index;
}
