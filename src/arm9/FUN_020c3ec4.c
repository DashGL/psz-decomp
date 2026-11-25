// flags: -O4,s
signed char *FUN_020c3ec4(signed char *dst, const signed char *src, unsigned int limit) {
    signed char *original = dst;
    unsigned int n;
    if (dst != 0 && src != 0) {
        while (*dst != 0) {
            dst++;
        }
        n = 0;
        while (*src != 0 && *src != 1 && n < limit) {
            *dst = *src;
            dst++;
            src++;
            n++;
        }
        *dst = 0;
    }
    return original;
}
