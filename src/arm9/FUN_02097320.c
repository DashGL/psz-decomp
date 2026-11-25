// flags: -O4,s
//cpp
struct Info {
    unsigned char f0, f1, f2, f3, f4, f5;
    int range() const { return f2 << 12; }
};
extern "C" {
extern void *FUN_02099444(void);
extern int FUN_02099d78(void *, int), FUN_0203a9d4(void *);
#pragma thumb off
extern int FUN_0205c540(int);
#pragma thumb reset
extern char *FUN_0209854c(void *), *FUN_02084798(int, int);
extern Info FUN_0207a3f4(int, int, int);
}
extern "C" void FUN_02097320(int *out, char *s, signed char *type) {
    int n, level, kind;
    char *actor;
    *out = *(int *)(s + 28);
    switch (type[0]) {
    case 3:
        n = type[1];
        level = FUN_02099d78(FUN_02099444(), *(int *)s);
        *out = FUN_0207a3f4(n / 2, level, (n & 1) != 0).range();
        break;
    case 4:
        n = type[1];
        level = FUN_02099d78(FUN_02099444(), *(int *)s);
        *out = FUN_0207a3f4(n / 2 + 5, level, (n & 1) != 0).range();
        break;
    case 5:
        *out = FUN_0205c540(102400) - 4096;
        break;
    case 1:
        n = type[1];
        if ((unsigned char)(signed char)(n - 2) <= 1) *out = *(int *)(s + 28) * 2;
        else if (n == 4) {
            actor = FUN_0209854c(*(void **)(s + 8));
            if (actor) {
                kind = (unsigned char)actor[385];
                *out = (unsigned char)FUN_02084798(kind, FUN_0203a9d4(actor))[5] << 9;
            } else *out = *(int *)(s + 28);
        } else *out = *(int *)(s + 28);
        break;
    case 2:
        if ((unsigned char)(signed char)(type[1] - 2) <= 1) *out = *(int *)(s + 28) * 2;
        else *out = *(int *)(s + 28);
        break;
    default:
        *out = *(int *)(s + 28);
        break;
    }
    *out = *out - (*out >> 2);
}
