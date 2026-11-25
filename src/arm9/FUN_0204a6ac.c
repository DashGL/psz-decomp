// flags: -O4,s
void FUN_0204a6ac(char *s, unsigned int key, unsigned int shift, int delta) {
    char *p = *(char **)(s + 4);
    unsigned int mask = 1u << shift;
    while (p != 0) {
        char *next = *(char **)(p + 16);
        if (*(unsigned int *)(p + 232) == key &&
            (*(unsigned int *)(p + 228) & mask) &&
            !(*(unsigned int *)(p + 228) & 0x200000)) {
            if (*(int *)(p + 68) >= 0) {
                *(int *)(p + 68) += delta;
                if (*(int *)(p + 72) >= 0) {
                    *(int *)(p + 72) += delta;
                }
            }
            *(unsigned int *)(p + 228) |= 0x200000;
        }
        p = next;
    }
}
