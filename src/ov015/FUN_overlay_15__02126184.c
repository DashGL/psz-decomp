// FUN_overlay_15__02126184 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// Overlay 15 first-layout keyboard button handling; reconstructed from ROM.
// check: 2.0/sp2p3 target=0x190 candidate=0x190 words=0 exact_bytes=0 bad_relocs=0
extern unsigned char *data_0213e7dc;
extern const unsigned char *data_0213abf8[];
extern const unsigned char data_0213a0cc[], data_02139e1c[];
extern int FUN_overlay_15__021369a8(unsigned int), FUN_overlay_15__02136978(unsigned int), FUN_overlay_15__021369d8(unsigned int);
extern void FUN_overlay_15__02126634(int), FUN_overlay_15__021264a8(int), FUN_overlay_15__02132190(int);
extern void FUN_overlay_15__02125fb8(void), FUN_overlay_15__02125fe0(void);
void FUN_overlay_15__02126184(void) {
    int key;
    if (FUN_overlay_15__021369a8(32)) FUN_overlay_15__02126634(0);
    if (FUN_overlay_15__021369a8(64)) FUN_overlay_15__02126634(1);
    if (FUN_overlay_15__021369a8(16)) FUN_overlay_15__02126634(2);
    if (FUN_overlay_15__021369a8(128)) FUN_overlay_15__02126634(3);
    if (FUN_overlay_15__02136978(1)) {
        key = (signed char)data_0213e7dc[0x121];
        if (key < 47) {
            if (!data_0213e7dc[0x124]) { FUN_overlay_15__02132190(9); return; }
            data_0213e7dc[0x11c] = data_0213abf8[data_0213e7dc[0x11d]][key];
            if (data_0213e7dc[0x11d] == 1) FUN_overlay_15__021264a8(0);
            return;
        }
        if (key - 47 < 4) {
            switch (key - 47) {
            case 0: FUN_overlay_15__02125fb8(); return;
            case 1: FUN_overlay_15__02125fe0(); return;
            case 2: if (!data_0213e7dc[0x124]) { FUN_overlay_15__02132190(9); return; } break;
            case 3: if (!data_0213e7dc[0x123]) { FUN_overlay_15__02132190(9); return; } break;
            }
            if (data_0213e7dc[0x11d] == 1) FUN_overlay_15__021264a8(0);
            data_0213e7dc[0x11c] = data_0213a0cc[key - 47];
            return;
        }
        data_0213e7dc[0x11c] = data_02139e1c[key - 51];
    }
    if (FUN_overlay_15__021369a8(2)) {
        if (!data_0213e7dc[0x123]) {
            if (!data_0213e7dc[0x125]) {
                FUN_overlay_15__02132190(9);
                data_0213e7dc[0x125] = 1;
            }
            return;
        }
        data_0213e7dc[0x11c] = 128;
    } else if (FUN_overlay_15__021369d8(2)) data_0213e7dc[0x125] = 0;
    if (FUN_overlay_15__02136978(1024)) FUN_overlay_15__02125fb8();
    if (FUN_overlay_15__02136978(2048)) FUN_overlay_15__02125fe0();
}
