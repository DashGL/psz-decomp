// flags: -O4,p -noThumb
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;

extern int FUN_0201edb0(int *, const void *, const void *, u32);
extern void FUN_0205c8cc(const void *, void *);

static inline void Cross(int *out) {
    int x = (out[1] * out[5] - out[2] * out[4]) >> 12;
    int y = (out[2] * out[3] - out[0] * out[5]) >> 12;
    int z = (out[0] * out[4] - out[1] * out[3]) >> 12;
    out[6] = x;
    out[7] = y;
    out[8] = z;
}

void FUN_0201e654(int *out, int time, const u32 *track, const u8 *anim)
{
    u32 flags = track[0];
    u32 index = (u32)(time >> 12);
    const u16 *samples = (const u16 *)(anim + track[1]);
    const void *pivot = anim + *(const u32 *)(anim + 12);
    const void *packed = anim + *(const u32 *)(anim + 16);
    u32 threshold;
    u32 first;
    u32 second;

    if (flags & 0xc0000000) {
        threshold = (flags & 0x1fff0000) >> 16;
        if (flags & 0x40000000) {
            if (index & 1) {
                if (index > threshold) {
                    index = (threshold >> 1) + 1;
                    goto direct;
                }
                first = index >> 1;
                goto half;
            } else {
                index >>= 1;
                goto direct;
            }
        } else {
            if (index & 3) {
                if (index > threshold) {
                    index = (index & 3) + (threshold >> 2);
                    goto direct;
                }
                if (index & 1) {
                    int other[9];
                    int missing = 0;
                    if (index & 2) {
                        second = index >> 2;
                        first = second + 1;
                    } else {
                        first = index >> 2;
                        second = first + 1;
                    }
                    missing |= FUN_0201edb0(out, pivot, packed, samples[first]);
                    missing |= FUN_0201edb0(other, pivot, packed, samples[second]);
                    out[0] = out[0] * 3 + other[0];
                    out[1] = out[1] * 3 + other[1];
                    out[2] = out[2] * 3 + other[2];
                    out[3] = out[3] * 3 + other[3];
                    out[4] = out[4] * 3 + other[4];
                    out[5] = out[5] * 3 + other[5];
                    FUN_0205c8cc(out, out);
                    FUN_0205c8cc(out + 3, out + 3);
                    if (!missing) {
                        out[6] = out[6] * 3 + other[6];
                        out[7] = out[7] * 3 + other[7];
                        out[8] = out[8] * 3 + other[8];
                        FUN_0205c8cc(out + 6, out + 6);
                    } else {
                        Cross(out);
                    }
                    return;
                } else {
                    first = index >> 2;
                    goto half;
                }
            } else {
                index >>= 2;
                goto direct;
            }
        }
    } else {
        goto direct;
    }

half:
    {
        int other[9];
        int missing = 0;
        missing |= FUN_0201edb0(out, pivot, packed, samples[first]);
        missing |= FUN_0201edb0(other, pivot, packed, (samples + first)[1]);
        out[0] = out[0] + other[0];
        out[1] = out[1] + other[1];
        out[2] = out[2] + other[2];
        out[3] = out[3] + other[3];
        out[4] = out[4] + other[4];
        out[5] = out[5] + other[5];
        FUN_0205c8cc(out, out);
        FUN_0205c8cc(out + 3, out + 3);
        if (!missing) {
            out[6] = out[6] + other[6];
            out[7] = out[7] + other[7];
            out[8] = out[8] + other[8];
            FUN_0205c8cc(out + 6, out + 6);
        } else {
            Cross(out);
        }
        return;
    }

direct:
    if (FUN_0201edb0(out, pivot, packed, samples[index])) {
        Cross(out);
    } else {
        FUN_0205c8cc(out + 6, out + 6);
    }
}
