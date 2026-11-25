// FUN_overlay_15__0212734c @ 0x0212734c (0x11c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch53.json; original draft retained for referenced provenance.
// Overlay 15 button keyboard dispatch; reconstructed from USA ROM.
// check: 2.0/sp2p3 target=0x11c candidate=0x11c words=0 exact_bytes=0 bad_relocs=0
extern unsigned char *data_0213e7e0;
extern const unsigned char data_0213a1d8[], data_0213a0e8[], data_0213a0e4[];
extern int FUN_overlay_15__021369a8(unsigned int);
extern int FUN_overlay_15__02136978(unsigned int);
extern int FUN_overlay_15__021369d8(unsigned int);
extern void FUN_overlay_15__021276d4(int);
extern void FUN_overlay_15__02132190(int);
void FUN_overlay_15__0212734c(void) {
    int key;
    if (FUN_overlay_15__021369a8(32)) FUN_overlay_15__021276d4(0);
    if (FUN_overlay_15__021369a8(64)) FUN_overlay_15__021276d4(1);
    if (FUN_overlay_15__021369a8(16)) FUN_overlay_15__021276d4(2);
    if (FUN_overlay_15__021369a8(128)) FUN_overlay_15__021276d4(3);
    if (FUN_overlay_15__02136978(1)) {
        key = (signed char)data_0213e7e0[0x63];
        if (key < 10) {
            if (data_0213e7e0[0x67]) data_0213e7e0[0x60] = data_0213a1d8[key];
            else FUN_overlay_15__02132190(9);
            return;
        }
        if (key - 10 < 2) {
            if ((key - 10 == 0 && !data_0213e7e0[0x66]) ||
                (key - 10 == 1 && !data_0213e7e0[0x68])) FUN_overlay_15__02132190(9);
            else data_0213e7e0[0x60] = data_0213a0e8[key - 10];
            return;
        }
        data_0213e7e0[0x60] = data_0213a0e4[key - 12];
    }
    if (FUN_overlay_15__021369a8(2)) {
        if (!data_0213e7e0[0x66]) {
            if (!data_0213e7e0[0x69]) {
                FUN_overlay_15__02132190(9);
                data_0213e7e0[0x69] = 1;
            }
        } else data_0213e7e0[0x60] = 16;
    } else if (FUN_overlay_15__021369d8(2)) data_0213e7e0[0x69] = 0;
}
