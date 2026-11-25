// flags: -O4,p
extern int FUN_overlay_15__0212d964(unsigned int), FUN_overlay_15__0212e380(void), FUN_overlay_15__0212de6c(unsigned int);
extern void FUN_overlay_15__02132190(int), FUN_overlay_15__0212d294(int), FUN_overlay_15__0212d2e4(int);
extern void FUN_overlay_15__0212e2c4(void), FUN_overlay_15__02132e00(int, int, int, int, int);
extern void FUN_overlay_15__0212e3fc(void), FUN_overlay_15__0212d494(void);
extern void FUN_overlay_15__02127de4(void (*)(void));
extern void FUN_overlay_15__0212d9cc(int, int, int), FUN_overlay_15__0212db94(void), FUN_overlay_15__021311cc(void);
extern unsigned char *DAT_overlay_15__0213e86c[];
extern unsigned char DAT_overlay_15__0213a4b8[];

void FUN_overlay_15__0212d190(unsigned int item)
{
    if (!FUN_overlay_15__0212d964(item)) {
        FUN_overlay_15__02132190(9);
        return;
    }
    switch (item) {
    case 2:
    case 3:
        FUN_overlay_15__02132190(6);
        FUN_overlay_15__0212d294(((item - 2) ^ 1) ? 1 : 0);
        return;
    case 7:
    case 8:
        FUN_overlay_15__02132190(6);
        FUN_overlay_15__0212d2e4(((item - 7) ^ 1) ? 1 : 0);
        return;
    case 0:
    case 1:
    case 4:
    case 5:
    case 6:
    default:
        DAT_overlay_15__0213e86c[2][0x40] = (unsigned char)item;
        if (item - 11 <= 1u) {
            FUN_overlay_15__0212e2c4();
            if (!FUN_overlay_15__0212e380()) {
                FUN_overlay_15__02132190(9);
                FUN_overlay_15__02132e00(6, 1, 1, -1, 0);
                FUN_overlay_15__02127de4(FUN_overlay_15__0212e3fc);
                return;
            }
            if (item == 11) FUN_overlay_15__02132190(6);
            else FUN_overlay_15__02132190(14);
        } else if (item == 13) {
            FUN_overlay_15__0212e2c4();
            FUN_overlay_15__02132190(7);
        } else {
            FUN_overlay_15__02132190(6);
            FUN_overlay_15__0212d9cc(0, 1, FUN_overlay_15__0212de6c(DAT_overlay_15__0213a4b8[item]));
            FUN_overlay_15__0212db94();
        }
        FUN_overlay_15__021311cc();
        FUN_overlay_15__02127de4(FUN_overlay_15__0212d494);
    }
}
