// flags: -O4,p
extern unsigned char DAT_0213d020[];
extern int DAT_0213c2c0[];
extern unsigned char DAT_0213c2e4[];
extern unsigned char DAT_0213c2e0[];
extern void FUN_overlay_15__021206d0(void *, int, int);
void FUN_overlay_15__0211f1ac(unsigned char *p) {
    FUN_overlay_15__021206d0(DAT_0213d020, 0, 8);
    DAT_0213c2c0[4] = 1;
    FUN_overlay_15__021206d0(DAT_0213c2e4, 0, 28);
    DAT_0213c2c0[9] = (int)(p + 6);
    DAT_0213c2c0[10] = *(unsigned short *)(p + 4);
    DAT_0213c2c0[11] = *(unsigned short *)p & 15;
    DAT_0213c2e0[29] = p[2];
    DAT_0213c2c0[12] = 0;
    DAT_0213c2c0[13] = (int)0xc0a80b01U;
    DAT_0213c2e0[28] = 0;
}
