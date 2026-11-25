// flags: -O4,s
extern char *DAT_0211a52c;
void *FUN_02085640(void) {
    int i;
    char *g = DAT_0211a52c;
    if (g) {
        for (i = 0; i < 4; i++) {
            if (*(int *)(g + 596) == *(int *)(g + 148 * i + 136) && ((unsigned char *)g)[148 * i + 149] != 1)
                return *(void **)(g + 148 * i + 140);
        }
    }
    return 0;
}
