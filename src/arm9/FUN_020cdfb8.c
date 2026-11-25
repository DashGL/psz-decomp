// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x8c, exact bytes and relocation targets.
struct S_f0 {
    int f[60];
};
extern void FUN_020ce044(void *);
extern struct S_f0 *FUN_020c7bcc(int);
extern int FUN_020c77cc(int);

int FUN_020cdfb8(int *param_1, int param_2, struct S_f0 *param_3) {
    if (*(int *)(*param_1 + 0x100) == 0) {
        return 1;
    }
    FUN_020ce044((void *)param_2);
    *(struct S_f0 **)(param_2 + 0x10) = FUN_020c7bcc(0xf0);
    if (*(struct S_f0 **)(param_2 + 0x10) != 0) {
        **(struct S_f0 **)(param_2 + 0x10) = *param_3;
        (*(struct S_f0 **)(param_2 + 0x10))->f[0] = FUN_020c77cc(param_3->f[0]);
        (*(struct S_f0 **)(param_2 + 0x10))->f[1] = FUN_020c77cc(param_3->f[1]);
        (*(struct S_f0 **)(param_2 + 0x10))->f[2] = FUN_020c77cc(param_3->f[2]);
        (*(struct S_f0 **)(param_2 + 0x10))->f[3] = FUN_020c77cc(param_3->f[3]);
        (*(struct S_f0 **)(param_2 + 0x10))->f[4] = FUN_020c77cc(param_3->f[4]);
        (*(struct S_f0 **)(param_2 + 0x10))->f[5] = FUN_020c77cc(param_3->f[5]);
        (*(struct S_f0 **)(param_2 + 0x10))->f[50] = FUN_020c77cc(param_3->f[50]);
    }
    if (*(struct S_f0 **)(param_2 + 0x10) != 0) {
        return 1;
    }
    return 0;
}
