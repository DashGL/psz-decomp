// flags: -O4,p -noThumb
void FUN_0205e4c8(unsigned int addr, int plane, int brightness) {
    if (brightness < 0) {
        *(volatile unsigned short *)addr = (unsigned short)(plane | 0xc0);
        *(volatile unsigned short *)(addr + 4) = (unsigned short)(-brightness);
    } else {
        *(volatile unsigned short *)addr = (unsigned short)(plane | 0x80);
        *(volatile unsigned short *)(addr + 4) = (unsigned short)brightness;
    }
}
