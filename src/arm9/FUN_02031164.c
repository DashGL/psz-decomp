// flags: -O4,s
extern const unsigned int DAT_020ec288[];
extern char DAT_0211a51c[];
extern char *DAT_02108c64;
extern int FUN_02084bf8(void *);
extern int FUN_02084c4c(void *);
extern char *FUN_02032ca0(void *, int);
int FUN_02031164(void *unused, unsigned int *s) {
    unsigned int count = s[0], mask = 0, i;
    int allowed[5], k;
    char *m, *p;
    int preferred;
    if (count > 6) count = 6;
    for (i = 0; i < count; i++) {
        if (((unsigned int *)s[1])[2 * i]) mask |= 1u << i;
    }
    mask |= 32;
    for (k = 0; k < 5; k++) {
        unsigned int required = DAT_020ec288[k];
        if ((required & mask) == required) allowed[k] = 1;
        else allowed[k] = 0;
    }
    if (FUN_02084bf8(DAT_0211a51c) && !FUN_02084c4c(DAT_0211a51c) && allowed[4]) return 4;
    m = DAT_02108c64;
    p = FUN_02032ca0(m, *(signed char *)(m + 22));
    if (p) {
        int j;
        preferred = *(signed char *)(p + 49);
        if (preferred >= 0 && preferred < 5 && allowed[preferred]) return preferred;
        for (j = 3; j >= 0; j--) if (allowed[j]) return j;
    }
    return 0;
}
