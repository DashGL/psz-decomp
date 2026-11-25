// flags: -O4,s
extern unsigned int FUN_02050200(void *);
unsigned int FUN_02050440(char *s, int type, int value) {
    if (type < 0 || type >= 47)
        return 255;
    if (value < 0)
        return 255;
    if (*(void **)(s + 8)) {
        char *table = *(char **)(s + 8);
        unsigned int lo = 0, hi = *(unsigned int *)(table + 4) - 1;
        char *base = *(char **)table;
        unsigned int key = ((unsigned int)type << 16) | (unsigned int)value;
        while (lo < hi) {
            unsigned int mid = (lo + hi) >> 1;
            if (FUN_02050200(base + 36 * mid) < key)
                lo = mid + 1;
            else
                hi = mid;
        }
        if (FUN_02050200(base + 36 * lo) == key)
            return (unsigned char)lo;
    }
    return 255;
}
