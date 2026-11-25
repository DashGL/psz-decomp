// flags: -O4,s
extern void *UNK_02108c54;
extern char *UNK_02108c64;
extern char UNK_0211a51c[];
extern void FUN_02030d5c(void *, void *), FUN_0209cfa8(void *, int, int, int), FUN_020c193c(int, int, int, int, int);
extern unsigned char *FUN_02030a98(void *, void *);
extern char *FUN_02031a74(void);
extern int FUN_02084c70(void *), FUN_0207f47c(void *, void *);

void FUN_0208ec18(signed char *s) {
    unsigned char key[4], *state;
    signed char *p4 = s + 4;
    int a, b;
    if (((unsigned char *)s)[10] & 2) {
        a = ((unsigned char *)s)[11];
        FUN_02030d5c(key, p4);
        key[3] = a;
        state = FUN_02030a98(UNK_02108c54, key);
        *state |= 1;
        a = ((volatile signed char *)s)[9];
        b = ((volatile signed char *)p4)[2];
        FUN_0209cfa8(FUN_02031a74() + 44, b, a, 1);
    }
    if (((unsigned char *)s)[10] & 1) {
        state = FUN_02030a98(UNK_02108c54, p4);
        *state |= 1;
        a = ((volatile signed char *)s)[9];
        b = ((volatile signed char *)p4)[2];
        FUN_0209cfa8(FUN_02031a74() + 44, b, a, 0);
        if (((unsigned char *)s)[10] & 2) *state |= 2;
    }
    if (s[12] == FUN_02084c70(UNK_0211a51c) && ((unsigned char *)s)[10] == 0 && FUN_0207f47c(UNK_02108c64 + 20, p4))
        FUN_020c193c(0, 5, 0, 0, -1);
}
