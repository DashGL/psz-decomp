// flags: -O4,p -noThumb
char *FUN_02003d54(char *dst, const char *src, unsigned int n) {
    char *p = dst;
    while (n != 0) {
        if ((*p++ = *src++) == '\0') {
            while (--n != 0) {
                *p++ = '\0';
            }
            break;
        }
        --n;
    }
    return dst;
}
