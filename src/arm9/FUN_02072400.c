// flags: -O2,s
struct S {
    int f00;
    int f04;
    int f08;
    int f0c;
    short f10;
    char f12;
    char f13;
    char f14;
    char f15;
    short f16;
    short f18[5];
    short f22;
    int f24;
    int f28;
};
struct S *FUN_02072400(struct S *self) {
    unsigned int i;
    self->f14 = 0;
    self->f00 = -1;
    self->f08 = 0;
    self->f0c = 0;
    self->f10 = 0;
    self->f12 = 0;
    self->f13 = 0;
    self->f16 = 0;
    self->f04 = 0;
    self->f24 = 2;
    self->f28 = 4096;
    for (i = 0; i < 5; i++) {
        self->f18[i] = 0;
    }
    return self;
}
