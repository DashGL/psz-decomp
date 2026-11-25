//cpp
// flags: -O4,s
struct Draw {
    unsigned short h[4];
    int xy[2];
};
struct Widget {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void *entry(int);
    virtual void status(int *, int);
    virtual int count();
    int selected, total, unused, mode;
    int fields[16];
    int top, renderer, priorTop, priorCount;
    unsigned int flags;
    void *rows[4];
};
extern "C" {
void FUN_020aef3c(void *, void *);
void FUN_02071d0c(Draw *);
void FUN_02090b44(Draw *);
void FUN_020c32b4(Draw *, int);
void FUN_020aecec(void *, int, void *, int *);
#pragma thumb off
void FUN_020144f0(void);
void FUN_02014714(void);
#pragma thumb on
}
extern "C" int FUN_020af1ec(Widget *self) {
    Draw digits, scroll, selected, left, right;
    int status[2], count, start;
    count = self->count();
    if (self->priorCount != count || (self->flags & 1)) {
        self->priorCount = count;
        self->total = count;
        self->selected = 0;
        self->top = 0;
        self->flags = (self->flags & ~1U) | 2;
    }
    start = self->selected - self->top;
    if (start < 0) start += count;
    if (self->priorTop != start || (self->flags & 2)) {
        self->priorTop = start;
        for (int i = 0; i < 4; i++) {
            if (self->rows[i]) {
                int index = start + i;
                if (count >= 4 && index >= count) index -= count;
                FUN_020aef3c(self->rows[i], self->entry(index));
            }
        }
        self->flags &= ~2U;
    }
    FUN_020144f0();
    FUN_02071d0c(&digits);
    FUN_02090b44(&digits);
    digits.xy[0] = 0xd0000;
    digits.xy[1] = 0x33000;
    digits.h[0] = count / 10 + 7;
    FUN_020c32b4(&digits, self->renderer);
    digits.xy[0] = 0xd8000;
    digits.h[0] = count % 10 + 7;
    FUN_020c32b4(&digits, self->renderer);
    digits.xy[0] = 0xe0000;
    digits.h[0] = 17;
    FUN_020c32b4(&digits, self->renderer);
    if (count > 4) {
        FUN_02071d0c(&scroll);
        FUN_02090b44(&scroll);
        scroll.h[0] = 18;
        scroll.xy[0] = 0xf9000;
        scroll.xy[1] = (93 * start / (count - 4) + 61) << 12;
        FUN_020c32b4(&scroll, self->renderer);
    }
    for (int i = 0; i < 4; i++) {
        if (self->rows[i]) {
            int index = start + i;
            if (count >= 4 && index >= count) index -= count;
            self->status(status, index);
            int renderer = self->renderer;
            FUN_020aecec(self->rows[i], renderer, self->entry(index), status);
        }
    }
    if (count > 0) {
        FUN_02071d0c(&selected);
        FUN_02090b44(&selected);
        selected.h[0] = 19;
        selected.xy[0] = 0x80000;
        selected.xy[1] = (31 * self->top + 62) << 12;
        FUN_020c32b4(&selected, self->renderer);
    }
    if (!self->mode) {
        FUN_02071d0c(&left);
        FUN_02090b44(&left);
        left.h[0] = 21;
        left.xy[0] = 0x8000;
        left.xy[1] = 0x30000;
        FUN_020c32b4(&left, self->renderer);
    } else {
        FUN_02071d0c(&right);
        FUN_02090b44(&right);
        right.h[0] = 21;
        right.xy[0] = 0x3a000;
        right.xy[1] = 0x30000;
        FUN_020c32b4(&right, self->renderer);
        FUN_02090b44(&right);
        right.h[0] = 22;
        right.xy[0] = 0x8000;
        right.xy[1] = 0x30000;
        FUN_020c32b4(&right, self->renderer);
    }
    FUN_02014714();
    return 0;
}
