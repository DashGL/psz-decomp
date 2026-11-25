// flags: -O4,s -noThumb
extern char DAT_0211a0e0[];
void FUN_0206a09c(void) {
    int i;
    char *p = DAT_0211a0e0;
    for (i = 0; i < 8; i++, p += 12) {
        *(unsigned int *)p = 0;
        *(unsigned int *)(p + 4) = 0;
        p[8] = 0;
    }
}
