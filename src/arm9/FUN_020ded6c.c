// flags: -O4,p
extern char DAT_0210051c[];
extern char DAT_02100570[];
#pragma thumb off
extern unsigned int FUN_02003c70(const char *);
extern int FUN_020662b4(int, int, const char *, int, int);
#pragma thumb on
extern int FUN_020defb8(int, int, int);
int FUN_020ded6c(int a) {
    int r4 = a + 0x19f8;
    const char *r6 = *(int *)(a + 0x1008) == 0 ? DAT_0210051c : DAT_02100570;
    int r7 = FUN_02003c70(*(const char **)(a + 0x1124));
    r7 += (int)(FUN_02003c70(r6) - 4 + FUN_02003c70(*(const char **)(a + 0x1128)));
    if (FUN_020defb8(a, a + 0x19f8, r7 + 0x400) != 1) {
        return 1;
    }
    *(int *)(r4 + 4) += FUN_020662b4(*(int *)(r4 + 4), *(int *)(r4 + 0xc), r6, *(int *)(a + 0x1128), *(int *)(a + 0x1124));
    return 0;
}
