// flags: -O4,s
extern char *DAT_0211a52c;
unsigned int FUN_0208641c(int id) {
    int i;
    char *g = DAT_0211a52c;
    if (g) {
        for (i = 0; i < 8; i++) {
            char *p = g + 12 * i;
            if (id == *(int *)(p + 688)) {
                int value = 150 - ((signed char *)p)[697];
                if (value > 0 && value <= 150) return (unsigned short)value;
            }
        }
    }
    return 0;
}
