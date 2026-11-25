// flags: -O4,s
extern int DAT_020ed438;
extern void *FUN_0208f068(void);
extern void *FUN_0208efa8(void *, unsigned int, int, void *);
void *FUN_02040340(char *s, void *arg) {
    void *p = FUN_0208f068();
    if (p) {
        p = FUN_0208efa8(p, *(unsigned int *)(s + 0x24), 0, arg);
        if (p) return p;
    }
    return &DAT_020ed438;
}
