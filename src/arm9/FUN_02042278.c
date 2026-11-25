// flags: -O4,s
extern void *FUN_020ba894(unsigned int);
extern void *FUN_0204683c(void *, void *, void *, void *, void *, unsigned int, int);
extern void FUN_020422e0(void *, unsigned int);
extern void FUN_020425f4(void *, void *, int);

void *FUN_02042278(char *s, void *resource, int index) {
    void *p = FUN_020ba894(52);
    if (p) {
        p = FUN_0204683c(p, *(void **)(s + 28), *(void **)(s + 32), s + 36, resource, *(unsigned int *)(s + 232), index);
    }
    if (p) {
        unsigned int active = *(unsigned char *)(s + 228) != 0;
        if (active) {
            FUN_020422e0(p, *(volatile unsigned char *)(s + 228));
        }
        FUN_020425f4(s, p, index);
        return p;
    }
    return 0;
}
