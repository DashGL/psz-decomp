// flags: -O4,s
typedef struct {
    unsigned short h[4];
    int x;
    int y;
} Draw;

struct Obj {
    int pad0[8];
    int f20;
    int f24[8];
    int f44[5];
    int f58;
    int f5c;
    int pad1[5];
    unsigned int f74;
};

extern void FUN_02071d0c(void *);
extern void FUN_020c32b4(void *, unsigned int);
extern void FUN_overlay_4__02122bc8(void *, int, int);
extern void FUN_overlay_4__02122a64(void *, int);

void FUN_overlay_4__02122b48(struct Obj *self, int selected, int first, int mode) {
    Draw draw;
    int valid;
    if (mode != 0) {
        int idx = self->f5c;
        FUN_overlay_4__02122bc8(self, self->f44[idx], self->f24[idx]);
    } else {
        FUN_overlay_4__02122bc8(self, self->f58, self->f20);
    }
    valid = 0;
    if (mode != 0) {
        if (self->f24[self->f5c] > 0) {
            valid = 1;
        }
    } else {
        if (self->f20 > 0) {
            valid = 1;
        }
    }
    if (valid == 1) {
        FUN_02071d0c(&draw);
        draw.h[0] = 0;
        draw.x = 5 << 12;
        draw.y = ((selected - first) * 13 + 250) << 12;
        FUN_020c32b4(&draw, self->f74);
    }
    if (mode != 0) {
        FUN_overlay_4__02122a64(self, mode);
    }
}
