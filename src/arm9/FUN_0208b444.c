// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xa4, exact bytes and relocation targets.
// flags: -O4,s
struct S1_draw {
    unsigned short f0;
    unsigned short f2;
    unsigned short f4;
    unsigned short f6;
    int f8;
    int fc;
};
extern unsigned short DAT_020f40c0[];
extern void FUN_02071d0c(void *);
extern void FUN_0208971c(void *, void *);
extern void FUN_020c32b4(void *, unsigned int);

void FUN_0208b444(int *param_1, int param_2, int *param_3, int param_4, int param_5, int param_6) {
    struct S1_draw local;
    int q;
    int div8;
    int rem8;
    unsigned short *tbl;
    int i;
    if (param_4 < param_5) {
        param_5 = param_4;
    }
    q = (((param_5 << 12) / param_4) * 0x30) >> 12;
    *(int *)((char *)param_1 + (param_2 << 2) + 0x4c) = param_6;
    div8 = q / 8;
    rem8 = q % 8;
    if (div8 == 0 && rem8 == 0 && param_5 > 0) {
        rem8 = 1;
    }
    FUN_02071d0c(&local);
    FUN_0208971c(&local.f8, param_3);
    for (i = 0, tbl = (unsigned short *)((char *)DAT_020f40c0 + (param_2 << 4)); i < div8; local.f8 += 0x8000) {
        local.f0 = tbl[7];
        FUN_020c32b4(&local, param_1[8]);
        i++;
    }
    if (rem8 != 0) {
        local.f0 = tbl[rem8 - 1];
        FUN_020c32b4(&local, param_1[8]);
    }
}
