// flags: -O4,s
extern char *DAT_0211a52c;
int FUN_02086464(void *unused, int id) {
    int i;
    char *g = DAT_0211a52c;
    if (g) {
        for (i = 0; i < 8; i++) {
            char *p = g + 12 * i;
            if (id == *(int *)(p + 688) && ((unsigned char *)p)[696] == 1) return 1;
        }
    }
    return 0;
}
