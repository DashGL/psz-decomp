// flags: -O4,s
unsigned short FUN_020d8248(unsigned char *p) {
    int v = *(unsigned short *)(p + 0x4);
    return (unsigned short)(((v >> 8) & 0xff) | ((v << 8) & 0xff00));
}
