// flags: -O4,s
typedef struct {
    unsigned short interp : 1;
    unsigned short frame : 15;
    unsigned short pad;
    unsigned int value;
} Key;
unsigned int FUN_overlay_17__0211efc0(unsigned char *self, const Key *keys, int count, int time) {
    const Key *last = (keys + count) - 1;
    const Key *next;
    const Key *prev;
    int lastTime = last->frame;
    unsigned int from, to;
    int a, b, c, d, aa, bb, cc, dd;
    int prevTime, num, den;
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
    from = prev->value;
    to = next->value;
    a = from & 0xff;
    b = (from >> 8) & 0xff;
    c = (from >> 16) & 0xff;
    d = from >> 24;
    aa = to & 0xff;
    bb = (to >> 8) & 0xff;
    cc = (to >> 16) & 0xff;
    dd = to >> 24;
    prevTime = prev->frame;
    num = time - (prevTime << 12);
    den = (next->frame - prevTime) << 12;
    if (a != aa) a += (aa - a) * num / den;
    if (b != bb) b += (bb - b) * num / den;
    if (c != cc) c += (cc - c) * num / den;
    if (d != dd) d += (dd - d) * num / den;
    return ((unsigned int)d << 24) | ((unsigned int)c << 16) | ((unsigned int)b << 8) | (unsigned int)a;
}
