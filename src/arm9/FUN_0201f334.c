// flags: -O4,p -noThumb
unsigned int FUN_0201f334(unsigned int base, unsigned int flags, unsigned int value, unsigned int index) {
    if (flags & 0x20000000) return value;
    base += value;
    if (flags & 0xc0000000u) {
        unsigned int limit = flags & 0xffff;
        if (flags & 0x40000000) {
            if (index & 1) {
                if (index > limit) {
                    index = (limit >> 1) + 1;
                } else {
                    index >>= 1;
                    goto average;
                }
            } else {
                index >>= 1;
            }
        } else {
            unsigned int part = index & 3;
            if (part) {
                if (index > limit) {
                    index = (limit >> 2) + part;
                } else if (index & 1) {
                    unsigned int first, x, y;
                    if (index & 2) {
                        index >>= 2;
                        first = index + 1;
                    } else {
                        first = index >> 2;
                        index = first + 1;
                    }
                    if (flags & 0x10000000) {
                        x = *(short *)(base + first * 2);
                        y = *(short *)(base + index * 2);
                    } else {
                        x = *(unsigned int *)(base + first * 4);
                        y = *(unsigned int *)(base + index * 4);
                    }
                    x = x * 3; return (int)(x + y) >> 2;
                } else {
                    index >>= 2;
                    goto average;
                }
            } else {
                index >>= 2;
            }
        }
    }
    if (flags & 0x10000000) return *(short *)(base + index * 2);
    return *(unsigned int *)(base + index * 4);
average:
    {
        unsigned int x, y;
        if (flags & 0x10000000) {
            const short *q = (const short *)base + index;
            x = *(short *)(base + index * 2);
            y = q[1];
        } else {
            x = *(unsigned int *)(base + index * 4);
            y = *(unsigned int *)(base + index * 4 + 4);
        }
        return (int)(x + y) >> 1;
    }
}
