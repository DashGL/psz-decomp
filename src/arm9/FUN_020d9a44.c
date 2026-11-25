// flags: -O4,p
void FUN_020d9a44(char *self, const unsigned char *source, int length, unsigned char *out, unsigned char *volatile port) {
    unsigned int flags;
    if (length < 5) return;
    flags = source[0];
    out[0] = source[1];
    out[1] = source[2];
    out[2] = source[3];
    out[3] = source[4];
    if (flags & 16) {
        unsigned char *p;
        if (length - 5 < 2) return;
        p = port;
        p[0] = source[5];
        p[1] = source[6];
    } else {
        *(unsigned short *)port = *(unsigned short *)(self + 0x6ac);
    }
}
