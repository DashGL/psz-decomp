// flags: -O4,s
unsigned int FUN_020d37a4(const unsigned char *p, unsigned int i) {
    unsigned int hi = p[i];
    i++;
    return (unsigned short)((hi << 8) & 0xff00) | p[i];
}
