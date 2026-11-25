// flags: -O4,p -noThumb
extern char DAT_027e0000[];
extern char DAT_00000800[];
void FUN_02065e8c(void) {
    unsigned int base = (unsigned int)DAT_027e0000;
    *(volatile unsigned int *)(base + 0x3f80 - 4) = 0xfddb597d;
    *(volatile unsigned int *)(base + 0x3f80 - (unsigned int)DAT_00000800) = 0x7bf9dd5b;
}
