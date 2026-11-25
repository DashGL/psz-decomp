// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xac, exact bytes and relocation targets.
// check: exact
// target: FUN_overlay_15__02130094 @ 0x02130094 (size 0xac, ov015)

struct State94 {
    signed char a;
    signed char b;
    unsigned char c;
    void *owner;
};
extern struct State94 data_0213e894;
extern const signed char data_0213a592[][4][4];
extern const unsigned short data_0213a5f2[][4][4];
extern const unsigned short data_0213a5f4[][4][4];
extern const unsigned short data_0213a5f6[][4][4];
extern const unsigned short data_0213a5f8[][4][4];
extern int FUN_overlay_15__02127e5c(int);
extern void FUN_overlay_15__02132190(int);
extern void FUN_overlay_15__021254e0(int, int, int, int);

void FUN_overlay_15__02130094(int dir)
{
    int b = data_0213e894.b;
    int next = data_0213a592[FUN_overlay_15__02127e5c(1)][b][dir];

    if (next != -1) {
        if (next == 0) {
            data_0213e894.a = (signed char)b;
        }
        if (next == -2) {
            data_0213e894.b = data_0213e894.a;
        } else {
            data_0213e894.b = (signed char)next;
        }
        FUN_overlay_15__02132190(8);
        FUN_overlay_15__021254e0(
            data_0213a5f2[FUN_overlay_15__02127e5c(1)][data_0213e894.b][0],
            data_0213a5f6[FUN_overlay_15__02127e5c(1)][data_0213e894.b][0],
            data_0213a5f4[FUN_overlay_15__02127e5c(1)][data_0213e894.b][0],
            data_0213a5f8[FUN_overlay_15__02127e5c(1)][data_0213e894.b][0]);
    }
}
