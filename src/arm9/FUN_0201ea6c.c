// flags: -O4,p -noThumb
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
extern int FUN_0201edb0(int *, const void *, const void *, u32);
extern void FUN_0205c8cc(const void *, void *);

static inline void cross(const int *a, const int *b, int *c) {
    int x = (int)((a[1] * b[2] - a[2] * b[1]) >> 12);
    int y = (int)((a[2] * b[0] - a[0] * b[2]) >> 12);
    int z = (int)((a[0] * b[1] - a[1] * b[0]) >> 12);
    c[0] = x;
    c[1] = y;
    c[2] = z;
}

#define MIX(i) out[i] = a[i] * step + ((fraction * (b[i] - a[i])) >> 12)

void FUN_0201ea6c(int *out, int time, const u32 *track, const u8 *anim) {
    u32 index, next, flags, threshold;
    int fraction, step;
    const u16 *samples;
    const void *pivot;
    const void *packed;
    int a[9], b[9];
    int missing;
    samples = (const u16 *)(anim + track[1]);
    index = (u32)(time >> 12);
    pivot = anim + *(const u32 *)(anim + 12);
    packed = anim + *(const u32 *)(anim + 16);
    flags = track[0];

    if (index == (u32)(*(const u16 *)(anim + 4) - 1)) {
        if (flags & 0xc0000000) {
            if (flags & 0x40000000) index = (index & 1) + (index >> 1);
            else index = (index & 3) + (index >> 2);
        }
        if (*(const u32 *)(anim + 8) & 2) {
            next = 0;
            goto step1;
        }
        if (FUN_0201edb0(out, pivot, packed, samples[index])) cross(out, out + 3, out + 6);
        else FUN_0205c8cc(out + 6, out + 6);
        return;
    }
    if (flags & 0xc0000000) {
        threshold = (flags & 0x1fff0000) >> 16;
        if (flags & 0x40000000) {
            if (index >= threshold) {
                index = threshold >> 1;
                next = index + 1;
                goto step1;
            }
            index >>= 1;
            next = index + 1;
            step = 2;
            fraction = time & 8191;
        } else {
            if (index >= threshold) {
                index = (index & 3) + (index >> 2);
                next = index + 1;
                goto step1;
            }
            index >>= 2;
            next = index + 1;
            step = 4;
            fraction = time & 16383;
        }
    } else {
        next = index + 1;
step1:
        fraction = time & 4095;
        step = 1;
    }

    missing = 0;
    missing |= FUN_0201edb0(a, pivot, packed, samples[index]);
    missing |= FUN_0201edb0(b, pivot, packed, samples[next]);
    MIX(0); MIX(1); MIX(2);
    MIX(3); MIX(4); MIX(5);
    FUN_0205c8cc(out, out);
    FUN_0205c8cc(out + 3, out + 3);
    if (!missing) {
        MIX(6); MIX(7); MIX(8);
        FUN_0205c8cc(out + 6, out + 6);
    } else {
        cross(out, out + 3, out + 6);
    }
}
