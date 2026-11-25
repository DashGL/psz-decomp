// flags: -O4,p
extern const char DAT_020fe7c4[];
extern const char DAT_020fe7cc[];
extern const char DAT_020fe78c[];
extern void FUN_02000edc(const char *, const char *, const char *, int);
extern unsigned long long FUN_020c7824(void);
extern void FUN_02003aac(unsigned int);
extern int FUN_02003a78(void);

unsigned char *FUN_020d290c(unsigned char *param_1) {
    int i;
    int state;
    if (param_1 == 0) {
        FUN_02000edc(DAT_020fe7c4, DAT_020fe7cc, DAT_020fe78c, 0x2b);
    }
    FUN_02003aac((unsigned int)FUN_020c7824());
    param_1[0] = (unsigned char)(FUN_02003a78() % 0x5d + 0x21);
    state = 0;
    for (i = 1; i < 0x20; i++) {
        int b1, b2;
        if (param_1[i - 1] < param_1[0]) b1 = 1; else b1 = 0;
        if (param_1[0] < 0x4f) b2 = 1; else b2 = 0;
        state = ((param_1[0] & 1) ^ (state ^ ((i ^ param_1[i - 1]) & 1))) ^ b2;
        state = state ^ b1;
        param_1[i] = (unsigned char)(FUN_02003a78() % 0x5d + 0x21);
        if ((state != 0 && (param_1[i] & 1) == 0) || (state == 0 && (param_1[i] & 1) == 1)) {
            param_1[i]++;
        }
    }
    return param_1;
}
