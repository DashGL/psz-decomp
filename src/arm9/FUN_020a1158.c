// flags: -O4,s
#pragma opt_propagation off
extern void *FUN_02086e3c(void);
extern char *FUN_0208724c(void *);
extern void FUN_020a13ec(void *, int);
extern void FUN_020a13a0(void *, int, int);
extern int DAT_0211a658;
void FUN_020a1158(int kind) {
    if (kind != 67) {
        char *p = FUN_0208724c(FUN_02086e3c()) + 0x644;
        FUN_020a13ec(p + 0xec, kind);
        p = FUN_0208724c(FUN_02086e3c()) + 0x644;
        FUN_020a13a0(p + 0xec, kind, DAT_0211a658);
    }
}
