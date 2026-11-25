// flags: -O4,p
extern char *DAT_0211dcbc;
int FUN_020e13ac(unsigned int a, unsigned int b) {
    if (!DAT_0211dcbc) return 0;
    *(unsigned int *)(DAT_0211dcbc + 144) = a;
    *(unsigned int *)(DAT_0211dcbc + 148) = b;
    return 1;
}
