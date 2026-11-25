// flags: -O4,p
// Overlay 15 held-key highlight and repeat; reconstructed from USA ROM.
// check: 2.0/sp2p3 target=0x148 candidate=0x144 words=999 exact_bytes=999 bad_relocs=8
// near: ndiff=999/82 size=0x148 vers=2.0/sp2p3 next="match held-key loops, branch sharing and global-byte addressing"
extern unsigned char *data_0213e7e0;
extern const unsigned short data_0213a81c[], data_0213a13e[][2], data_0213a0ec[];
extern const unsigned short data_0213a114[][2], data_0213a0f4[], data_0213a11c[][2], data_0213a0f8[];
extern int FUN_overlay_15__02136a08(const unsigned short *);
extern void FUN_overlay_15__021363a4(const unsigned short *, const unsigned short *, unsigned short *);
extern void FUN_overlay_15__02127318(int);
extern void FUN_overlay_15__02132190(int);
void FUN_overlay_15__021271d0(void) {
    unsigned short rect[4];
    int i;
    if (!FUN_overlay_15__02136a08(data_0213a81c)) goto none;
    for (i = 0; i < 10; i++) {
        FUN_overlay_15__021363a4(data_0213a13e[i], data_0213a0ec, rect);
        if (FUN_overlay_15__02136a08(rect)) {
            if ((signed char)data_0213e7e0[0x61] != i) goto none;
            FUN_overlay_15__02127318(i);
            goto reset;
        }
    }
    for (i = 0; i < 2; i++) {
        FUN_overlay_15__021363a4(data_0213a114[i], data_0213a0f4, rect);
        if (FUN_overlay_15__02136a08(rect)) {
            if ((signed char)data_0213e7e0[0x61] != i + 10) goto none;
            FUN_overlay_15__02127318(i + 10);
            if (i != 0) goto reset;
            data_0213e7e0[0x65]++;
            if (data_0213e7e0[0x65] < 40) return;
            if (!data_0213e7e0[0x66]) {
                FUN_overlay_15__02132190(9);
                ((signed char *)data_0213e7e0)[0x61] = -1;
                return;
            }
            data_0213e7e0[0x60] = 16;
            data_0213e7e0[0x65] -= 7;
            return;
        }
    }
    for (i = 0; i < 2; i++) {
        FUN_overlay_15__021363a4(data_0213a11c[i], data_0213a0f8, rect);
        if (FUN_overlay_15__02136a08(rect)) {
            if ((signed char)data_0213e7e0[0x61] != i + 12) goto none;
            FUN_overlay_15__02127318(i + 12);
            goto reset;
        }
    }
none:
    FUN_overlay_15__02127318(-1);
reset:
    data_0213e7e0[0x65] = 0;
}
