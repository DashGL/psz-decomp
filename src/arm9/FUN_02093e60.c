// flags: -O4,s
enum { E0 = 0, E1 = 1 };
extern void *FUN_02031a74(void);
extern void *FUN_02031c88(void *);
extern int FUN_0209427c(void *, int);
extern int FUN_02093cc8(void *, int, int);
void FUN_02093e60(char *s) {
    if (!*(int *)(s + 8) &&
        ((*(signed char *)(s + 20) == 1) ? E1 : E0) != 0 &&
        ((*(unsigned short *)(s + 4) & 1) ? E1 : E0) != 0) {
        void *p = FUN_02031c88(FUN_02031a74());
        if (p != 0 &&
            FUN_0209427c(p, *(signed char *)(s + 21)) == 1 &&
            FUN_02093cc8(s, *(signed char *)(s + 21) + 1, 1) != 0) {
            *(int *)(s + 8) = 1;
        }
    }
}
