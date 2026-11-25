// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xa4, exact bytes and relocation targets.
// flags: -O4,s
struct S14_local {
    signed char f0;
    signed char f1;
    signed char f2;
    unsigned char f3;
    unsigned char f4;
    unsigned char f5;
    unsigned char f6;
    unsigned char f7;
    signed char f8;
    signed char f9;
    signed char fa;
    unsigned char fb;
    unsigned char fc;
    unsigned char fd;
    unsigned char fe;
    unsigned char ff;
};
extern void FUN_02030da8(struct S14_local *, void *);
extern void FUN_020bce3c(unsigned char *);
extern int FUN_02030700(void *);
extern void FUN_02030808(void *, int, int);

void FUN_0209f834(char *param_1, int param_2) {
    struct S14_local local;
    char *r2;
    switch (param_2) {
    case 0:
        r2 = *(char **)(param_1 + 0x64);
        if (r2 != 0) {
            *(unsigned int *)(r2 + 0xe4) &= ~1u;
        }
        break;
    case 1:
        r2 = *(char **)(param_1 + 0x64);
        if (r2 != 0) {
            *(unsigned int *)(r2 + 0xe4) |= 1u;
        }
        break;
    case 2:
        if (*(int *)(param_1 + 0x68) != 0) {
            FUN_02030da8(&local, param_1);
            local.f4 = 1;
            local.f5 = 0;
            local.f6 = 0;
            local.f7 = 0;
            local.f8 = local.f0;
            local.f9 = local.f1;
            local.fa = local.f2;
            local.fb = local.f3;
            local.fc = 0;
            local.fd = 0;
            local.fe = 0;
            local.ff = 0;
            local.f6 = 5;
            local.f7 = 0xd;
            local.f4 = 3;
            FUN_020bce3c(&local.f4);
            if (FUN_02030700(param_1 + 0x5c) == 0) {
                FUN_02030808(param_1 + 0x5c, 1, 0);
            }
        }
        break;
    }
}
