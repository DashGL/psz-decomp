// flags: -O4,p -noThumb
signed char *FUN_02003f6c(const signed char *p, int value) {
    signed char needle = (signed char)value;
    signed char c = *p++;
    while (c) {
        if (c == needle) return (signed char *)(p - 1);
        c = *p++;
    }
    if (needle != 0) return 0;
    return (signed char *)(p - 1);
}
