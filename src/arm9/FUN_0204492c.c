// flags: -O4,s
extern void *FUN_020be450(void);
extern char *FUN_020be5ec(void *, unsigned int);
extern int FUN_02078188(unsigned int);
extern int FUN_02078198(unsigned int);
extern int FUN_020855bc(unsigned int);
extern void FUN_02044b48(void *, unsigned int);
void FUN_0204492c(char *s) {
    char *node;
    *(short *)(s + 32) = 0;
    s[35] = 0;
    node = FUN_020be5ec(FUN_020be450(), *(unsigned int *)s);
    for (; node; node = *(char **)(node + 4)) {
        char *p = node + 8;
        if (p) {
            unsigned int id = *(unsigned int *)(p + 64);
            if (FUN_02078188(id)) {
                if (*(int *)(p + 60) == 5) {
                    int mask, type;
                    if ((*(signed char *)(s + 34) & 1) && !(*(unsigned int *)(p + 52) & 1)) continue;
                    mask = 0;
                    type = FUN_020855bc(id);
                    if (type == 1) mask = 1;
                    else if (type == 3) mask = 2;
                    if (mask) *(unsigned short *)(s + 32) |= mask;
                    FUN_02044b48(s, id);
                }
            } else if (FUN_02078198(id)) {
                if ((*(signed char *)(s + 34) & 1) && !(*(unsigned int *)(p + 52) & 1)) continue;
                *(unsigned short *)(s + 32) |= 4;
            }
        }
    }
}
