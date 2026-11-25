// flags: -O4,p -noThumb
void FUN_0205e86c(int enabled, unsigned int first, unsigned int second, unsigned int value) {
    if (enabled) {
        *(volatile unsigned short *)0x0400035c = (unsigned short)value;
        *(volatile unsigned short *)0x04000060 =
            (unsigned short)((*(volatile unsigned short *)0x04000060 & ~0x3f40u) | ((second << 8) | (first << 6) | 0x80u));
    } else {
        *(volatile unsigned short *)0x04000060 = (unsigned short)(*(volatile unsigned short *)0x04000060 & 0xcf7f);
    }
}
