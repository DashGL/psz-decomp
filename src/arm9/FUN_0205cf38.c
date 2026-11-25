// flags: -O4,p -noThumb
int FUN_0205cf38(volatile unsigned short *p) {
    unsigned short mode = *p & 0xc000;
    if (mode == 0) return 0;
    if (mode == 0x4000) return *p & 0x1f;
    if (mode == 0x8000) return -(*p & 0x1f);
    return 0;
}
