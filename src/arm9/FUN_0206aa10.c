// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x94, exact bytes and relocation targets.
// flags: -noThumb
extern int FUN_0206af70(unsigned short *a, int b, int c, int d, int e, int f, int g, int h, int i);

int FUN_0206aa10(unsigned short *param_1) {
    unsigned char *p = (unsigned char *)0x027ffc80;
    unsigned short f58 = *(unsigned short *)(p + 0x58);
    unsigned short f5a = *(unsigned short *)(p + 0x5a);
    unsigned short f5e = *(unsigned short *)(p + 0x5e);
    unsigned short f60 = *(unsigned short *)(p + 0x60);
    unsigned char f5c = *(unsigned char *)(p + 0x5c);
    unsigned char f5d = *(unsigned char *)(p + 0x5d);
    unsigned char f62 = *(unsigned char *)(p + 0x62);
    unsigned char f63 = *(unsigned char *)(p + 0x63);
    if ((f58 == 0 && f5e == 0 && f5a == 0 && f60 == 0) ||
        FUN_0206af70(param_1, f58, f5a, f5c, f5d, f5e, f60, f62, f63) != 0) {
        param_1[0] = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        return 1;
    }
    return 1;
}
