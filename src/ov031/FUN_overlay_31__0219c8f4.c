// flags: -O4,s
extern void FUN_02042960(int *, int);
extern void FUN_020bc5cc(int *, int *, int *);
extern void *FUN_0208e78c(int *, int *, int *, int *);
void FUN_overlay_31__0219c8f4(void) {
    int e, d, c, b, a;
    FUN_02042960((int *)0x0219ce14, 16384);
    FUN_02042960((int *)0x0219ce10, 16384);
    FUN_02042960(&a, -8192);
    FUN_02042960(&c, 0);
    FUN_02042960(&d, -8192);
    FUN_020bc5cc(&e, (int *)0x0219ce14, &d);
    FUN_020bc5cc(&b, (int *)0x0219ce10, &a);
    FUN_0208e78c((int *)0x0219ce18, &e, &c, &b);
}
