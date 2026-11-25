// flags: -O4,p
unsigned int FUN_020dc60c(unsigned int bits) {
    int i;
    int count = 32 - bits;
    unsigned int x = 0xffffffff;
    for (i = 0; i < count; i++) {
        x <<= 1;
    }
    return ((x >> 24) & 0x000000ffu) | ((x >> 8) & 0x0000ff00u) | ((x << 8) & 0x00ff0000u) | ((x << 24) & 0xff000000u);
}
