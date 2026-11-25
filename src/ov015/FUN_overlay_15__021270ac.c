// FUN_overlay_15__021270ac @ 0x021270ac (0x124, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch52.json; original draft retained for referenced provenance.
// Overlay 15 touch-release keyboard dispatch; reconstructed from USA ROM.
// check: 2.0/sp2p3 target=0x124 candidate=0x124 words=0 exact_bytes=0 bad_relocs=0
extern unsigned char *data_0213e7e0;
extern const unsigned short data_0213a81c[], data_0213a13e[][2], data_0213a0ec[];
extern const unsigned short data_0213a114[][2], data_0213a0f4[], data_0213a11c[][2], data_0213a0f8[];
extern const unsigned char data_0213a1d8[], data_0213a0e8[], data_0213a0e4[];
extern int FUN_overlay_15__02136b28(const unsigned short *);
extern void FUN_overlay_15__021363a4(const unsigned short *, const unsigned short *, unsigned short *);
extern void FUN_overlay_15__02127674(void);
void FUN_overlay_15__021270ac(void) {
    unsigned short rect[4];
    int i;
    data_0213e7e0[0x60] = 0;
    if (!FUN_overlay_15__02136b28(data_0213a81c)) return;
    for (i = 0; i < 10; i++) {
        FUN_overlay_15__021363a4(data_0213a13e[i], data_0213a0ec, rect);
        if (FUN_overlay_15__02136b28(rect)) {
            if ((signed char)data_0213e7e0[0x61] != i) return;
            data_0213e7e0[0x60] = data_0213a1d8[i];
            data_0213e7e0[0x63] = i;
            FUN_overlay_15__02127674();
            return;
        }
    }
    for (i = 0; i < 2; i++) {
        FUN_overlay_15__021363a4(data_0213a114[i], data_0213a0f4, rect);
        if (FUN_overlay_15__02136b28(rect)) {
            if ((signed char)data_0213e7e0[0x61] != i + 10) return;
            data_0213e7e0[0x60] = data_0213a0e8[i];
            data_0213e7e0[0x63] = i + 10;
            FUN_overlay_15__02127674();
            return;
        }
    }
    for (i = 0; i < 2; i++) {
        FUN_overlay_15__021363a4(data_0213a11c[i], data_0213a0f8, rect);
        if (FUN_overlay_15__02136b28(rect)) {
            if ((signed char)data_0213e7e0[0x61] != i + 12) return;
            data_0213e7e0[0x60] = data_0213a0e4[i];
            data_0213e7e0[0x63] = i + 12;
            FUN_overlay_15__02127674();
            return;
        }
    }
}
