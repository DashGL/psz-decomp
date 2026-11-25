// flags: -O4,s
typedef struct {
    unsigned char pad0[0xd8];
    void *children[40];
    unsigned char pad1[0x10];
    int y;
    unsigned short angle;
    unsigned short pad2;
    int amp;
} Obj_19_8640;
extern const short DAT_020ed83c[];
extern void FUN_overlay_19__021984b4(void *, int);
extern int FUN_overlay_19__021989b4(void *);
extern int FUN_02037208(void *, int);

void FUN_overlay_19__02198640(Obj_19_8640 *self) {
    int i;
    for (i = 0; i < 40; i++) {
        char *child = (char *)self->children[i];
        if (child) {
            (*(void (**)(void *, void *))(*(unsigned *)child + 0xc))(child, self);
            child = (char *)self->children[i];
            if (*(int *)(child + 0x1c) == 1) FUN_overlay_19__021984b4(self, *(int *)(child + 4));
        }
    }
    self->angle += (FUN_overlay_19__021989b4(self) == 1 ? 8 : 1) << 8;
    if (self->angle == 0x8000) {
        self->amp = FUN_02037208(self, 3) << 10;
    }
    self->y = (int)(((long long)self->amp * ((int)DAT_020ed83c[((int)self->angle >> 4) * 2 + 1] + 0x1000) + 0x800) >> 12) + 0x1000;
}
