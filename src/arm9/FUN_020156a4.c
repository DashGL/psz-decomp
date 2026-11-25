// flags: -O4,p -noThumb
extern volatile unsigned short * const DAT_020ec024[];
extern unsigned int DAT_020f96e4;
extern void FUN_0206740c(unsigned int, unsigned int);
extern void FUN_02064e48(unsigned int, unsigned int, unsigned int, unsigned int);
extern void FUN_020654dc(unsigned int, unsigned int, unsigned int);

void FUN_020156a4(int screen, unsigned int resource, unsigned int dimensions) {
    unsigned int offset = 0, n, src, size, bank, base, dma;
    if (dimensions) {
        n = (unsigned int)*(unsigned short *)(dimensions + 2) * *(unsigned short *)(dimensions + 4);
        offset = n * (*(unsigned int *)(resource + 4) == 4 ? 64 : 32);
    }
    FUN_0206740c(*(unsigned int *)(resource + 20), *(unsigned int *)(resource + 16));
    bank = (*DAT_020ec024[screen] & 60) >> 2;
    size = *(unsigned int *)(resource + 16);
    src = *(unsigned int *)(resource + 20);
    if (screen > 3) {
        base = 0x06200000;
    } else {
        base = 0x06000000 + (((*(volatile unsigned int *)0x04000000 & 0x07000000) >> 24) << 16);
    }
    base = (bank << 14) + base;
    dma = DAT_020f96e4;
    if (dma != 0xffffffff) {
        FUN_02064e48(dma, src, base + offset, size);
    } else {
        FUN_020654dc(src, base + offset, size);
    }
}
