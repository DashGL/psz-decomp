// flags: -O4,s
extern void FUN_02034680(void *, void *);
extern void FUN_0204d204(void *, void *);
extern void FUN_0204d5cc(void *);
void FUN_0204cf68(char *s, unsigned int a, void *b) {
    if (*(int *)(s + 16) < 3) {
        (*(int *)(s + 16))++;
        *(int *)(s + 20) = 1;
        *(int *)(s + 48) = -1;
        *(int *)(s + 52) = 0;
        FUN_02034680(s + 24, s + 36);
        *(int *)(s + 56) = (*(int *)(s + 56) == 0);
        *(int *)(s + 196) = 0;
        *(unsigned int *)(s + 200) = a;
        FUN_0204d204(s, b);
        FUN_0204d5cc(s);
    }
}
