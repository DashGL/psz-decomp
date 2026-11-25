// flags: -O4,p -noThumb
typedef unsigned int u32;
typedef struct { u32 lo, hi; } Pair;
extern void FUN_0206557c(u32, void *, u32);
void FUN_02017048(void *dest, u32 x, u32 y, u32 width, u32 height, u32 color, u32 bits) {
    if (width == 8 && height == 8) {
        FUN_0206557c(color, dest, bits << 3);
        return;
    }
    if (bits == 4) {
        u32 mask, shift, end, col; u32 *p, *limit;
        shift = x * 4;
        end = 32 - (shift + width * 4);
        mask = (((~0u >> shift) << (end + x * 4)) >> end);
        p = (u32 *)dest + y;
        limit = p + height;
        col = color & mask;
        mask = ~mask;
        while (p < limit) {
            *p = col | (*p & mask);
            p++;
        }
    } else {
        u32 lo, hi, end, colLo, colHi; Pair *p, *limit;
        x *= 8;
        lo = ~0u;
        end = 64 - (x + width * 8);
        lo >>= x;
        if (end < 32) {
            lo <<= x;
        } else {
            u32 tmp = end - 32;
            lo = (lo << (x + tmp)) >> tmp;
        }
        hi = ~0u << end;
        if (x < 32) {
            hi >>= end;
        } else {
            u32 tmp = x - 32;
            hi = (hi >> (tmp + end)) << tmp;
        }
        p = (Pair *)dest + y;
        limit = p + height;
        colLo = color & lo;
        colHi = color & hi;
        lo = ~lo;
        hi = ~hi;
        while (p < limit) {
            p->lo = colLo | (p->lo & lo);
            p->hi = colHi | (p->hi & hi);
            p++;
        }
    }
}
