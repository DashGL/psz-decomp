// flags: -O4,s
typedef struct { short h[4]; unsigned int xy[2]; } Draw;
extern void FUN_overlay_4__02122bc8(void *, int, int);
extern void FUN_overlay_4__02122a64(void *, int);
extern void FUN_02071d0c(void *);
extern void FUN_020c32b4(void *, unsigned int);
struct Self_02122aec {
    int pad0[8];
    int f20;
    int arr1[8];
    int arr2[4];
    int f54;
    int f58;
    int idx;
    int pad1[5];
    unsigned int f74;
};
void FUN_overlay_4__02122aec(struct Self_02122aec *self, int mode) {
    Draw draw;
    unsigned int delta;
    if (mode) {
        int index = self->idx;
        FUN_overlay_4__02122bc8(self, self->arr2[index], self->arr1[index]);
    } else {
        FUN_overlay_4__02122bc8(self, self->f58, self->f20);
    }
    delta = (unsigned int)self->f54 - self->f58;
    FUN_02071d0c(&draw);
    draw.h[0] = 1;
    draw.xy[0] = 0x5000;
    draw.xy[1] = (13 * delta + 250) << 12;
    FUN_020c32b4(&draw, self->f74);
    if (mode) FUN_overlay_4__02122a64(self, mode);
}
