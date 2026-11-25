// near: 37 byte diffs (0 bad relocs); semantics and ABI understood
// flags: -O4,p -noThumb
extern unsigned short DAT_02107054[];
extern int DAT_021181a0[];
extern int FUN_020213c0(void *, int, int);
extern short FUN_02021474(unsigned short);
extern void FUN_02021f78(void *, int, void *, int, int, int);

void FUN_02022170(void *param_1, int param_2, int param_3) {
    int r4 = *(int *)(param_3 + 0x4c);
    unsigned short seq;
    int c1;
    short c2;
    *(unsigned short *)(r4 + 0x22) = 8;
    seq = DAT_02107054[2];
    *(unsigned short *)(r4 + 0x26) = (unsigned short)DAT_021181a0[1];
    *(unsigned short *)(r4 + 0x24) = 0;
    *(unsigned short *)(param_3 + 0xa) = seq;
    DAT_02107054[2] = seq + 1;
    *(unsigned short *)(r4 + 0x28) = seq;
    c1 = FUN_020213c0((void *)(r4 + 0x22), 8, 0);
    c2 = FUN_02021474((unsigned short)FUN_020213c0(param_1, param_2, c1));
    *(unsigned short *)(r4 + 0x24) = (c2 >> 8) | (c2 << 8);
    FUN_02021f78((void *)(r4 + 0x22), 8, param_1, param_2, *(int *)(param_3 + 0x1c), 1);
}
