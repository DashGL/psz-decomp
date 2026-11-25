// flags: -O4,s -noThumb
unsigned int FUN_0201d8dc(unsigned int p, unsigned int i) {
    unsigned int base = p + 12;
    if (base && i < *(unsigned char *)(p + 13)) {
        unsigned int table = base + *(unsigned short *)(p + 18);
        unsigned int stride = *(unsigned short *)table;
        return table + 4 + stride * i;
    }
    return 0;
}
