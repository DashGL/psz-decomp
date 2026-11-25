// flags: -O4,p -noThumb
extern unsigned int FUN_0206bf78(const signed char *);

unsigned int FUN_0206bf18(signed char *dst, const signed char *src, int size)
{
    int i;
    const signed char *p = src;

    for (i = 0; i < size - 1; i++) {
        dst[i] = *p;
        if (*p == 0) {
            break;
        }
        p++;
    }
    if (i >= size - 1 && size != 0) {
        dst[i] = 0;
    }
    return FUN_0206bf78(src);
}
