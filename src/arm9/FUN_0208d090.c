// flags: -O4,s
extern char *FUN_02085640(void);
extern void FUN_0203bb88(void *, unsigned int, unsigned int);
void FUN_0208d090(char *self) {
    char *p = FUN_02085640();
    if (p) {
        int i;
        for (i = 0; i < 4; i++) {
            int sel = *(signed char *)(self + 4 + i); if (sel == *(int *)(p + 252)) FUN_0203bb88(p, *(unsigned int *)(self + 8), *(unsigned int *)(self + 12));
        }
    }
}
