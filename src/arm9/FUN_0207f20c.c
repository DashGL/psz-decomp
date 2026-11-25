// flags: -O4,s
extern int FUN_0207f078(void *, int *, int);

int FUN_0207f20c(int *s, int *out, int index, int group) {
    int value, i, base;
    if (index < 0) return 0;
    if (!s[0]) return 0;
    if (group < 0 || s[1] <= group) return 0;
    if (index >= 128) return 0;
    base = 4 * (index + 128 * group);
    *out = 0;
    value = 0;
    for (i = 0; i < 4; i++) {
        if (!FUN_0207f078((void *)s[0], &value, base + i)) return 0;
        if (value) {
            *out = 1;
            break;
        }
    }
    return 1;
}
