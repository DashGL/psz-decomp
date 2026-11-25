// flags: -O4,p -noThumb
unsigned int FUN_020213c0(unsigned int p, unsigned int length, unsigned int sum) {
    unsigned int v;
    if (p & 1) {
        while (length > 1) {
            sum += (unsigned short)((*(unsigned char *)p << 8) | *(unsigned char *)(p + 1));
            p += 2;
            length -= 2;
        }
    } else {
        int s = (unsigned short)sum;
        sum = (unsigned short)((s >> 8) | (s << 8));
        while (length > 1) {
            sum += *(unsigned short *)p;
            p += 2;
            length -= 2;
        }
        v = ((sum >> 8) & 0x00ff00ff) | ((sum << 8) & 0xff00ff00);
        sum = (v >> 16) | (v << 16);
    }
    if (length) sum += *(unsigned char *)p << 8;
    v = (sum & 65535) + (sum >> 16);
    v += v >> 16;
    return v & 65535;
}
