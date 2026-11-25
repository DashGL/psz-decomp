// flags: -O4,p -noThumb
unsigned int FUN_0205c600(void) {
    while (*(volatile unsigned short *)0x04000280 & 0x8000) {}
    return (unsigned int)((*(volatile unsigned long long *)0x040002a0 + 0x80000) >> 20);
}
