// flags: -O4,p -noThumb
extern unsigned char DAT_021180a0[];
int FUN_020628c0(void) {
    int r0 = 0;
    int r2 = 0;
    int r3 = 0;
    char *p = *(char **)(DAT_021180a0 + 8);
    if (*(unsigned short *)(p + 0x528) == 1 && *(unsigned char *)(p + 0x50c) == 0) {
        r3 = 1;
    }
    if (r3) {
        if (*(unsigned short *)(p + 0x526) == 0) {
            r2 = 1;
        }
    }
    if (r2 && *(unsigned short *)(p + 0x52a) != 0) {
        r0 = 1;
    }
    return r0;
}
