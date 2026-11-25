// flags: -O4,s
extern int FUN_020c4848(void);
extern int FUN_020c49e8(int, void *);
extern int FUN_020c4ec8(void);
#pragma thumb off
extern void FUN_0206557c(int, void *, unsigned int);
#pragma thumb reset
extern void FUN_020871b0(void *);
int FUN_02087150(char *s) {
    if (!*(int *)(s + 52) && FUN_020c4848()) {
        if (!FUN_020c49e8(2, s + 3504)) {
            if (FUN_020c4ec8() != 102 || !FUN_020c49e8(3, s + 3504)) {
                FUN_0206557c(0, s + 3504, 2936);
                FUN_020871b0(s + 3504);
            }
        }
        return 1;
    }
    return 0;
}
