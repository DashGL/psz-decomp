// flags: -O4,s
extern void FUN_overlay_6__0211e690(void *);

struct Elem_eab8 {
    unsigned char pad[0x108];
    int f108;
    int pad2;
    int f110;
    unsigned char rest[0x0c];
};

struct Self_eab8 {
    int f00;
    int f04;
    struct Elem_eab8 elems[9];
    int fA28;
    int fA2C;
};

void FUN_overlay_6__0211eab8(struct Self_eab8 *self) {
    int i;
    float value;
    self->f04 = 1;
    self->f00 = 0;
    self->fA28 = 0;
    self->fA2C = 12288;
    for (i = 0; i < 9; i++) {
        FUN_overlay_6__0211e690(&self->elems[i]);
        if (24 * (i + 1) > 0) value = 0.5f + (float)(98304 * (i + 1));
        else value = (float)(98304 * (i + 1)) - 0.5f;
        self->elems[i].f108 = (int)value - 81920;
        self->elems[i].f110 = self->fA2C;
    }
}
