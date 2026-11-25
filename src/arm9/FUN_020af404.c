// flags: -O4,s
extern void FUN_020a45a4(int);
extern void FUN_020af4a4(int, int, int, int, int);
extern void *FUN_0205e090(void);
extern void FUN_0206557c(int, void *, unsigned int);
extern void FUN_020c2b84(void *, const void *, int, int, int);
extern int FUN_020c1fc8(void);
extern int FUN_020c2438(int, int, int, int);
extern const char DAT_020fc504[];
extern const char DAT_020fc520[];
extern int DAT_020fc4b8;

#pragma opt_propagation off
void FUN_020af404(int *param_1) {
    int a, b, c;
    FUN_020a45a4(2);
    FUN_020af4a4(0, 0, 4, 4, 0);
    FUN_0206557c(0, FUN_0205e090(), 0x800);
    b = 1; a = 0;
    FUN_020a45a4(8);
    *(volatile unsigned short *)0x0400000e = (unsigned short)((b << 2) | ((a << 8) | (0x80 | (*(volatile unsigned short *)0x0400000e & 0x43))));
    if (param_1[4] == 0) {
        FUN_020c2b84(param_1 + 5, DAT_020fc504, 3, 0, 1);
    } else {
        FUN_020c2b84(param_1 + 5, DAT_020fc520, 3, 0, 1);
    }
    c = DAT_020fc4b8; param_1[22] = FUN_020c2438(FUN_020c1fc8(), c, c, 1);
}
