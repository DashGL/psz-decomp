// flags: -O4,p
extern int FUN_020c6e0c(void *);
extern void **FUN_020c6e10(void *, int);
int FUN_020d8f44(void **s, void *entry) {
    int i, count = FUN_020c6e0c(s[1]);
    for (i = 0; i < count; i++) {
        if (entry == *FUN_020c6e10(s[1], i)) return i;
    }
    return -1;
}
