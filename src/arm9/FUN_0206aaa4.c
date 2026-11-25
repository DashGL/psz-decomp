// flags: -noThumb
extern unsigned int FUN_020683d4(void);
extern void FUN_020683e8(unsigned int);
extern unsigned char DAT_0211a144[];
void FUN_0206aaa4(const short *values) {
    unsigned int mask;
    int v;
    if (!values) {
        *(unsigned short *)(DAT_0211a144 + 52) = 0;
        return;
    }
    mask = FUN_020683d4();
    v = values[2];
    if (v) {
        *(volatile unsigned short *)0x04000280 = 0;
        *(volatile unsigned int *)0x04000290 = 0x10000000;
        *(volatile unsigned long long *)0x04000298 = (unsigned int)v;
        *(int *)(DAT_0211a144 + 28) = values[0];
        *(int *)(DAT_0211a144 + 32) = values[2];
        while (*(volatile unsigned short *)0x04000280 & 0x8000) {}
        *(int *)(DAT_0211a144 + 36) = *(volatile int *)0x040002a0;
    } else {
        *(int *)(DAT_0211a144 + 28) = 0;
        *(int *)(DAT_0211a144 + 32) = 0;
        *(int *)(DAT_0211a144 + 36) = 0;
    }
    v = values[3];
    if (v) {
        *(volatile unsigned short *)0x04000280 = 0;
        *(volatile unsigned int *)0x04000290 = 0x10000000;
        *(volatile unsigned long long *)0x04000298 = (unsigned int)v;
        *(int *)(DAT_0211a144 + 40) = values[1];
        *(int *)(DAT_0211a144 + 44) = values[3];
        while (*(volatile unsigned short *)0x04000280 & 0x8000) {}
        *(int *)(DAT_0211a144 + 48) = *(volatile int *)0x040002a0;
    } else {
        *(int *)(DAT_0211a144 + 40) = 0;
        *(int *)(DAT_0211a144 + 44) = 0;
        *(int *)(DAT_0211a144 + 48) = 0;
    }
    FUN_020683e8(mask);
    *(unsigned short *)(DAT_0211a144 + 52) = 1;
}
