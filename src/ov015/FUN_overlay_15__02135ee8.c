// flags: -O4,s
typedef struct Self Self;
struct Vtbl {
    void *a;
    void (*fn)(Self *, int);
};
struct Self {
    int pad[5];
    struct Vtbl *vtbl;
    void *f18;
    void *f1c;
    int f20;
    int f24;
    void *f28;
    unsigned short f2c;
    unsigned char f2e;
    unsigned char f2f;
};
extern unsigned char *DAT_0213e900;
extern Self *FUN_overlay_15__02135bd0(void *);
extern void *FUN_overlay_15__02136f40(int, int, int, int *);
#pragma thumb off
extern unsigned int FUN_02017ed4(int, int);
extern void FUN_02017d40(void *, void *, int, int, int);
#pragma thumb reset

void *FUN_overlay_15__02135ee8(int screen, unsigned char width, unsigned char height, unsigned char forward, unsigned int *size, int font) {
    int start;
    Self *self;
    unsigned char *base;
    unsigned char *fnt;
    self = FUN_overlay_15__02135bd0(*(void **)(DAT_0213e900 + 0x670));
    self->f2e = width;
    self->f2f = height;
    self->f28 = FUN_overlay_15__02136f40(screen, width * height, forward, &start);
    self->f2c = start;
    *size = FUN_02017ed4(width, height);
    base = (unsigned char *)(screen == 1 ? 0x06600000 : 0x06400000);
    base += start << 7;
    FUN_02017d40(self, base, width, height, 4);
    self->vtbl->fn(self, 0);
    fnt = DAT_0213e900 + font * 8;
    self->f18 = self;
    self->f1c = fnt;
    self->f20 = 1;
    self->f24 = 1;
    return self;
}
