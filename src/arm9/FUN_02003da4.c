// flags: -noThumb -O4,p
signed char *FUN_02003da4(signed char *dst, const signed char *src) {
    signed char *out = dst;
    while (*out++) {}
    out--;
    while (*out++ = *src++) {}
    return dst;
}
