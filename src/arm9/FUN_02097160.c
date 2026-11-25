// flags: -O4,s
extern void *FUN_02099444(void);
extern int FUN_02099de0(void *, int), FUN_02099df8(void *, int), FUN_02098248(void *, int);
extern int FUN_0209c8c0(void *, int *, int, int, int, int, int, int, unsigned int, void *);
extern void FUN_0209794c(void *, int);
int FUN_02097160(char *s, int *out) {
    int count, other, actor, result, base, kind;
    char *p;
    count = FUN_02099de0(FUN_02099444(), *(int *)s);
    other = FUN_02099df8(FUN_02099444(), *(int *)s);
    actor = -1;
    p = *(char **)(s + 4);
    base = **(int **)(s + 8);
    kind = FUN_02098248(p, *(int *)s);
    result = FUN_0209c8c0(p + 120, &actor, base, *(int *)(s + 12), count, other, kind, *(short *)(p + 116), 1u << *(int *)(p + 100), s + 16);
    if (result >= 0 && result < count) {
        *out = result;
        FUN_0209794c(s, actor);
        return 1;
    }
    return 0;
}
