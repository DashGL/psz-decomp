// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x94, exact bytes and relocation targets.
// flags: -O4,p
extern int FUN_020d3828(void *);
extern int FUN_020d2a70(void *, void *);
extern void FUN_020d29bc(void *, void *);
extern int FUN_020d4790(void *, void *, int, int);
extern void FUN_020c7bec(void *);

int FUN_020d3a28(char *param_1, char *param_2, int param_3) {
    char local_20[32];
    if (*(int *)(param_1 + 0xc) != 0) {
        if (FUN_020d3828(param_1) != 0) {
            return 1;
        }
        return 0;
    }
    if (param_3 < 0x40) {
        if (FUN_020d3828(param_1) != 0) {
            return 1;
        }
        return 0;
    }
    if (FUN_020d2a70(param_2, param_1 + 0x68) == 0) {
        if (FUN_020d3828(param_1) != 0) {
            return 1;
        }
        return 0;
    }
    FUN_020d29bc(local_20, param_2 + 0x20);
    if (FUN_020d4790(param_1, local_20, *(int *)(param_1 + 0x38), *(int *)(param_1 + 0x3c)) == 0) {
        return 0;
    }
    if (*(void **)(param_1 + 0x38) != 0) {
        FUN_020c7bec(*(void **)(param_1 + 0x38));
        *(void **)(param_1 + 0x38) = 0;
    }
    *(int *)(param_1 + 0xc) = 1;
    return 1;
}
