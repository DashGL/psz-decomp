// flags: -O4,s
enum { E0 = 0, E1 = 1 };
extern void FUN_02047798(void *, void *), FUN_020be58c(void *, int, int, void *);
extern int FUN_0203b3c8(void *);
extern void *FUN_020be450(void);

void FUN_020abd74(char *s) {
    FUN_02047798(s + 2948, s + 2900);
    if (*(int *)(s + 3472) > 0 || FUN_0203b3c8(s)) {
        (*(int *)(s + 3472))--;
        if ((*(int *)(s + 248) & 0x200000) ? E1 : E0) {
            *(int *)(s + 2940) |= 1;
            FUN_020be58c(FUN_020be450(), *(int *)(s + 2988), 0, s + 2936);
        } else {
            *(int *)(s + 2940) &= ~1;
            FUN_020be58c(FUN_020be450(), *(int *)(s + 2988), 0, s + 2936);
        }
        if (*(int *)(s + 3472) == 0) {
            *(int *)(s + 248) &= ~4;
            *(int *)(s + 248) &= ~0x200000;
        }
    } else {
        *(int *)(s + 248) &= ~4;
        *(int *)(s + 2940) |= 1;
        FUN_020be58c(FUN_020be450(), *(int *)(s + 2988), 0, s + 2936);
    }
}
