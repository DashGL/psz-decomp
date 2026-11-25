// flags: -O4,p
extern void *FUN_020be450(void);
extern void FUN_020bed1c(void *, unsigned int);
extern void FUN_02072400(void *);
void FUN_02072724(char *self, int index) {
    if (index >= 0 && index < *(int *)(self + 172)) { char *base = *(char **)(self + 168); int offset = 52 * index; FUN_020bed1c(FUN_020be450(), *(unsigned int *)(base + offset)); FUN_02072400(base + offset); }
}
