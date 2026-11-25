// flags: -O4,p -noThumb
unsigned int FUN_0201d83c(unsigned int p, unsigned int i) {
    if (p && i < *(unsigned char *)(p + 7)) return p + *(unsigned short *)(p + 10) + i * 16;
    return 0;
}
