// FUN_02046d00 @ 0x02046d00 (0x88, thumb) - ported from FUN_0204db9c [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
typedef unsigned int u32;
typedef unsigned short u16;
typedef struct { u32 x, y, z; } V3;
typedef struct { u16 v[5]; } C5;
typedef struct {
    u16 a;               /* 0x00 */
    u16 b;               /* 0x02 */
    C5 c;                /* 0x04 */
    u32 d0, d1, d2, d3;  /* 0x10,0x14,0x18,0x1c */
    V3 e;                /* 0x20 */
    V3 f;                /* 0x2c */
    u16 g0, g1, g2, g3;  /* 0x38 */
    u32 h0, h1, h2, h3;  /* 0x40 */
    u32 h4, h5, h6, h7;  /* 0x50 */
    u32 i;               /* 0x60 */
} Desc;

Desc *FUN_02046d00(Desc *dst, Desc *src) {
    dst->a = src->a;
    dst->b = src->b;
    dst->c = src->c;
    dst->d0 = src->d0;
    dst->d1 = src->d1;
    dst->d2 = src->d2;
    dst->d3 = src->d3;
    dst->e = src->e;
    dst->f = src->f;
    dst->g0 = src->g0;
    dst->g1 = src->g1;
    dst->g2 = src->g2;
    dst->g3 = src->g3;
    dst->h0 = src->h0;
    dst->h1 = src->h1;
    dst->h2 = src->h2;
    dst->h3 = src->h3;
    dst->h4 = src->h4;
    dst->h5 = src->h5;
    dst->h6 = src->h6;
    dst->h7 = src->h7;
    dst->i = src->i;
    return dst;
}
