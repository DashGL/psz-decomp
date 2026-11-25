// flags: -O4,s
int FUN_020b67d8(unsigned char *self, unsigned char *mult) {
    if (mult) {
        return (int)(*(unsigned short *)(self + 0x42) * mult[2]) / 10 + *(unsigned char *)(self + 0x55);
    }
    return *(unsigned short *)(self + 0x42) + *(unsigned char *)(self + 0x55);
}
