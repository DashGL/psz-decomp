//cpp
// flags: -O4,s
extern "C" {
void *FUN_020be450(void);
unsigned int FUN_020beccc(void *, unsigned int, int, unsigned int, unsigned int);
}
extern "C" int FUN_02044bd4(char *s, unsigned int a, unsigned int b, unsigned int c) {
    int ok = (*(unsigned short *)(s + 0x1e) & 1) ? 1 : 0;
    if (ok) return 0;
    *(unsigned int *)s = FUN_020beccc(FUN_020be450(), a, 1, b, c);
    return 1;
}
