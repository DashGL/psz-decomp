// flags: -O4,p -noThumb
typedef unsigned int u32;
typedef unsigned char u8;
typedef struct { u32 lo, hi; } Pair;
struct BitReader { const u8 *cursor; signed char available; u8 byte; };
struct Blit { u32 *destination; const u8 *source; int x, y, width, height; u32 strideBits, inputBits, outputBits, palette; };
extern u32 FUN_02018878(struct BitReader *, int);
void FUN_02017180(struct Blit *p) {
    int x = p->x;
    int y = p->y;
    u32 left = (u32)(x >= 0 ? x : 0);
    int top = y >= 0 ? y : 0;
    u32 right = (u32)((x + p->width < 8) ? (x + p->width) : 8);
    int bottom = (y + p->height < 8) ? (y + p->height) : 8;
    u32 depth, bits, offset;
    const u8 *source;
    u32 stride;
    u32 position;
    int sy = -(y > 0 ? 0 : y);
    int sx = -(x > 0 ? 0 : x);
    bits = p->inputBits;
    stride = p->strideBits;
    offset = (u32)sy * stride + bits * (u32)sx;
    depth = p->outputBits;
    left *= depth;
    right *= depth;
    source = p->source;
    if (depth == 4) {
        u32 palette = p->palette;
        u32 *row = p->destination + top;
        u32 *end = p->destination + bottom;
        for (; row < end; row++, offset += stride) {
            struct BitReader reader;
            u32 value = *row;
            
            reader.cursor = source + (offset >> 3);
            reader.available = 0;
            reader.byte = 0;
            FUN_02018878(&reader, (int)offset % 8);
            for (position = left; position < right; position += 4) {
                u32 pixel = FUN_02018878(&reader, bits);
                if (pixel) {
                    value = (value & ~(0xfu << position)) | ((palette + pixel) << position);
                }
            }
            *row = value;
        }
    } else {
        u32 palette = p->palette;
        Pair *row = (Pair *)p->destination + top;
        Pair *end = (Pair *)p->destination + bottom;
        for (; row < end; row++, offset += stride) {
            struct BitReader reader;
            u32 lo = row->lo;
            u32 hi = row->hi;
            
            reader.cursor = source + (offset >> 3);
            reader.available = 0;
            reader.byte = 0;
            FUN_02018878(&reader, (int)offset % 8);
            for (position = left; position < right; position += 8) {
                u32 pixel = FUN_02018878(&reader, bits);
                if (pixel) {
                    if (position < 32) {
                        lo = ((palette + pixel) << position) | (lo & ~(0xffu << position));
                    } else {
                        u32 sh = position - 32;
                        hi = ((palette + pixel) << sh) | (hi & ~(0xffu << sh));
                    }
                }
            }
            row->lo = lo;
            row->hi = hi;
        }
    }
}
