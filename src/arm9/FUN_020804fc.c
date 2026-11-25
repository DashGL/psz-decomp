// flags: -O4,s
extern int FUN_0204b5cc(void *);
extern void FUN_0206e728(void *, void (*)(void *));
extern void FUN_020800a4(void *);
extern void FUN_0208011c(void *);
extern void FUN_02080330(void *);

enum { E0 = 0, E1 = 1 };

int FUN_020804fc(char *s) {
    int result = FUN_0204b5cc(s);
    if (!result) {
        char *p = *(char **)(s + 48);
        if (p) {
            if ((((*(int *)(s + 228) & 1) == 0) ? E1 : E0) == 0) {
                *(int *)(s + 228) &= ~1;
                *(int *)(p + 24) |= 1;
                *(int *)(p + 24) |= 16;
                if (*(signed char *)(s + 254) == 18) {
                    FUN_0206e728(p, FUN_020800a4);
                } else {
                    FUN_0206e728(p, FUN_0208011c);
                }
            } else if (((((unsigned char *)s)[253] & 1) ? E1 : E0) == 0) {
                FUN_02080330(s);
            }
        }
    }
    return result;
}
