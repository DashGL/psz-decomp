// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x13c, exact bytes and relocation targets.
// Overlay 15 first keyboard touch selection; reconstructed from USA ROM.
// check: 2.0/sp2p3 target=0x13c candidate=0x13c words=0 exact_bytes=0 bad_relocs=0
extern unsigned char *data_0213e7dc;
extern const unsigned short data_0213a81c[], data_02139e68[][2], data_02139e2c[];
extern const unsigned short data_02139e48[][2], data_02139e58[][2];
extern const unsigned short data_02139e40[][2], data_02139e28[];
extern const int data_0213ac10[];
extern int FUN_overlay_15__02136a68(const unsigned short *);
extern void FUN_overlay_15__021363a4(const unsigned short *, const unsigned short *, unsigned short *);
extern void FUN_overlay_15__02132190(int);
void FUN_overlay_15__02125ca0(void) {
    unsigned short rect[4];
    int i;
    if (!FUN_overlay_15__02136a68(data_0213a81c)) return;
    ((signed char *)data_0213e7dc)[0x11e]=-1;
    for (i = 0; i < 47; i++) {
        FUN_overlay_15__021363a4(data_02139e68[i], data_02139e2c, rect);
        if (FUN_overlay_15__02136a68(rect)) {
            if (!data_0213e7dc[0x124]) { FUN_overlay_15__02132190(9); return; }
            FUN_overlay_15__02132190(0);
            data_0213e7dc[0x11e] = i;
            return;
        }
    }
    for (i = 0; i < 4; i++) {
        FUN_overlay_15__021363a4(data_02139e48[i], data_02139e58[i], rect);
        if (FUN_overlay_15__02136a68(rect)) {
            if ((i == 3 && !data_0213e7dc[0x123]) || (i == 2 && !data_0213e7dc[0x124])) {
                FUN_overlay_15__02132190(9); return;
            }
            FUN_overlay_15__02132190(data_0213ac10[i]);
            data_0213e7dc[0x11e] = i + 47;
            return;
        }
    }
    for (i = 0; i < 2; i++) {
        FUN_overlay_15__021363a4(data_02139e40[i], data_02139e28, rect);
        if (FUN_overlay_15__02136a68(rect)) {
            FUN_overlay_15__02132190(0);
            data_0213e7dc[0x11e] = i + 51;
            return;
        }
    }
}
