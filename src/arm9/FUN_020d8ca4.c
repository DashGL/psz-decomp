// flags: -O4,p
#pragma opt_propagation off
extern char *DAT_0211dbac;
extern int FUN_020d81b0(void *, void *, int);
extern int FUN_020d8b8c(void *, void *);

int FUN_020d8ca4(void **a, void **b) {
    void *x = *a;
    void *y = *b;
    char *mgr = DAT_0211dbac;
    int off = 0x498;
    int diff = FUN_020d81b0(x, mgr + off, 0) - FUN_020d81b0(y, mgr + off, 0);
    if (diff == 0) {
        return FUN_020d8b8c(x, y);
    }
    if (*(int *)(DAT_0211dbac + 0x6a0) == 0) {
        diff = -diff;
    }
    return diff;
}
