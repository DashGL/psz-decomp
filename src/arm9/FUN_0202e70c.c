// flags: -O4,p -noThumb
extern unsigned char *DAT_02108c0c;
unsigned short FUN_0202e70c(int start) {
    int i; unsigned int mask = *(unsigned int *)(DAT_02108c0c + 0x2264); int cur = start;
    for (i = 0; i < 13; i++, cur++) { if (mask & (1 << ((cur % 13) + 1))) break; }
    return (unsigned short)(((start + i) % 13) + 1);
}
