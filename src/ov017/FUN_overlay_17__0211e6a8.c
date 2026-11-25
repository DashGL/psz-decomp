// flags: -O4,s
extern void *FUN_020ba894(unsigned);
extern void *FUN_overlay_17__0211e828(void *);
extern void *FUN_020ba374(const void *, int *, unsigned);
extern void FUN_overlay_17__0211fa34(void *, void *);
extern void FUN_overlay_17__0211e8a8(void *, const void *, void **, int *);
extern void FUN_overlay_17__0211fa3c(void *, void *, unsigned, unsigned, unsigned);
extern void FUN_overlay_17__0211fa74(void *, void *, unsigned, unsigned, unsigned);
extern void FUN_overlay_17__0211e8c4(void *, void **);
extern void FUN_overlay_17__0211fb60(void *);
extern void *DAT_overlay_17__02126ac8[];

unsigned FUN_overlay_17__0211e6a8(unsigned kind0, unsigned kind1, const void *baseName, const void *name0, const void *name1, unsigned flags) {
    char *self = (char *)FUN_020ba894(0x2be8);
    int size;
    void *buffer;
    int loaded;
    unsigned i;
    if (self) {
        self = (char *)FUN_overlay_17__0211e828(self);
    }
    size = 0;
    buffer = 0;
    loaded = 0;
    *(void **)(self + 0x2be4) = FUN_020ba374(baseName, &loaded, 32);
    size = loaded;
    FUN_overlay_17__0211fa34(self, *(void **)(self + 0x2be4));
    if (name0) {
        FUN_overlay_17__0211e8a8(self, name0, &buffer, &size);
        FUN_overlay_17__0211fa3c(self, buffer, size, kind0, 0);
        FUN_overlay_17__0211e8c4(self, &buffer);
    } else {
        *(unsigned *)(self + 0x2bd8) = kind0;
    }
    if (name1) {
        FUN_overlay_17__0211e8a8(self, name1, &buffer, &size);
        FUN_overlay_17__0211fa74(self, buffer, size, kind1, 1);
        FUN_overlay_17__0211e8c4(self, &buffer);
    } else {
        *(unsigned *)(self + 0x2bdc) = kind1;
    }
    FUN_overlay_17__0211fb60(self);
    for (i = 0; i < 32; i++) {
        if (!DAT_overlay_17__02126ac8[i]) {
            DAT_overlay_17__02126ac8[i] = self;
            break;
        }
    }
    *(unsigned *)(self + 0x2be0) = flags;
    return i;
}
