// flags: -O4,p -noThumb
void FUN_0205c638(unsigned int denom) {
    *(volatile unsigned short *)0x04000280 = 1;
    *(volatile unsigned long long *)0x04000290 = (unsigned long long)0x1000 << 32;
    *(volatile unsigned long long *)0x04000298 = (unsigned long long)denom;
}
