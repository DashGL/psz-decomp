// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xc4, exact bytes and relocation targets.
// flags: -O4,p
struct S3_arg {
    char str[0x100];
    unsigned int type;
};

extern void FUN_020d8ca4(void);
extern void FUN_020d8cf0(void);
extern void FUN_020d8da4(void);
extern void FUN_020d8dfc(void);
extern int FUN_02003c70(const char *);
extern int FUN_02003e24(const char *, const char *);
extern void FUN_020c6f1c(int, void (*)(void));
extern void *DAT_0211dbac;

void FUN_020d8e54(char *param_1, int param_2, struct S3_arg param_3) {
    void (*cb)(void);
    switch (param_3.type) {
    case 0:
        cb = FUN_020d8ca4;
        break;
    case 1:
        cb = FUN_020d8cf0;
        break;
    case 2:
        cb = FUN_020d8da4;
        break;
    case 3:
        cb = FUN_020d8dfc;
        break;
    default:
        cb = FUN_020d8dfc;
        break;
    }
    if (FUN_02003c70(param_1 + 0x59c) == 0) {
        *(struct S3_arg *)(param_1 + 0x59c) = param_3;
    } else if (FUN_02003e24(param_3.str, param_1 + 0x498) != 0) {
        *(struct S3_arg *)(param_1 + 0x59c) = *(struct S3_arg *)(param_1 + 0x498);
    }
    *(struct S3_arg *)(param_1 + 0x498) = param_3;
    *(int *)(param_1 + 0x6a0) = param_2;
    DAT_0211dbac = param_1;
    FUN_020c6f1c(*(int *)(param_1 + 4), cb);
}
