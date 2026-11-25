// flags: -O4,p
extern int FUN_020da5c4(int, int, int, unsigned char *, int);
int FUN_020da680(int a, int b, int c, unsigned int d) {
    unsigned char buf[12];
    buf[0] = 0xfd;
    buf[1] = 0xfc;
    buf[2] = 0x1e;
    buf[3] = 0x66;
    buf[4] = 0x6a;
    buf[5] = 0xb2;
    d = (unsigned char)(d >> 24) | ((d >> 8) & 0xff00) | ((d << 8) & 0xff0000) | ((d << 24) & 0xff000000u);
    {
        unsigned char *dst = buf + 6;
        unsigned char *src = (unsigned char *)&d;
        dst[0] = src[0];
        dst[1] = src[1];
        dst[2] = src[2];
        dst[3] = src[3];
    }
    return FUN_020da5c4(a, b, c, buf, 10);
}
