// flags: -O4,p -noThumb

struct Stream5738 {
    const char *str;
    int count;
};

extern unsigned long FUN_02005350(int, unsigned int, void (*)(void), struct Stream5738 *, int *, int *, int *);
extern void FUN_02003abc(void);
extern int DAT_02101db0;

unsigned long FUN_02005738(const char *str, char **endptr, int base) {
    int chars_read;
    int neg;
    int overflow;
    struct Stream5738 st;
    unsigned long val;

    st.str = str;
    st.count = 0;
    val = FUN_02005350(base, 0x7fffffff, FUN_02003abc, &st, &chars_read, &neg, &overflow);
    if (endptr != 0) {
        *endptr = (char *)str + chars_read;
    }
    if (overflow != 0) {
        val = 0xffffffffUL;
        DAT_02101db0 = 0x22;
    } else if (neg != 0) {
        val = -val;
    }
    return val;
}
