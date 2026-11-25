// flags: -O4,p -noThumb
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;
typedef long long s64;

extern void FUN_0205c6d8(s32, s32);
extern s32 FUN_0205c600(void);

typedef struct {
    u32 pad0[6];
    s32 scaleS;
    s32 scaleT;
    short sinR;
    short cosR;
    s32 transS;
    s32 transT;
    u16 width;
    u16 height;
} TexMat;

void FUN_0201fb28(s32 *m, const TexMat *p) {
    s32 w = p->width << 12;
    s32 h = p->height << 12;
    s32 cosR, sinR, ss, st;
    s32 m00, m01, m10, m11;
    s32 x, y;

    FUN_0205c6d8(h, w);

    cosR = p->cosR;
    ss = p->scaleS;
    sinR = p->sinR;
    st = p->scaleT;

    m00 = (s32)(((s64)ss * cosR) >> 12);
    m10 = (s32)(((s64)ss * sinR) >> 12);
    m11 = (s32)(((s64)st * cosR) >> 12);
    m01 = (s32)(((s64)st * sinR) >> 12);

    m[0] = m00;
    m[5] = m11;
    m[1] = (m01 * FUN_0205c600()) >> 12;

    FUN_0205c6d8(w, h);

    x = (-(s32)p->width << 11) - p->transS * p->width;
    y = p->transT * p->height + (-(s32)p->height << 11);

    m[12] = (s32)(((s64)m00 * x - (s64)m10 * y) >> 8) + ((s32)p->width << 15);
    m[13] = (s32)(((s64)m01 * x + (s64)m11 * y) >> 8) + ((s32)p->height << 15);
    m[4] = (-m10 * FUN_0205c600()) >> 12;
}
