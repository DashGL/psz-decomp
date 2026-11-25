// flags: -O4,s
typedef struct {
    int a;
    int b;
} Pair;
extern char *DAT_02108c64;
extern signed char DAT_0211a3c4[];
extern int FUN_0209c410(int *, int *);
extern int FUN_02084b14(int);

int FUN_0209c3b8(void) {
    int a = 0;
    int b = 0;
    if (!FUN_0209c410(&a, &b)) {
        volatile Pair pair;
        volatile Pair *gp = (volatile Pair *)(DAT_02108c64 + 0x38);
        int x = gp->a;
        int y = gp->b;
        pair.a = x;
        pair.b = y;
        a = FUN_02084b14(x);
        if (a == -1) a = 8;
        b = DAT_0211a3c4[0xd];
    }
    return a * 3 + b;
}
