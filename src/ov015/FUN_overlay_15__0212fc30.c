// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xd0, exact bytes and relocation targets.
// check: exact
// target: FUN_overlay_15__0212fc30 @ 0x0212fc30 (size 0xd0, ov015)

struct State94 {
    signed char a;
    signed char b;
    unsigned char c;
    void *owner;
};
extern struct State94 data_0213e894;
extern const signed char data_0213a634[];
extern const unsigned short data_0213a5f2[][4][4];
extern const unsigned short data_0213a5f4[][4][4];
extern const unsigned short data_0213a5f6[][4][4];
extern const unsigned short data_0213a5f8[][4][4];
extern unsigned char *FUN_overlay_15__021318ac(void);
extern int FUN_overlay_15__02127e40(void);
extern void FUN_overlay_15__0212fd00(void);
extern void FUN_overlay_15__02125638(void);
extern void FUN_overlay_15__02125214(int, int, int);
extern void FUN_overlay_15__02125320(int);
extern int FUN_overlay_15__02127e5c(int);
extern void FUN_overlay_15__021254e0(int, int, int, int);
extern void FUN_overlay_15__02127de4(void (*)(void));
extern void FUN_overlay_15__0212fd98(void);

void FUN_overlay_15__0212fc30(void)
{
    unsigned char *cfg = FUN_overlay_15__021318ac();

    data_0213e894.c = 0;
    if (data_0213e894.a == 0) {
        data_0213e894.a = 1;
    }
    if (FUN_overlay_15__02127e40() != 0) {
        if (data_0213e894.b == 2) {
            data_0213e894.b = 0;
        }
        if (data_0213e894.a == 2) {
            data_0213e894.a = 1;
        }
    }
    FUN_overlay_15__0212fd00();
    FUN_overlay_15__02125638();
    FUN_overlay_15__02125214(0x32, data_0213a634[FUN_overlay_15__02127e40()], cfg[0xf4] + 1);
    FUN_overlay_15__02125320(1);
    FUN_overlay_15__021254e0(
        data_0213a5f2[FUN_overlay_15__02127e5c(1)][data_0213e894.b][0],
        data_0213a5f6[FUN_overlay_15__02127e5c(1)][data_0213e894.b][0],
        data_0213a5f4[FUN_overlay_15__02127e5c(1)][data_0213e894.b][0],
        data_0213a5f8[FUN_overlay_15__02127e5c(1)][data_0213e894.b][0]);
    FUN_overlay_15__02127de4(FUN_overlay_15__0212fd98);
}
