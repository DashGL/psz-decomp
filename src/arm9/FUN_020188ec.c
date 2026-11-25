// flags: -O4,p -noThumb
extern volatile unsigned short *DAT_020ec024[];

void FUN_020188ec(int *width, int *height, int index) {
    int shape = (*DAT_020ec024[index] & 0xc000) >> 14;
    int layer = index & 3;
    int mode;
    if (index <= 3) {
        mode = *(volatile unsigned int *)0x04000000 & 7;
    } else {
        mode = *(volatile unsigned int *)0x04001000 & 7;
    }
    if ((layer == 2 && (mode == 2 || mode >= 4)) || (layer == 3 && mode >= 1)) {
        *width = 16 << shape;
        *height = 16 << shape;
    } else {
        *width = (shape & 1) ? 64 : 32;
        *height = (shape & 2) ? 64 : 32;
    }
}
