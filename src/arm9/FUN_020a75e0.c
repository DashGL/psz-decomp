// flags: -O4,s
typedef void (*Pixel)(void *, int, int);

void FUN_020a75e0(char *s, int x, int y, int endx, int endy, Pixel callback) {
    int dy, dx, ay, ax, position, i;
    if (callback) {
        *(Pixel *)(s + 0x1808) = callback;
    }
    dy = endy - y;
    dx = endx - x;
    if (dy == 0 && dx == 0) {
        (*(Pixel *)(s + 0x1808))(s, x, y);
        return;
    }
    ay = dy >= 0 ? dy : -dy;
    ax = dx >= 0 ? dx : -dx;
    if (ax >= ay) {
        int step = dx >= 0 ? 1 : -1;
        int slope;
        position = y << 12;
        slope = (dy << 12) / ax;
        for (i = 0; i <= ax; i++) {
            (*(Pixel *)(s + 0x1808))(s, x, position >> 12);
            x += step;
            position += slope;
        }
    } else {
        int step = dy >= 0 ? 1 : -1;
        int slope;
        position = x << 12;
        slope = (dx << 12) / ay;
        for (i = 0; i <= ay; i++) {
            (*(Pixel *)(s + 0x1808))(s, position >> 12, y);
            position += slope;
            y += step;
        }
    }
}
