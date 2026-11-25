// flags: -noThumb
extern unsigned char DAT_020eb958[];
static inline int my_tolower(int c) { return (c < 0 || c >= 128) ? c : DAT_020eb958[c]; }
int FUN_0200136c(const char *a, const char *b, int count) {
    int i;
    for (i = 0; i < count; i++) {
        char x = (char)my_tolower(*a++);
        char y = (char)my_tolower(*b++);
        if (x < y) return -1;
        if (x > y) return 1;
        if (x == 0) return 0;
    }
    return 0;
}
