// flags: -O4,p
extern unsigned char DAT_020eb958[];
signed char *FUN_020c77f0(signed char *p) {
    signed char *start = p;
    int c = *p;
    while (c) {
        if (c >= 0 && c < 128) c = *(DAT_020eb958 + c);
        *p++ = (signed char)c;
        c = *p;
    }
    return start;
}
