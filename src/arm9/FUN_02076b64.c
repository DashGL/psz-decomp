// flags: -O4,s
enum { E0 = 0, E1 = 1 };
extern char *DAT_02108c64;
extern void FUN_020316e8(void *, void *);
extern void FUN_0203041c(void *);
extern void *FUN_0204f3b8(void);
extern char *FUN_0204f4c0(void *, void *, unsigned char);
extern int FUN_02030700(void *);
void FUN_02076b64(char *s) {
    int descriptor;
    char *p;
    if (((**(unsigned char **)(s + 72) & 2) ? E1 : E0) != 0) {
        FUN_020316e8(&descriptor, DAT_02108c64 + 20);
        p = FUN_0204f4c0(FUN_0204f3b8(), &descriptor, *(unsigned char *)(s + 76));
        if (p != 0 && *(void **)(p + 20) != 0) {
            if (FUN_02030700(s + 108) != 0) {
                *(int *)(p + 28) = 0;
            } else {
                *(int *)(p + 28) = 1;
            }
        }
    }
    FUN_0203041c(s);
}
