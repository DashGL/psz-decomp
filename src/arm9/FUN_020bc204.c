// flags: -O4,s
extern unsigned char DAT_0211b360[];
unsigned int FUN_020bc204(unsigned short *x, unsigned short *y) {
    if (((unsigned int *)DAT_0211b360)[3]) { *x = *(unsigned short *)(DAT_0211b360 + 16); *y = *(unsigned short *)(DAT_0211b360 + 18); } return ((unsigned int *)DAT_0211b360)[3];
}
