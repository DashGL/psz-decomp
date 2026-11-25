// flags: -O4,s
extern unsigned char *UNK_0211a52c;
extern int FUN_0208546c(void), FUN_0207f45c(void *, void *);
int FUN_020857fc(void *d, int index) {
    unsigned char *p = UNK_0211a52c;
    if (p && index >= 0 && index < 4) {
        int offset = 148 * index;
        if ((p + offset)[148] == 3) {
            offset = 148 * FUN_0208546c();
            if (FUN_0207f45c((UNK_0211a52c + 144) + offset, d) && (UNK_0211a52c + offset)[149] != 1) return 1;
        } else if (*(int *)(p + 136 + offset) == index) {
            if (FUN_0207f45c((p + 144) + offset, d) && (UNK_0211a52c + offset)[149] != 1) return 1;
        }
    }
    return 0;
}