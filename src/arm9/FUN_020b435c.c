// flags: -O4,s
extern int DAT_0211aa74[];
extern char DAT_0211aaa4[];
extern int FUN_0207f45c(void *, void *);
void *FUN_020b435c(void *unused, void *desc, int category) {
    void *result = 0;
    int i;
    if (DAT_0211aa74[4] > 0) for (i = 0; i < DAT_0211aa74[4]; i++) {
        char *slot = DAT_0211aaa4 + 40 * i;
        if (FUN_0207f45c(slot + 32, desc) && category == (unsigned char)slot[37]) {
            result = *(void **)slot;
            break;
        }
    }
    return result;
}
