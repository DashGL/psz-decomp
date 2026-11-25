const signed char *FUN_020d21b4(const signed char *text, unsigned int length) {
    const signed char *p = text;
    int limit = (int)(length - 6);
    if (limit > 0) {
        do {
            if (p[0] == 92 && p[1] == 102 && p[2] == 105 && p[3] == 110 && p[4] == 97 && p[5] == 108 && p[6] == 92) {
                return p;
            }
            ++p;
        } while ((int)(p - text) < limit);
    }
    return 0;
}
