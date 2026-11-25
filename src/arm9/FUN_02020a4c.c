// flags: -O4,s -noThumb
extern unsigned int DAT_02107024[];
extern void (*DAT_020f6934)(void);
extern void (*DAT_020f6938)(void);
extern void FUN_02020ba8(void);
extern void FUN_02020aa4(void);
extern void FUN_02020b34(void);

void FUN_02020a4c(unsigned int a, unsigned int b, unsigned int c, unsigned int d, int install) {
    DAT_02107024[3] = a;
    DAT_02107024[4] = b;
    DAT_02107024[5] = c;
    DAT_02107024[6] = d;
    FUN_02020ba8();
    if (!install) return;
    DAT_020f6934 = FUN_02020aa4;
    DAT_020f6938 = FUN_02020b34;
}
