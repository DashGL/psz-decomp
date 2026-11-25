// flags: -O4,s
extern int FUN_020c4848(void), FUN_020c49e8(int, void *), FUN_020c4ec8(void);
extern void FUN_020a0e1c(void), FUN_02086ecc(void *, int), FUN_02086edc(void *);
#pragma thumb off
extern void FUN_0206557c(int, void *, unsigned int);
#pragma thumb reset
int FUN_02086e48(char *s, int slot) {
    if (slot >= 0 && slot < 3 && *(int *)(s + 52) == 0 && FUN_020c4848()) {
        if (FUN_020c49e8(slot + 4, s + 60)) {
            *(int *)(s + 56) = slot;
            FUN_020a0e1c();
            FUN_02086ecc(s, *(short *)(s + 24));
        } else if (FUN_020c4ec8() == 102 && FUN_020c49e8(slot + 7, s + 60)) {
            *(int *)(s + 56) = slot;
            FUN_020a0e1c();
            FUN_02086ecc(s, *(short *)(s + 24));
        } else {
            FUN_0206557c(0, s + 60, 3444);
            FUN_02086edc(s + 60);
            *(int *)(s + 56) = slot;
        }
        return 1;
    }
    return 0;
}
