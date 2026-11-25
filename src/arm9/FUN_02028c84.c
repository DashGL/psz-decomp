// flags: -O4,p -noThumb
unsigned int FUN_02028c84(const unsigned char *p, int type) {
    unsigned int year;
    year = p[0] * 10 + p[1] - 0x210;
    p += 2;
    if (type == 0x17) {
        year = (year < 50) ? (year + 2000) : (year + 1900);
    } else {
        year = year * 100 + (p[0] * 10 + p[1] - 0x210);
        p += 2;
    }
    return (year << 16) + ((p[0] * 10 + p[1] - 0x210) << 8) + (p[2] * 10 + p[3] - 0x210);
}
