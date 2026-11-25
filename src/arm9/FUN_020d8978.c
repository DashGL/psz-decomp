// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xb4, exact bytes and relocation targets.
// flags: -O4,p
extern const char *DAT_020ffb78[];
extern const char DAT_02100000[];
extern unsigned int FUN_02003c70(const char *);
extern int FUN_02066274(char *, const char *, const char *);
extern void FUN_020d803c(void *, int);
extern int FUN_020d95f4(void *, char *, int, int, int);
extern void FUN_020c7864(int);
extern int FUN_020d8ad0(void *);

int FUN_020d8978(char *param_1, int param_2, int param_3, const unsigned char *param_4, int param_5, int param_6, int param_7, int param_8) {
    char buf[0x100] = {0};
    int len = 0;
    int i;
    int res;
    *(int *)(param_1 + 0x828) = param_3;
    i = 0;
    *(int *)(param_1 + 0x40) = 0;
    for (; i < param_5; i++) {
        const char *s = DAT_020ffb78[param_4[i]];
        if ((int)(len + FUN_02003c70(s) + 1) >= 0x100) {
            break;
        }
        len += FUN_02066274(buf + len, DAT_02100000, s);
        FUN_020d803c(param_1, param_4[i]);
    }
    res = FUN_020d95f4(param_1 + 0x4c, buf, param_6, param_7, param_8);
    if (res == 0 && param_2 == 0) {
        while (*(int *)(param_1 + 0x4c) == 3 || (*(int *)(param_1 + 0x10) > 0 && res == 0)) {
            FUN_020c7864(10);
            res = FUN_020d8ad0(param_1);
        }
    }
    return res;
}
