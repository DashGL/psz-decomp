// flags: -O4,p -noThumb
int FUN_02003e24(const char *str1, const char *str2) {
    const unsigned char *p1 = (const unsigned char *)str1;
    const unsigned char *p2 = (const unsigned char *)str2;
    unsigned long c1, c2;
    int diff;
    unsigned long *lp1, *lp2;

    c1 = *p1;
    c2 = *p2;
    if ((diff = c1 - c2) != 0)
        return diff;

    if (((unsigned long)p2 & 3) == ((unsigned long)p1 & 3)) {
        if (((unsigned long)p1 & 3) != 0) {
            if (!c1)
                return 0;
            {
                int k = 3 - ((unsigned long)p1 & 3);
                if (k != 0) {
                    do {
                        unsigned char a = *++p1;
                        unsigned char b = *++p2;
                        if ((diff = a - b) != 0)
                            return diff;
                        if (!a)
                            return 0;
                    } while (--k != 0);
                }
            }
            ++p1;
            ++p2;
        }
        lp1 = (unsigned long *)p1;
        lp2 = (unsigned long *)p2;
        c1 = *lp1;
        c2 = *lp2;
        if (((c1 + 0xfefefefful) & ~c1) & 0x80808080ul) {
            goto tail;
        }
        while (c1 == c2) {
            c1 = *++lp1;
            c2 = *++lp2;
            if ((c1 + 0xfefefefful) & 0x80808080ul) {
                goto tail;
            }
        }
        p1 = (const unsigned char *)lp1 - 1;
        p2 = (const unsigned char *)lp2 - 1;
        goto byte_loop;
tail:
        p1 = (const unsigned char *)lp1;
        p2 = (const unsigned char *)lp2;
        c1 = *p1;
        c2 = *p2;
        if ((diff = c1 - c2) != 0)
            return diff;
    }
byte_loop:
    if (!c1)
        return 0;
    do {
        unsigned char a = *++p1;
        unsigned char b = *++p2;
        if ((diff = a - b) != 0)
            return diff;
        c1 = a;
    } while (c1);
    return 0;
}
