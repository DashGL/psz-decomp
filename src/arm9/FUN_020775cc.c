// flags: -O4,s
typedef struct { int x, y, z; } V;
extern unsigned long long DAT_0211c844[3];
extern int UNK_020f2880[];
extern void *UNK_02108c68;
extern int FUN_02077664(void *), FUN_02033430(void *, int, int, int);
extern void FUN_020a1218(int);
void FUN_020775cc(char *s) {
    unsigned long long next;
    unsigned int lim = 5;
    V pos;
    if (FUN_02077664(s)) {
        next = DAT_0211c844[1] * DAT_0211c844[0] + DAT_0211c844[2];
        DAT_0211c844[0] = next;
        if (lim) next = (next >> 32) * lim;
        pos = *(V *)(s + 28);
        *(int *)(s + 76) = 15;
        *(int *)(s + 80) = 6;
        *(int *)(s + 84) = UNK_020f2880[(unsigned int)(next >> 32)];
        *(V *)(s + 88) = pos;
        FUN_020a1218(*(signed char *)(*(char **)(s + 4) + 18));
    } else if (!*(int *)(s + 100)) {
        *(int *)(s + 100) = FUN_02033430(UNK_02108c68, 5, 1, **(int **)(s + 68));
    }
}
