// flags: -O4,s
typedef struct {
    unsigned short interp : 1;
    unsigned short frame : 15;
    unsigned short value;
} Key;
extern unsigned short FUN_overlay_18__0211fe5c(void *, int, int, int, int);
unsigned short FUN_overlay_18__0211ff74(unsigned char *self, const Key *keys, int count, int time) {
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
        return FUN_overlay_18__0211fe5c(self, prev->value, next->value, time - (prevTime << 12), (next->frame - prevTime) << 12);
    }
}
