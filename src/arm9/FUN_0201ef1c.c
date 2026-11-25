// flags: -O4,p -noThumb
unsigned short FUN_0201ef1c(unsigned int base, unsigned int flags, unsigned int index) {
    unsigned short *p;
    unsigned int limit;
    unsigned int idx;
    unsigned int first, second;
    unsigned int x, y;
    unsigned int g, rb;
    if (flags & 0x20000000) {
        return (unsigned short)(flags & 0xffff);
    }
    p = (unsigned short *)(base + (flags & 0xffff));
    if (!(flags & 0xc0000000u)) {
        return p[index];
    }
    limit = (flags & 0x1fff0000) >> 16;
    if (flags & 0x40000000) {
        if (index & 1) {
            if (index > limit) {
                return (p + (limit >> 1))[1];
            }
            idx = index >> 1;
            goto average;
        }
        return p[index >> 1];
    } else {
        unsigned int part = index & 3;
        if (part) {
            if (index > limit) {
                return (p + (limit >> 2))[part];
            }
            if (index & 1) {
                if (index & 2) {
                    second = index >> 2;
                    first = second + 1;
                } else {
                    first = index >> 2;
                    second = first + 1;
                }
                x = p[first];
                y = p[second];
                unsigned int g3 = (x & 0x3e0) * 3;
                unsigned int rb3 = (x & 0x7c1f) * 3;
                g = (g3 + (y & 0x3e0)) >> 2;
                rb = (rb3 + (y & 0x7c1f)) >> 2;
                return (unsigned short)((rb & 0x7c1f) | (g & 0x3e0));
            }
            idx = index >> 2;
            goto average;
        }
        return p[index >> 2];
    }
average:
    x = p[idx];
    y = (p + idx)[1];
    g = ((x & 0x3e0) + (y & 0x3e0)) >> 1;
    rb = ((x & 0x7c1f) + (y & 0x7c1f)) >> 1;
    return (unsigned short)((rb & 0x7c1f) | (g & 0x3e0));
}
