// flags: -O4,s
int FUN_020b6568(unsigned char *self, unsigned char *mult) {
    if (mult) {
        return (int)(*(unsigned short *)(self + 0x48) * mult[1]) / 10 + *(unsigned char *)(self + 0x58);
    }
    return *(unsigned short *)(self + 0x48) + *(unsigned char *)(self + 0x58);
}
