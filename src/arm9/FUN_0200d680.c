// flags: -O4,s -noThumb
extern unsigned char DAT_021022a0[];
void FUN_0200d680(unsigned int index, unsigned int value) {
    *(unsigned int *)(DAT_021022a0 + index * 36) = (unsigned short)value;
}
