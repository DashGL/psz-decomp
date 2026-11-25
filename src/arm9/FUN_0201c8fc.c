// flags: -O4,p -noThumb
extern unsigned char DAT_02107004[];
void FUN_0201c8fc(void) {
    while (*(volatile unsigned int *)(DAT_02107004 + 4)) {}
}
