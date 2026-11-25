// flags: -O4,p
#pragma opt_propagation off
extern char *DAT_0211dbac;
extern const char DAT_02100090[];
extern int FUN_020d8158(void *, void *, const char *);
extern int FUN_02003e24(int, int);
extern int FUN_020d8b8c(void *, void *);

int FUN_020d8da4(void **a, void **b) {
    void *x = *a;
    void *y = *b;
    char *mgr = DAT_0211dbac;
    int off = 0x498;
    int cmp = FUN_02003e24(FUN_020d8158(x, mgr + off, DAT_02100090), FUN_020d8158(y, mgr + off, DAT_02100090));
    if (cmp == 0) {
        return FUN_020d8b8c(x, y);
    }
    if (*(int *)(DAT_0211dbac + 0x6a0) == 0) {
        cmp = -cmp;
    }
    return cmp;
}
