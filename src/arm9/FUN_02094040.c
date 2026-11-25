// flags: -O4,s
extern int FUN_0200d16c(void);
extern int FUN_0200d3a4(int, int, int);
extern void FUN_020328d8(void *);
extern void FUN_02032838(void *, int);
extern void FUN_020781e0(void *, void *, int);
extern void FUN_020345f0(void *, void *);
extern void FUN_02078244(void *);
extern void FUN_02079388(int);
extern void FUN_020793a0(int);
extern char *DAT_02108d04;
extern unsigned short DAT_0211a3b8;

int FUN_02094040(int param_1, int param_2, int param_3, int param_4, int param_5, void *param_6) {
    int local_1c[7];
    char local_28[12];
    char *v = (char *)param_6;
    if (param_1 < 0) {
        return 0;
    }
    if (FUN_0200d3a4(FUN_0200d16c(), 0xc, 1) == 0) {
        return 0;
    }
    FUN_020328d8(local_1c);
    FUN_02032838(local_1c, param_2);
    if (v != 0) {
        FUN_020781e0(local_1c, v, *(unsigned short *)(v + 0xc));
    } else if (param_4 != 0) {
        v = DAT_02108d04;
        if (v != 0) {
            FUN_020345f0(local_28, v + 0x9c);
            FUN_020781e0(local_1c, local_28, *(unsigned short *)(v + 0xc0));
        }
    }
    if (param_3 != 0) {
        local_1c[6] = param_5;
    }
    FUN_02078244(local_1c);
    DAT_0211a3b8 |= 0x20;
    FUN_02079388(param_1);
    FUN_020793a0(1);
    return 1;
}
