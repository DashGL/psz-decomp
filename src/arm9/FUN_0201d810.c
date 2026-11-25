// flags: -O4,p -noThumb
unsigned int FUN_0201d810(unsigned int p, unsigned int i) {
    if (p && i < *(unsigned char *)(p + 6)) return p + *(unsigned short *)(p + 8) + i * 16;
    return 0;
}
