// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x104, exact bytes and relocation targets.
// check: exact
// target: FUN_overlay_15__0212fe28 @ 0x0212fe28 (size 0x104, ov015)

struct State94 {
    signed char a;
    signed char b;
    unsigned char c;
    void *owner;
};
extern struct State94 data_0213e894;
extern const unsigned char data_0213a5b2[][4][8];
extern const unsigned short data_0213a5f2[][4][4];
extern const unsigned short data_0213a5f4[][4][4];
extern const unsigned short data_0213a5f6[][4][4];
extern const unsigned short data_0213a5f8[][4][4];
extern int FUN_overlay_15__02127e5c(int);
extern int FUN_overlay_15__02136a68(const void *);
extern void FUN_overlay_15__02124ec4(int);
extern void FUN_overlay_15__021254e0(int, int, int, int);
extern int FUN_overlay_15__02136978(int);
extern int FUN_overlay_15__021369a8(int);
extern void FUN_overlay_15__02130094(int);

void FUN_overlay_15__0212fe28(void)
{
    unsigned int i;

    for (i = 0; i < 4; i++) {
        if (FUN_overlay_15__02136a68(data_0213a5b2[FUN_overlay_15__02127e5c(1)][i])) {
            FUN_overlay_15__02124ec4(1);
            data_0213e894.b = (signed char)i;
            FUN_overlay_15__021254e0(
                data_0213a5f2[FUN_overlay_15__02127e5c(1)][data_0213e894.b][0],
                data_0213a5f6[FUN_overlay_15__02127e5c(1)][data_0213e894.b][0],
                data_0213a5f4[FUN_overlay_15__02127e5c(1)][data_0213e894.b][0],
                data_0213a5f8[FUN_overlay_15__02127e5c(1)][data_0213e894.b][0]);
            return;
        }
    }
    if (FUN_overlay_15__02136978(1)) {
        FUN_overlay_15__02124ec4(1);
        return;
    }
    if (FUN_overlay_15__02136978(2)) {
        FUN_overlay_15__02124ec4(0);
        return;
    }
    if (FUN_overlay_15__021369a8(0x40)) {
        FUN_overlay_15__02130094(1);
        return;
    }
    if (FUN_overlay_15__021369a8(0x80)) {
        FUN_overlay_15__02130094(3);
        return;
    }
    if (FUN_overlay_15__021369a8(0x20)) {
        FUN_overlay_15__02130094(0);
        return;
    }
    if (FUN_overlay_15__021369a8(0x10)) {
        FUN_overlay_15__02130094(2);
    }
}
