// flags: -O4,p -noThumb
static inline unsigned short *tile_ptr(unsigned short *base, int x, int y, int w, int h) {
    int bx = x / 32;
    int by = y / 32;
    int rx = x % 32;
    int ry = y % 32;
    int w32 = w / 32;
    int h32 = h / 32;
    int ew = (bx == w32) ? (w % 32) : 32;
    int eh = (by == h32) ? (h % 32) : 32;
    return &base[(by * (w << 5)) + (bx * (eh << 5)) + (ew * ry) + rx];
}

void FUN_020158c4(unsigned short *dest, unsigned short *source, int sx, int sy, int dx, int dy, int dw, int dh, int width, int height) {
    int endy = sy + height;
    int endx = sx + width;
    int sw = (unsigned int)source[0] >> 3;
    int sh = (unsigned int)source[1] >> 3;
    unsigned short *src = source + 6;
    int y, x, tx, ty = dy;
    for (y = sy; y < endy; y++, ty++) {
        for (x = sx, tx = dx; x < endx; x++, tx++) {
            unsigned short *ps = tile_ptr(src, x, y, sw, sh);
            unsigned short *pd = tile_ptr(dest, tx, ty, dw, dh);
            *pd = *ps;
        }
    }
}
