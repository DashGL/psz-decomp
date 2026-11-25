// flags: -O4,s
typedef struct { unsigned short *data; int w; int h; } Grid;
unsigned short FUN_overlay_14__0211fda8(Grid *g, int x, int y) {
    unsigned short *p = g->data;
    if (p == 0) return 0xffff;
    if (x >= 0 && x <= g->w && y >= 0 && y <= g->h) {
        return p[(unsigned short)(x + y * g->w)];
    }
    return 0xffff;
}
