// flags: -O4,p
extern char *DAT_0211c85c;
extern void FUN_0200d800(void *, unsigned int, unsigned int);
void FUN_020c1bb4(unsigned int value, unsigned int option) {
    *(unsigned int *)(DAT_0211c85c + 0x104) = value;
    FUN_0200d800(DAT_0211c85c + 0xb8, value, option);
}
