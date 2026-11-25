// flags: -noThumb
void FUN_0200d8b0(unsigned char *volatile *p, unsigned short a, unsigned short b) {
    if (*p) {
        *(unsigned short *)(*p + 0x34) = 2;
        *(unsigned short *)(*p + 0x38) = a;
        *(unsigned short *)(*p + 0x3a) = b;
    }
}
