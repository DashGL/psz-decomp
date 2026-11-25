// flags: -O4,s
typedef struct { unsigned char bytes[4]; } Copy_020a7844;
extern int FUN_0203a820(void *, int);
extern int FUN_0203a1a8(void *, int);
extern int FUN_02035b60(int);

int FUN_020a7844(unsigned char *s) {
    unsigned char a[4], b[4];
    int result = 0, valid = 0;
    *(Copy_020a7844 *)a = *(const Copy_020a7844 *)s;
    if (FUN_0203a820(a, 0)) {
        *(Copy_020a7844 *)b = *(const Copy_020a7844 *)s;
        if (FUN_0203a1a8(b, 17)) valid = 1;
    }
    if (valid) {
        int value = FUN_02035b60(4) * 3;
        int w = *(int *)(s + 8);
        result = 1;
        *(int *)(s + 8) = ((w & ~0xf00) | (value << 8)) & ~0xe0;
    }
    return result;
}
