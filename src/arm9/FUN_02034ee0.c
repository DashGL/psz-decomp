//cpp
// flags: -O4,s
#pragma always_inline on
struct Fixed { int v; inline Fixed() {} inline Fixed(int raw) : v(raw) {} };
struct Vec2 { int x, y; inline Vec2() {} inline Vec2(int a, int b) : x(a), y(b) {} };
extern "C" {
extern Fixed FUN_020bc5cc(const Fixed &, const Fixed &);
extern int FUN_020bca08(const Vec2 *, const Vec2 &, const Vec2 &, const Vec2 &, const Vec2 &);
}
static inline int fx_lt(int a, int b) { if (a < b) return 1; return 0; }
static inline int fx_mul(int a, int b) { return (int)(((long long)a * b + 0x800) >> 12); }
struct Zone {
    Vec2 pts[4];
    int minX, minY, maxX, maxY;
    unsigned char flags;
    signed char shape;
    inline int isFlag1() const { if (flags & 1) return 1; return 0; }
    inline int isFlag2() const { if (flags & 2) return 1; return 0; }
    inline int inBounds(int x, int y) const { if (minX <= x && x <= maxX && minY <= y && y <= maxY) return 1; return 0; }
};
extern "C" int FUN_02034ee0(const Zone *self, const Vec2 *pt) {
    int ret = 0;
    if (self->isFlag1()) {
        int hit = 0;
        if (self->inBounds(pt->x, pt->y)) {
            switch (self->shape) {
            case 0: {
                Fixed rad(self->pts[1].x);
                int px = pt->x;
                int sx = self->pts[0].x;
                int sy = *(const volatile int *)&self->pts[0].y;
                int py = pt->y;
                int dx = sx - px;
                int dy = sy - py;
                Fixed radSq = FUN_020bc5cc(rad, rad);
                int d2 = fx_mul(dx, dx) + fx_mul(dy, dy);
                if (fx_lt(d2, radSq.v)) hit = 1;
                break;
            }
            case 1: hit = 1; break;
            case 2:
                if (FUN_020bca08(pt, Vec2(self->pts[0].x, self->pts[0].y), Vec2(self->pts[1].x, self->pts[1].y), Vec2(self->pts[2].x, self->pts[2].y), Vec2(self->pts[3].x, self->pts[3].y)))
                    hit = 1;
                break;
            }
        }
        if (hit) { if (self->isFlag2()) ret = 2; else ret = 1; }
    }
    return ret;
}
