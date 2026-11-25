// flags: -O4,p
extern volatile unsigned short DAT_027fffa8;
extern int FUN_overlay_15__02136a68(unsigned short *);
int FUN_overlay_15__02136b88(unsigned short *p) {
    unsigned short bounds[4];
    if (((int)(DAT_027fffa8 & 0x8000)) >> 15) return 0;
    bounds[0] = p[0];
    bounds[1] = p[1];
    bounds[2] = p[0] + p[2];
    bounds[3] = p[1] + p[3];
    return FUN_overlay_15__02136a68(bounds);
}
