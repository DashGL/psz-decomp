// flags: -O4,s
extern unsigned int DAT_021a1064[];
extern void FUN_overlay_22__02199f98(void *, void *, void *, void *);
extern void *FUN_overlay_22__02197fd0(void *);
extern void FUN_overlay_22__02197fe8(void *);
extern void FUN_overlay_22__0219a05c(void *, int);
extern void FUN_overlay_22__0219a070(void *, int);
void *FUN_overlay_22__02198000(unsigned char *self, void *owner, void *data, void *record) {
    unsigned char *p;
    FUN_overlay_22__02199f98(self, owner, data, record);
    *(unsigned int **)self = DAT_021a1064;
    p = self + 0x5c;
    do {
        FUN_overlay_22__02197fd0(p);
        p[20] = 0;
        p[21] = 0;
        p += 24;
    } while (p < self + 0x134);
    self[0x134] = 0;
    self[0x135] = 0;
    self[0x136] = 0;
    self[0x137] = 0;
    self[0x138] = 0;
    *(short *)(self + 0x13a) = 0;
    *(int *)(self + 0x13c) = 0;
    *(int *)(self + 0x140) = 0;
    *(int *)(self + 0x144) = 4;
    *(int *)(self + 0x148) = 0;
    FUN_overlay_22__02197fe8(self + 0x14c);
    *(int *)(self + 0x13c) = 30 * (*(signed char **)((*(char **)(self + 8)) + 0x3c))[5];
    FUN_overlay_22__0219a05c(self, 0);
    FUN_overlay_22__0219a070(self, 0);
    return self;
}
