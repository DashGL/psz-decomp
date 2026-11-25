// flags: -O4,p -noThumb
void FUN_02057188(unsigned int *s) {
    *(volatile unsigned short *)0x04000204 = (unsigned short)((s[0] << 2) | (*(volatile unsigned short *)0x04000204 & ~0xc));
    *(volatile unsigned short *)0x04000204 = (unsigned short)((s[1] << 4) | (*(volatile unsigned short *)0x04000204 & ~0x10));
}
