// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xc8, exact bytes and relocation targets.
// flags: -O4,p -noThumb

struct Stream57D0 {
    const char *str;
    int count;
};

extern int DAT_02101db0;
extern void FUN_02003abc(void);
extern unsigned int FUN_02005350(int, unsigned int, void (*)(void), struct Stream57D0 *, int *, int *, int *);

int FUN_020057d0(const char *str, char **endptr, int base) {
    int chars_read;
    int neg;
    int overflow;
    struct Stream57D0 st;
    unsigned int val;

    st.str = str;
    st.count = 0;
    val = FUN_02005350(base, 0x7fffffff, FUN_02003abc, &st, &chars_read, &neg, &overflow);
    if (endptr != 0) {
        *endptr = (char *)str + chars_read;
    }
    if (overflow != 0 || (neg == 0 && val > 0x7fffffff) || (neg != 0 && val > 0x80000000u)) {
        val = (neg != 0) ? 0x80000000u : 0x7fffffff;
        DAT_02101db0 = 0x22;
        return (int)val;
    }
    if (neg != 0) {
        val = (unsigned int)(-(int)val);
    }
    return (int)val;
}
