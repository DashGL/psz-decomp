// flags: -O4,s
int FUN_020c3f34(const signed char *a, const signed char *b, unsigned int limit) {
    unsigned int i;
    if (a && b) {
        for (i = 1; i <= limit; ++i) {
            if (*a != *b) return *a - *b;
            if (*a == 0 && *b == 0) return 0;
            ++a;
            ++b;
        }
    }
    return 0;
}
