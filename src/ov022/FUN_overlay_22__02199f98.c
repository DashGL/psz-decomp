// flags: -O4,s
typedef struct { int v; } Single;
extern unsigned int DAT_021a11f4[];
extern const Single DAT_020ed0a0;
extern void FUN_02035408(void *, int, int, int);
extern unsigned int FUN_02035b60(unsigned int);
extern void FUN_overlay_22__0219a070(void *, int);
extern void FUN_overlay_22__0219aa84(void *);
void *FUN_overlay_22__02199f98(int *self, void *owner, void *data, void *record) {
    const Single *d;
    *(void **)self = DAT_021a11f4;
    self[1] = (int)owner;
    self[2] = (int)data;
    self[3] = (int)record;
    FUN_02035408(self + 4, 0, 0, 0);
    FUN_02035408(self + 7, 0, 0, 0);
    ((short *)self)[20] = 0;
    ((short *)self)[21] = 0;
    ((short *)self)[22] = 0;
    FUN_02035408(self + 12, 0, 0, 0);
    ((short *)self)[30] = 0;
    ((short *)self)[31] = 0;
    ((short *)self)[32] = 0;
    d = &DAT_020ed0a0;
    self[17] = 0;
    self[18] = 0;
    self[19] = 0;
    self[20] = 0;
    *(Single *)(self + 21) = *d;
    ((short *)self)[44] = FUN_02035b60(65536);
    FUN_overlay_22__0219a070(self, 0);
    FUN_overlay_22__0219aa84(self);
    return self;
}
