// flags: -O4,s
unsigned short FUN_020d827c(unsigned char *p) {
    int v = *(unsigned short *)(p + 0xc);
    return (unsigned short)(((v >> 8) & 0xff) | ((v << 8) & 0xff00));
}
