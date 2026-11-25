// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xa8, exact bytes and relocation targets.
// flags: -noThumb
struct S14374 {
    volatile unsigned short f00;
    unsigned short f02;
    int f04;
    int f08;
    int f0c;
};
extern struct S14374 DAT_02104754;
extern volatile unsigned short DAT_020f66d4;
extern unsigned char DAT_02104ee4[];
extern unsigned char DAT_021047e4[];
extern void FUN_0206557c(int a, void *b, int c);
extern void FUN_02013810(void);

void FUN_02014374(int param_1) {
    int i = 0;
    DAT_02104754.f08 = param_1;
    DAT_02104754.f0c = 0;
    DAT_020f66d4 = 0xfffe;
    if ((int)DAT_02104754.f00 > 0) {
        unsigned char *ptr = DAT_02104ee4;
        do {
            FUN_0206557c(-1, ptr + 0x10, 0x10);
            i++;
            ptr += 0x20;
        } while (i < (int)DAT_02104754.f00);
    }
    DAT_02104754.f00 = 0;
    DAT_02104754.f02 = 0;
    FUN_0206557c(0, DAT_021047e4, 0x100);
    *(volatile int *)0x04000444 = 0;
    *(volatile int *)0x04000454 = 0;
    FUN_02013810();
}
