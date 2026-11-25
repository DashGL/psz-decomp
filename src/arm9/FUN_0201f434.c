// flags: -O3,p -noThumb

unsigned int FUN_0201f434(unsigned int base, unsigned int flags, unsigned int value, unsigned int index) {
    unsigned int idx;
    if (flags & 0x20000000) return value;
    base += value;
    if (flags & 0xc0000000u) {
        unsigned int limit = flags & 0xffff;
        if (flags & 0x40000000) {
            if (index & 1) {
                if (index > limit) {
                    index = (limit >> 1) + 1;
                } else {
                    idx = index >> 1;
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
                    if (index & 2) {
                        index >>= 2;
                        idx = index + 1;
                    } else {
                        idx = index >> 2;
                        index = idx + 1;
                    }
                    {
                        int y = *(short *)(base + idx * 4 + 2);
                        int x = *(short *)(base + idx * 4);
                        int w = *(short *)(base + index * 4 + 2);
                        int z = *(short *)(base + index * 4);
                        int s = (y + y + y + w) >> 2;
                        int c = (x + x + x + z) >> 2;
                        return (unsigned short)c | ((unsigned int)s << 16);
                    }
                } else {
                    idx = index >> 2;
                    goto average;
                }
            } else {
                index >>= 2;
            }
        }
    }
    return *(unsigned int *)(base + index * 4);
average:
    return (unsigned short)((*(short *)(base + idx * 4) + *(short *)(base + idx * 4 + 4)) >> 1) | ((unsigned int)((*(short *)(base + idx * 4 + 2) + *(short *)(base + idx * 4 + 6)) >> 1) << 16);
}
