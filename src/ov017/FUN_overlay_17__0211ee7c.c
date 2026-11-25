// flags: -O4,s
typedef struct {
    unsigned short interp : 1;
    unsigned short frame : 15;
    short value;
} Key;
int FUN_overlay_17__0211ee7c(unsigned char *self, const Key *keys, int count, int time) {
    const Key *last = (keys + count) - 1;
    const Key *next;
    const Key *prev;
    int lastTime = last->frame;
    if (time >= (lastTime << 12)) {
        if (*(int *)(self + 0x2ba0) == 2) {
            int firstTime = keys[0].frame;
            int span = (lastTime - firstTime) << 12;
            time -= (lastTime << 12);
            if (time >= span) {
                time %= span;
            }
            time += (firstTime << 12);
        } else {
            return last->value;
        }
    }
    *(int *)(self + 0x2ba4) = 1;
    if (time <= (keys[0].frame << 12)) {
        return keys[0].value;
    }
    next = keys + 1;
    while (time >= (next->frame << 12)) {
        next++;
    }
    prev = next - 1;
    if (!prev->interp) {
        return prev->value;
    }
    {
        int prevTime = prev->frame;
        int delta = (next->value - prev->value) * (time - (prevTime << 12));
        return prev->value + delta / ((next->frame - prevTime) << 12);
    }
}
