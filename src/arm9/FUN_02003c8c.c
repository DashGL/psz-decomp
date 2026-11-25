// flags: -O4,p -noThumb
#define K1 0x80808080u
#define K2 0xfefefeffu
char *FUN_02003c8c(char *dst, const char *src) {
    const unsigned char *s = (const unsigned char *)src;
    unsigned char *p = (unsigned char *)dst;
    unsigned int align = (unsigned int)s & 3;
    unsigned int c;
    if (((unsigned int)p & 3) == align) {
        if (align) {
            c = *s;
            *p = (unsigned char)c;
            if (!c) return dst;
            align = 3 - align;
            while (align) {
                c = *++s;
                *++p = (unsigned char)c;
                if (!c) return dst;
                --align;
            }
            ++p;
            ++s;
        }
        {
            const unsigned int *ws = (const unsigned int *)s;
            unsigned int *wp = (unsigned int *)p;
            unsigned int v = *ws;
            unsigned int w = (v + K2) & ~v;
            if (!(w & K1)) {
                --wp;
                do {
                    *++wp = v;
                    v = *++ws;
                    w = v + K2;
                    w = w & ~v;
                } while (!(w & K1));
                ++wp;
            }
            p = (unsigned char *)wp;
            s = (const unsigned char *)ws;
        }
    }
    c = *s;
    *p = (unsigned char)c;
    if (c) {
        do {
            c = *++s;
            *++p = (unsigned char)c;
        } while (c);
    }
    return dst;
}
