// flags: -O4,p
extern unsigned char DAT_0213e86c[];
extern unsigned char DAT_0213a3bc[];
extern void FUN_overlay_15__02131064(void *, unsigned int, unsigned int);
void FUN_overlay_15__0212e2c4(void) {
    unsigned int v = DAT_0213a3bc[(int)DAT_0213e86c[0] - 11];
    void *p = ((void **)*(void **)(DAT_0213e86c + 8))[4];
    FUN_overlay_15__02131064(p, v, v);
}
