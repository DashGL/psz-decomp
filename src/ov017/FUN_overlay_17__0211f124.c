// flags: -O4,s
#pragma opt_common_subs off
extern void FUN_overlay_17__0211f0f0(void *, void *, const void *);
typedef struct {
    unsigned short interp : 1;
    unsigned short time : 15;
    unsigned short pad;
    int x, y;
    short a, b, c, d;
} Key;

void FUN_overlay_17__0211f124(int *self, unsigned int *out, const Key *keys, int count, int frame) {
    const Key *last = keys + count - 1;
    int end = last->time;
    int end_fx = end << 12;
    const Key *prev;
    if (frame >= end_fx) {
        if (self[0x2ba0 / 4] == 2) {
            int f0 = keys->time;
            int s0 = (end - f0) << 12;
            frame -= end_fx;
            if (frame >= s0) {
                frame %= s0;
            }
            frame += f0 << 12;
        } else {
            FUN_overlay_17__0211f0f0(self, out, last);
            return;
        }
    }
    self[0x2ba4 / 4] = 1;
    if (frame <= (keys->time << 12)) {
        FUN_overlay_17__0211f0f0(self, out, keys);
        return;
    }
    keys++;
    while (frame >= (keys->time << 12)) {
        keys++;
    }
    prev = keys - 1;
    if (!prev->interp) {
        FUN_overlay_17__0211f0f0(self, out, prev);
        return;
    }
    {
        int first = prev->time;
        int elapsed = frame - (first << 12);
        int span = (keys->time - first) << 12;
        unsigned short a, b, c, d;
        short a0, b0, c0, d0;
        a0 = prev->a; a = a0 + ((keys->a - a0) * elapsed) / span;
        b0 = prev->b; b = b0 + ((keys->b - b0) * elapsed) / span;
        c0 = prev->c; c = c0 + ((keys->c - c0) * elapsed) / span;
        d0 = prev->d; d = d0 + ((keys->d - d0) * elapsed) / span;
        out[0] = prev->x;
        out[1] = prev->y;
        out[7] = a | ((unsigned int)b << 16);
        out[13] = a | ((unsigned int)d << 16);
        out[18] = c | ((unsigned int)d << 16);
        out[23] = c | ((unsigned int)b << 16);
    }
}
