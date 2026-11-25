// flags: -O4,s
int FUN_02051bd4(char *s, int index) {
    int sub = *(int *)(s + 0x50);
    if (sub != -1) {
        char *table = *(char **)(s + 8);
        short *base = *(short **)s;
        unsigned int entry = *(unsigned int *)(s + 0x4c);
        int v = base[entry * 4];
        int record = v + sub;
        char *p = table + 12 * record;
        if (index >= 0 && index < *(signed char *)(p + 1))
            return *(short *)(p + 2) + index + 4;
    }
    return -1;
}
