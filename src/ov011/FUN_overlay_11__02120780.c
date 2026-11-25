// flags: -O4,s
#pragma opt_common_subs off
typedef struct Key {
    unsigned short interp : 1;
    unsigned short frame : 15;
    unsigned short pad;
    unsigned int w1;
    unsigned int w2;
    short v0, v1, v2, v3;
} Key;
extern void FUN_overlay_11__0212074c(void *, void *, const void *);

void FUN_overlay_11__02120780(unsigned char *self, unsigned char *out, const Key *keys, int count, int time) {
    const Key *last = keys + count - 1;
    int end_frame = last->frame;
    int end_time = end_frame << 12;
    const Key *prev;
    int span2;
    unsigned short u, v, w, z;

    if (time >= end_time) {
        if (*(int *)(self + 0x2ba0) == 2) {
            int start_frame = keys->frame;
            int span = (end_frame - start_frame) << 12;
            time -= end_time;
            if (time >= span) time %= span;
            time += start_frame << 12;
        } else {
            FUN_overlay_11__0212074c(self, out, last);
            return;
        }
    }
    *(int *)(self + 0x2ba4) = 1;
    if (time <= (keys->frame << 12)) {
        FUN_overlay_11__0212074c(self, out, keys);
        return;
    }
    keys++;
    while (time >= (keys->frame << 12)) keys++;
    prev = keys - 1;
    if (!prev->interp) {
        FUN_overlay_11__0212074c(self, out, prev);
        return;
    }
    {
        int delta = time - (prev->frame << 12);
        span2 = (keys->frame - prev->frame) << 12;
        { short a = prev->v0; u = (unsigned short)(a + ((keys->v0 - a) * delta) / span2); }
        { short a = prev->v1; v = (unsigned short)(a + ((keys->v1 - a) * delta) / span2); }
        { short a = prev->v2; w = (unsigned short)(a + ((keys->v2 - a) * delta) / span2); }
        { short a = prev->v3; z = (unsigned short)(a + ((keys->v3 - a) * delta) / span2); }
    }
    *(unsigned int *)out = prev->w1;
    *(unsigned int *)(out + 4) = prev->w2;
    *(unsigned int *)(out + 28) = u | (v << 16);
    *(unsigned int *)(out + 52) = u | (z << 16);
    *(unsigned int *)(out + 72) = w | (z << 16);
    *(unsigned int *)(out + 92) = w | (v << 16);
}
