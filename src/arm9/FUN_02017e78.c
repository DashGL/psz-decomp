// flags: -O4,p -noThumb
void FUN_02017e78(unsigned short *dest, int width, int height, int pitch, unsigned int tile, unsigned int palette) {
    int col, row;
    unsigned short bits = (unsigned short)(palette << 12);
    for (row = 0; row < height; row++) {
        unsigned short *p = dest;
        for (col = 0; col < width; col++) {
            *p++ = (unsigned short)((tile++) | bits);
        }
        dest += pitch;
    }
}
