// flags: -O4,s
void FUN_02080c54(unsigned short *grid, int *bounds) {
    int found = 0, x, padding;
    unsigned short *p;
    int y;
    for (x = 0; x < 16; x++) {
        p = grid + x;
        for (y = 0; y < 48; y++) {
            if (*p) {
                found = 1;
                bounds[0] = x << 3;
                break;
            }
            p += 16;
        }
        if (found) break;
    }
    if (!found) {
        bounds[0] = 0;
        bounds[1] = 8;
    } else {
        bounds[1] = 128;
        for (x = 15; x >= (bounds[0] >> 3); x--) {
            p = grid + x;
            for (y = 0; y < 48; y++) {
                if (*p) {
                    bounds[1] = (x << 3) + 8;
                    x = 0;
                    break;
                }
                p += 16;
            }
        }
    }
    bounds[0] -= 8;
    bounds[1] += 8;
    if (bounds[1] - bounds[0] < 48) {
        padding = ((52 - (bounds[1] - bounds[0])) / 8) << 2;
        bounds[0] -= padding;
        bounds[1] += padding;
    }
    if (bounds[0] < 0) bounds[0] = 0;
    if (bounds[1] > 128) bounds[1] = 128;
}
