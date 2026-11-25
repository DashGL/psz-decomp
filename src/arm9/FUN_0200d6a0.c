// flags: -O4,s -noThumb
extern unsigned char DAT_021022a4[];
void FUN_0200d6a0(unsigned int index, unsigned int value) {
    *(unsigned int *)(DAT_021022a4 + index * 36) = value;
}
