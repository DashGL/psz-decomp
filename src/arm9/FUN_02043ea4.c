// flags: -O4,s
void FUN_02043ea4(char *s, int index, int enable) {
    char *p = *(char **)(s + 0x98) + 112 * index;
    char *object = *(char **)p;
    if (enable) {
        int active;
        *(short *)(p + 0x46) |= 1;
        active = 1;
        if (!(*(unsigned int *)(s + 0x94) & 1)) {
            active = 0;
        }
        if (active) {
            *(unsigned int *)(object + 24) |= 1;
        }
    } else {
        *(short *)(p + 0x46) &= ~1;
        *(unsigned int *)(object + 24) &= ~1u;
    }
}
