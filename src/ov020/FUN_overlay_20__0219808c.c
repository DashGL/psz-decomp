// flags: -O4,s
typedef struct { unsigned int x, y, z; } Vec;
extern unsigned int DAT_0219ff40;
extern unsigned int DAT_0219f8a0[];
extern const Vec DAT_0219f8c0;
void FUN_overlay_20__0219808c(unsigned int *p) {
    unsigned int f = DAT_0219ff40;
    if (!(f & 1)) {
        DAT_0219f8a0[8] = 0x64000;
        DAT_0219f8a0[9] = 0x64000;
        DAT_0219f8a0[10] = 0x64000;
        DAT_0219ff40 = f | 1;
    }
    *(Vec *)(p + 14) = DAT_0219f8c0;
}
