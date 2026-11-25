// flags: -O4,s
typedef struct { unsigned char bytes[4]; } Copy_02084a60;
extern int FUN_02084900(void *), FUN_0203a820(void *, int), FUN_02084944(void *), FUN_020849d4(void *);
int FUN_02084a60(unsigned char *item, int add, int limit) {
    unsigned char b[4], a[4];
    if (FUN_02084900(item)) {
        *(Copy_02084a60 *)a = *(const Copy_02084a60 *)item;
        if (FUN_0203a820(a, 4)) return 1;
        *(Copy_02084a60 *)b = *(const Copy_02084a60 *)item;
        if (limit == -1) limit = FUN_02084944(b);
        return add + FUN_020849d4(item) <= limit;
    }
    return 0;
}
