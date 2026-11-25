// flags: -O4,p -noThumb
extern unsigned short DAT_02112598;
extern unsigned short DAT_020f96e0;

void FUN_0205ce44(void) {
    DAT_020f96e0 = 1;
    if (DAT_02112598 != 0) {
        *(volatile unsigned int *)0x04000000 = (*(volatile unsigned int *)0x04000000 & ~0x30000u) | (DAT_02112598 << 16);
    } else {
        *(volatile unsigned int *)0x04000000 |= 0x10000;
    }
}
