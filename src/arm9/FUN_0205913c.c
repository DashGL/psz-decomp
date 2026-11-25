// flags: -O4,p -noThumb
unsigned int FUN_0205913c(const unsigned char *name, int length) {
    unsigned int key = 0;
    if (length <= 3) {
        int i;
        for (i = 0; i < length; i++) {
            unsigned int c = name[i];
            unsigned int d;
            if (c == 0) {
                break;
            }
            d = c - 65;
            if (d <= 25) {
                d += 97;
            } else {
                d += 65;
            }
            key |= d << (i * 8);
        }
    }
    return key;
}
