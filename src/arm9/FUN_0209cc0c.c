// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0xa8, exact bytes and relocation targets; argument/return contract corrected.
// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xa8, exact bytes and relocation targets.
extern void *FUN_02031a74(void);
extern void FUN_02031e28(void *);
extern void *FUN_020780f4(void);
extern void FUN_02078180(void *);
extern void FUN_02094258(void *, void *, int);
extern void FUN_020328f4(int, void *, int);
extern int FUN_0206d124(void *);
extern void FUN_02050ed0(int, int);
extern void FUN_02050f8c(int, int);
extern void *FUN_020b77e4(void);
extern void FUN_020b7774(void *);
extern void FUN_02078184(void *);
extern void FUN_020bce3c(void *);
extern int DAT_02108c64;
extern int DAT_0210e24c;
extern int DAT_020fa288;
extern int DAT_020fa284;

static inline void set_if_zero(int val) {
    if (DAT_020fa288 == 0) {
        DAT_020fa284 = val;
    }
}

void FUN_0209cc0c(char *param_1) {
    FUN_02031e28(FUN_02031a74());
    if (param_1 != 0) {
        int r4 = 0;
        int local_c[2];
        FUN_02078180(FUN_020780f4());
        FUN_02094258(local_c, param_1, 0);
        FUN_020328f4(DAT_02108c64, local_c, 0);
        if (FUN_0206d124(local_c) != 0) {
            FUN_02050ed0(DAT_0210e24c, *(int *)(param_1 + 0xc));
            FUN_02050f8c(DAT_0210e24c, 0);
            set_if_zero(*(int *)(param_1 + 0xc));
            r4 = 1;
        }
        FUN_020b7774(FUN_020b77e4());
        FUN_02078184(FUN_020780f4());
        if (r4 != 0) {
            unsigned char local_10[4];
            local_10[0] = 1;
            local_10[1] = 0;
            local_10[2] = 0;
            local_10[3] = 0;
            local_10[2] = 7;
            local_10[3] = 6;
            local_10[0] = 1;
            FUN_020bce3c(local_10);
        }
    }
}
