// flags: -O4,s
extern void *FUN_0203ff0c(void *, int);
extern void FUN_0203fe10(void *, void *);
void FUN_0203fdb0(char *s, int key) {
    void *p = FUN_0203ff0c(s, key);
    int count, i;
    if (p) FUN_0203fe10(s, p);
    for (i = 0, count = *(int *)(s + 8); i < count; i++) {
        int *table = *(int **)(s + 0xc);
        if (table[i] == key) table[i] = -1;
    }
}
