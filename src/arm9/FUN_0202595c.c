// flags: -O4,p -noThumb
unsigned int FUN_0202595c(const unsigned char *p, const unsigned char **end) {
    unsigned int n = 0;
    *end = p;
    for (;;) {
        unsigned int d = (unsigned char)(*p - '0');
        if (d > 9) break;
        n = n * 10 + d;
        *end = ++p;
    }
    return n;
}
