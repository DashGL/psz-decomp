// flags: -O4,s
#pragma thumb off
extern int FUN_0205c73c(int, int);
#pragma thumb on
extern void FUN_overlay_15__02132190(int);
extern void FUN_overlay_15__021254e0(int, int, int, int);
extern unsigned char DAT_0213e828;
typedef struct { unsigned short a, b, c, d; } Row;
extern Row DAT_0213a276[];
void FUN_overlay_15__0212949c(int direction) {
    if (direction == 1) {
        DAT_0213e828 = FUN_0205c73c(DAT_0213e828 + 2, 3);
    } else {
        DAT_0213e828 = FUN_0205c73c(DAT_0213e828 + 1, 3);
    }
    FUN_overlay_15__02132190(8);
    FUN_overlay_15__021254e0(
        DAT_0213a276[DAT_0213e828].a,
        DAT_0213a276[DAT_0213e828].c,
        DAT_0213a276[DAT_0213e828].b,
        DAT_0213a276[DAT_0213e828].d
    );
}
