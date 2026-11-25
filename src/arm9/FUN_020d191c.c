// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xa8, exact bytes and relocation targets.
extern void FUN_02000edc(const void *, const void *, const void *, int);
extern char *FUN_02003fa8(const char *, const char *);
extern int FUN_02003c70(const char *);
extern const char DAT_020fe5b8[];
extern const char DAT_020fe578[];
extern const char DAT_020fe544[];
extern const char DAT_020fe5c8[];
extern const char DAT_020fe5d4[];
extern const char DAT_020fe5e4[];

int FUN_020d191c(const char *param_1, const char *param_2, char *param_3, int param_4) {
    char c;
    char *p;
    int i;
    char d;
    if (param_1 == 0) {
        FUN_02000edc(DAT_020fe5b8, DAT_020fe578, DAT_020fe544, 0x6d);
    }
    if (param_2 == 0) {
        FUN_02000edc(DAT_020fe5c8, DAT_020fe578, DAT_020fe544, 0x6e);
    }
    if (param_3 == 0) {
        FUN_02000edc(DAT_020fe5d4, DAT_020fe578, DAT_020fe544, 0x6f);
    }
    if (param_4 <= 0) {
        FUN_02000edc(DAT_020fe5e4, DAT_020fe578, DAT_020fe544, 0x70);
    }
    c = *param_2;
    p = FUN_02003fa8(param_1, param_2);
    if (p == 0) {
        return 0;
    }
    p += FUN_02003c70(param_2);
    for (i = 0; i < param_4 - 1 && (d = p[i]) != 0 && d != c; i++) {
        param_3[i] = d;
    }
    param_3[i] = 0;
    return 1;
}
