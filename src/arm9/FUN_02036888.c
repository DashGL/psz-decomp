// flags: -O4,s
extern signed char DAT_0211a3c4[];
void *FUN_02036888(char *s, int index) {
    int t = index * 3;
    int off = DAT_0211a3c4[13];
    char *p = *(char **)(s + 0x14);
    int i = t + off;
    if (i >= 0 && i < *(int *)(p + 0x40)) return *(char **)(p + 0x3c) + 20 * i;
    return 0;
}
