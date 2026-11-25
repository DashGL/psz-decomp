// flags: -O4,s
extern void FUN_0203955c(void *);
extern void FUN_02084a1c(void *,int);
char *FUN_overlay_12__0212bdc0(char *p) {
    char *q = p;
    do {
        *(int *)(q + 16) = -1;
        FUN_0203955c(q);
        q += 20;
    } while (q < p + 160);
    *(int *)(p + 156) = 127;
    FUN_0203955c(p + 140);
    p[140] = 4;
    FUN_02084a1c(p + 140, 0);
    return p;
}
