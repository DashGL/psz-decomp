// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x94, exact bytes and relocation targets.
// flags: -noThumb
extern int FUN_020683d4(void);
extern void FUN_02066a2c(void *);
extern void FUN_020683e8(int);
extern int FUN_0205860c(void *, int);
extern char *FUN_020591e8(void *);

void FUN_020593fc(char *param_1) {
    void *r4 = *(void **)(param_1 + 8);
    while (param_1 != 0) {
        int s = FUN_020683d4();
        *(volatile int *)(param_1 + 0xc) |= 0x40;
        if ((*(volatile int *)(param_1 + 0xc) & 4) ? 1 : 0) {
            FUN_02066a2c(param_1 + 0x18);
            FUN_020683e8(s);
            return;
        }
        *(volatile int *)(param_1 + 0xc) |= 8;
        FUN_020683e8(s);
        if (FUN_0205860c(param_1, *(int *)(param_1 + 0x10)) == 6) {
            return;
        }
        param_1 = FUN_020591e8(r4);
    }
}
