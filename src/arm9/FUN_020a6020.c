// flags: -O4,p
void FUN_020a6020(unsigned int *out, int x, int y, int priority,
                  int mode, int mosaic, int effect, int shape,
                  int color, int charName, int cParam, int rsParam) {
    if (effect == 0x100 || effect == 0x300) {
        if (mode == 3) {
            *out = (((((unsigned int)x & 0x1ff) << 16) |
                    (shape | ((mosaic << 12) | ((mode << 10) | ((rsParam << 25) | (y & 0xff)))))) |
                    effect);
        } else {
            *out = (((((unsigned int)x & 0x1ff) << 16) |
                    (shape | ((mosaic << 12) | ((mode << 10) | (((rsParam << 25) | (color << 13)) | (y & 0xff)))))) |
                    effect);
        }
    } else {
        if (mode == 3) {
            *out = (((((unsigned int)x & 0x1ff) << 16) |
                    (shape | ((mosaic << 12) | ((y & 0xff) | (mode << 10))))) |
                    effect);
        } else {
            *out = (((((unsigned int)x & 0x1ff) << 16) |
                    (shape | ((mosaic << 12) | ((mode << 10) | ((color << 13) | (y & 0xff)))))) |
                    effect);
        }
    }
    ((unsigned short *)out)[2] = (unsigned short)((cParam << 12) | (charName | (priority << 10)));
}
