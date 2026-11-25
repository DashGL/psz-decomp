// flags: -O4,p -noThumb
unsigned int FUN_02017ed4(unsigned int x, unsigned int y) {
    unsigned int a = x >> 3;
    unsigned int b = y >> 3;
    unsigned int c = ((x & 2) >> 1) + (x & 1);
    unsigned int e = (x & 4) >> 2;
    unsigned int d = ((y & 2) >> 1) + (y & 1);
    unsigned int f = (y & 4) >> 2;
    unsigned int v = 0;
    v += a * b;
    v += b * (c * 2 + e);
    v += a * (d * 2 + f);
    v += (c + e) * (d + f);
    return v;
}
