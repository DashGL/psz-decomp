// flags: -O4,p
unsigned int FUN_overlay_15__0211fa8c(const unsigned char *p, int count) {
    unsigned int value = 0;
    int i;
    const unsigned char *q = p + (count - 1);
    for (i = 0; i < count; i++) {
        value = (value << 8) + *q--;
    }
    return value;
}
