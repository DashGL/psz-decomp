// flags: -O4,s
int FUN_overlay_7__0211fc38(char *p) {
    int count = 0;
    int i;
    unsigned int flags = *(unsigned int *)(p + 0xa0);
    for (i = 0; i < 2; i++) {
        if (flags & (1 << i)) {
            count++;
        }
    }
    return count;
}
