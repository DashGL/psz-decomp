// flags: -noThumb
extern unsigned int DAT_02101e24[4];
extern void FUN_0206973c(unsigned int, int);
void FUN_0200d5b0(unsigned int mask) {
    if (!mask) return;
    FUN_0206973c(mask, 0);
    DAT_02101e24[2] &= ~mask;
}
