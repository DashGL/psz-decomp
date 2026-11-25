// flags: -O4,s
extern int FUN_02047440(void *);
extern int FUN_0204770c(void *);
extern int FUN_0204771c(void *);
extern void *FUN_0204225c(void *, int);
extern void FUN_02046b94(void *, unsigned int);
extern void FUN_02046bec(void *);
int FUN_020476ac(char *s) {
    int result = FUN_02047440(s);
    if (!result && FUN_0204770c(s) && FUN_0204771c(s) && *(void **)(s + 48) && !*(int *)(s + 260)) {
        void *q = *(void * volatile *)(s + 48);
        if (q != 0) {
            void *p = FUN_0204225c(q, 3);
            if (p != 0) {
                FUN_02046b94(p, *(unsigned int *)(s + 264) << 12);
                FUN_02046bec(p);
                *(int *)(s + 260) = 1;
            }
        }
    }
    return result;
}
