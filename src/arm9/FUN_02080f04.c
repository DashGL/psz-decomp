// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xc4, exact bytes and relocation targets.
// flags: -O4,s

struct Vec3_80F04 {
    int x, y, z;
};

struct Sub80F04 {
    int f0;
};

struct Self80F04 {
    void *vtbl0;
    struct Sub80F04 *f4;
    unsigned char pad8[0x1c - 8];
    struct Vec3_80F04 f1c;
    unsigned char pad28[0x30 - 0x28];
    void *vtbl30;
    unsigned char pad34[0x40 - 0x34];
    short f40;
    short f42;
    int f44;
    int f48;
    int f4c;
    int f50;
    unsigned char f54;
    unsigned char f55;
    unsigned char pad56[2];
    int f58;
    int f5c;
    int f60;
    short f64[20];
    short f8c[20];
    short fb4;
    unsigned char padb6[2];
    int fb8;
    int fbc;
};

extern void *DAT_020fa718;
extern void *DAT_020fa740;
extern void FUN_0203020c(void *, int, int);
extern int FUN_0203068c(void *);
extern void FUN_02076f0c(void *, int, int);
extern int FUN_02030dd0(void *);
extern unsigned char FUN_02033644(int);
extern void *FUN_020ba894(int);
extern int FUN_020306e4(void *, int, int, int);

struct Self80F04 *FUN_02080f04(struct Self80F04 *self, int a1) {
    struct Vec3_80F04 tmp;
    int i;
    void *p;

    FUN_0203020c(self, a1, 9);
    FUN_02076f0c(&self->vtbl30, FUN_0203068c(self), 1);
    self->vtbl0 = &DAT_020fa718;
    self->vtbl30 = &DAT_020fa740;
    self->f44 = self->f4->f0;
    self->f48 = FUN_02030dd0(self);
    self->f4c = 0;
    self->f50 = 0;
    self->f54 = 0;
    self->f55 = 0;
    self->f58 = 0;
    self->f5c = 0;
    self->f60 = 0;
    self->fb4 = 0;
    self->fb8 = 0;
    tmp = self->f1c;
    self->fbc = tmp.y;
    for (i = 0; i < 20; i++) {
        self->f64[i] = 0;
        self->f8c[i] = 0;
    }
    self->f54 = FUN_02033644(20);
    self->f40 = 0;
    self->f42 = 4;
    p = FUN_020ba894(8);
    if (p != 0) {
        p = (void *)FUN_020306e4(p, self->f44, 1, 1);
    }
    self->f4c = (int)p;
    return self;
}
