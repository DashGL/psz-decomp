// near: 2w/4b (prologue mov r2, r4 vs mov r7, r0 ordering)
// flags: -noThumb
typedef struct {
    int f0;
    int f4;
    int f8;
    int fc[3];
    char *f18;
} S_0be64;
typedef struct {
    int f0;
    int f4;
    int f8;
} C_0be64;
extern void FUN_0200b3dc(S_0be64 *, int *, int);
extern void FUN_0200c8b0(S_0be64 *, int *, int);
void FUN_0200be64(S_0be64 *a, int *b, C_0be64 *c, int d) {
    FUN_0200b3dc(a, b, d);
    int *r3 = (int *)(a->f18 + c->f8);
    r3[0] = a->f4;
    r3[1] = a->f0;
    r3[2] = a->f8;
    r3[5] = d;
    FUN_0200c8b0(a, b, *b + c->f4);
}
