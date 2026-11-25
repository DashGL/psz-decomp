// flags: -O4,p -noThumb
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

u16 FUN_0201f084(const u8 *base, u32 flags, u32 index) {
    if (flags & 0x20000000) {
        return (u16)(flags & 0xffff);
    } else {
        const u8 *p = base + (flags & 0xffff);
        if (!(flags & 0xc0000000u)) {
            return p[index];
        } else {
            u32 limit = (flags & 0x1fff0000) >> 16;
            if (flags & 0x40000000) {
                if (index & 1) {
                    if (index > limit) {
                        return (p + (limit >> 1))[1];
                    } else {
                        return (u16)((p[index >> 1] + (p + (index >> 1))[1]) >> 1);
                    }
                } else {
                    return p[index >> 1];
                }
            } else {
                u32 part = index & 3;
                if (part != 0) {
                    if (index > limit) {
                        return (p + (limit >> 2))[part];
                    } else if (index & 1) {
                        u32 first, x, y; if (index & 2) { index >>= 2; first = index + 1; } else { first = index >> 2; index = first + 1; } x = p[first]; y = p[index]; x = x * 3; return (u16)((x + y) >> 2);
                    } else {
                        return (u16)((p[index >> 2] + (p + (index >> 2))[1]) >> 1);
                    }
                } else {
                    return p[index >> 2];
                }
            }
        }
    }
}
