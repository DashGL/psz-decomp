// flags: -noThumb -O4,p
signed char *FUN_02003dd4(signed char *dst, const signed char *src, unsigned int n) {
    signed char *out = dst;
    while (*out++) {}
    out--;
    while (n) {
        if ((*(volatile signed char *)out++ = *src++) == 0) {
            out--;
            break;
        }
        n--;
    }
    *out = 0;
    return dst;
}
