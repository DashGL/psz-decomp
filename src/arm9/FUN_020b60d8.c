// flags: -O4,s
int FUN_020b60d8(unsigned char *self, unsigned char *mult) {
    if (mult) {
        return (int)(*(unsigned short *)(self + 0x40) * mult[0]) / 10 + *(unsigned char *)(self + 0x54);
    }
    return *(unsigned short *)(self + 0x40) + *(unsigned char *)(self + 0x54);
}
