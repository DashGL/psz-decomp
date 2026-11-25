// flags: -O4,p -noThumb
extern const unsigned char DAT_020eb958[];
static inline int my_tolower(int c) {
    return ((c < 0) || (c >= 0x80)) ? c : (int)DAT_020eb958[c];
}
int FUN_02008380(const char *s1, const char *s2) {
    unsigned char c1, c2;
    while (1) {
        c1 = (unsigned char)my_tolower(*(const unsigned char *)s1++);
        c2 = (unsigned char)my_tolower(*(const unsigned char *)s2++);
        if (c1 < c2) return -1;
        if (c1 > c2) return 1;
        if (c1 == 0) return 0;
    }
}
