// flags: -O4,p -noThumb
extern unsigned int DAT_021181a0[];

static inline unsigned short bswap16(unsigned short x) {
    return (unsigned short)(((int)x >> 8) | ((int)x << 8));
}

unsigned int FUN_02022a90(unsigned char *packet, unsigned short *ports) {
    unsigned int p;
    unsigned int node;
    for (node = DAT_021181a0[2]; node != 0; node = *(unsigned int *)(node + 0x68)) {
        p = *(unsigned int *)(node + 0xa4);
        if (p != 0 && *(unsigned int *)p != 0 && *(unsigned char *)(p + 8) == 1) {
            if (*(unsigned short *)(p + 10) == bswap16(ports[1])) {
                unsigned short port = *(unsigned short *)(p + 0x18);
                if (port == 0 || port == bswap16(ports[0])) {
                    unsigned int addr = *(unsigned int *)(p + 0x1c);
                    if (addr == 0 || addr == (((unsigned int)bswap16(*(unsigned short *)(packet + 12)) << 16) | bswap16(*(unsigned short *)(packet + 14)))) {
                        return p;
                    }
                }
            }
        }
    }
    return 0;
}
