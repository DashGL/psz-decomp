// flags: -O4,p
extern int D_020fe694;
extern int D_020fe6f0;
extern char *FUN_020d21b4(char *, int);
extern void FUN_020d20e0(char *, int);
extern void FUN_020d2440(char *, int);

int FUN_020d24d0(char *a, int b) {
    int orig = b;
    char *p;
    int diff;
    p = FUN_020d21b4(a, b);
    while (b > 0 && p != 0) {
        D_020fe694 = (int)&D_020fe6f0;
        diff = p - a;
        FUN_020d20e0(a, diff);
        FUN_020d2440(a, diff);
        b -= diff + 7;
        a = p + 7;
        if (b > 0) p = FUN_020d21b4(a, b);
    }
    return orig - b;
}
