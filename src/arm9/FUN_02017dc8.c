// flags: -O4,p -noThumb
extern void FUN_02017e78(unsigned short *, int, int, int, unsigned int, unsigned int);

void FUN_02017dc8(unsigned short *dest, int width, int height, int x, int y, int stride, unsigned int tile, unsigned int palette) {
    if (stride <= 32) {
        FUN_02017e78(dest + (stride * y + x), width, height, stride, tile, palette);
        return;
    }
    {
        int endx = x + width;
        int endy = y + height;
        int xp;
        int yp;
        unsigned short pal = (unsigned short)(palette << 12);
        for (yp = y; yp < endy; yp++) {
            unsigned short *row = dest + ((yp < 32 ? yp : yp + 32) << 5);
            for (xp = x; xp < endx; xp++) {
                int col = xp < 32 ? xp : xp + 0x3e0;
                row[col] = (unsigned short)(tile | pal);
                tile++;
            }
        }
    }
}
