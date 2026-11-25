// flags: -O4,s
typedef struct { int x, y, z; } Vec;
typedef struct { int words[11]; unsigned short angle, pad; } Params;
extern char DAT_020fbecc[], DAT_020fbefc[];
extern void FUN_0203020c(void *, void *, int), FUN_0209a3d4(void *, int), FUN_02099ec8(void *, void *, unsigned short), FUN_020306e4(void *, void *, int, int), FUN_020926d0(void *, void *, int, int, int, int), FUN_02092700(void *, Params), FUN_0209a478(void *, int), FUN_02044c08(void *, void *, int), FUN_0209a33c(void *, int);
extern int FUN_0203068c(void *);
extern void *FUN_02030540(void *);
#define W(n) (*(int *)(s + (n)))
void *FUN_020a3384(char *s, void *input) {
    Params params;
    Vec a, b;
    int first, second, angle, id;
    void *p;
    FUN_0203020c(s, input, 34);
    FUN_0209a3d4(s + 48, FUN_0203068c(s));
    *(void **)s = DAT_020fbecc;
    *(void **)(s + 48) = DAT_020fbefc;
    *(void **)(s + 72) = **(void ***)(s + 4);
    angle = *(unsigned short *)(s + 44);
    a = *(Vec *)(s + 28);
    FUN_02099ec8(s + 76, &a, (unsigned short)angle);
    FUN_020306e4(s + 292, *(char **)(s + 72) + 8, 1, 1);
    FUN_020306e4(s + 300, *(char **)(s + 72) + 16, 1, 0);
    FUN_020306e4(s + 308, *(void **)(s + 72), 1, 1);
    FUN_020306e4(s + 316, *(char **)(s + 72) + 24, 1, 0);
    W(324) = 0;
    W(328) = 0;
    if (*(signed char *)(*(char **)(s + 4) + 18) == 0) {
        first = 13;
        second = 14;
    } else {
        first = 15;
        second = 16;
        W(68) = 4;
    }
    angle = *(unsigned short *)(s + 44);
    b = *(Vec *)(s + 28);
    id = FUN_0203068c(s);
    FUN_020926d0(&params, &b, angle, id, first, 4);
    params.words[6] = second;
    params.words[9] = 1;
    FUN_02092700(s + 76, params);
    FUN_0209a478(s + 48, *(signed char *)(*(char **)(s + 72) + 32));
    p = FUN_02030540(s);
    if (p) {
        FUN_02044c08(s + 76, p, 0);
        FUN_0209a33c(s + 76, FUN_0203068c(s));
        W(216) = 20;
    }
    return s;
}
