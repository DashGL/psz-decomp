// flags: -O4,p
// Overlay 15 second keyboard touch selection; reconstructed from USA ROM.
// check: 2.0/sp2p3 target=0x124 candidate=0x124 words=46 exact_bytes=183 bad_relocs=0
// near: ndiff=46/73 size=0x124 vers=2.0/sp2p3 next="recover aggregate stack layout and loop register scheduling"
extern unsigned char *data_0213e7e0;
extern const unsigned short data_0213a81c[], data_0213a13e[][2], data_0213a0ec[];
extern const unsigned short data_0213a114[][2], data_0213a0f4[];
extern const unsigned short data_0213a11c[][2], data_0213a0f8[];
extern int FUN_overlay_15__02136a68(const unsigned short *);
extern void FUN_overlay_15__021363a4(const unsigned short *, const unsigned short *, unsigned short *);
extern void FUN_overlay_15__02132190(int);
void FUN_overlay_15__02126f88(void) {
    unsigned short rect[4];
    int i;
    if (!FUN_overlay_15__02136a68(data_0213a81c)) return;
    ((signed char *)data_0213e7e0)[0x61] = -1;
    for (i = 0; i < 10; i++) {
        FUN_overlay_15__021363a4(data_0213a13e[i], data_0213a0ec, rect);
        if (FUN_overlay_15__02136a68(rect)) {
            if (!data_0213e7e0[0x67]) { FUN_overlay_15__02132190(9); return; }
            FUN_overlay_15__02132190(0);
            data_0213e7e0[0x61] = i;
            return;
        }
    }
    for (i = 0; i < 2; i++) {
        FUN_overlay_15__021363a4(data_0213a114[i], data_0213a0f4, rect);
        if (FUN_overlay_15__02136a68(rect)) {
            if ((i == 0 && !data_0213e7e0[0x66]) || (i == 1 && !data_0213e7e0[0x68])) {
                FUN_overlay_15__02132190(9); return;
            }
            FUN_overlay_15__02132190(0);
            data_0213e7e0[0x61] = i + 10;
            return;
        }
    }
    for (i = 0; i < 2; i++) {
        FUN_overlay_15__021363a4(data_0213a11c[i], data_0213a0f8, rect);
        if (FUN_overlay_15__02136a68(rect)) {
            FUN_overlay_15__02132190(0);
            data_0213e7e0[0x61] = i + 12;
            return;
        }
    }
}
