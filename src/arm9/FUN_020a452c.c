// flags: -O4,p
#pragma opt_propagation off
extern void FUN_020a45a4(int);
extern void FUN_020c2b84(int, void *, int, int, int);
extern void FUN_020a45c8(int, int, int, int, int);
extern int FUN_0205e090(void);
extern void FUN_0206557c(int, int, int);
extern int FUN_0205e328(void);
extern void FUN_020656b8(int, int, int);
extern char DAT_020fbfc4[];
static inline volatile unsigned short *set_bg3(int sz, int cm, int sb, int cb, int ep) {
    int cbs = cb << 2;
    volatile unsigned short *reg = (volatile unsigned short *)0x0400000e;
    *reg = (*reg & 0x43) | (sz << 14) | (cm << 7) | (sb << 8) | cbs | (ep << 13);
    return reg;
}
void FUN_020a452c(int a) {
    int cb;
    int sb;
    volatile unsigned short *reg;
    FUN_020a45a4(1);
    cb = 0; sb = 0x1f;
    FUN_020a45a4(8);
    reg = set_bg3(0, 1, sb, cb, 0);
    FUN_020c2b84(a, DAT_020fbfc4, 3, sb, 0);
    FUN_020a45a4(2);
    FUN_020a45c8(0, 0, 0x1e, 3, 0);
    FUN_0206557c(0, FUN_0205e090(), (unsigned int)reg >> 15);
    FUN_020656b8(FUN_0205e328(), 0, 0x20);
}
