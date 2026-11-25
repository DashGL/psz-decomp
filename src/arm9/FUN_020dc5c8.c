// flags: -O4,p
unsigned int FUN_020dc5c8(const unsigned char *p) {
    unsigned int x = 0;
    x |= (unsigned int)p[0] << 24;
    x |= (unsigned int)p[1] << 16;
    x |= (unsigned int)p[2] << 8;
    x |= (unsigned int)p[3];
    return ((x >> 24) & 0xffu) | ((x >> 8) & 0xff00u) | ((x << 8) & 0xff0000u) | ((x << 24) & 0xff000000u);
}
