// flags: -O4,s
typedef struct { unsigned short h[4]; int xy[2]; } Draw;
extern int DAT_overlay_3__0211ede4[], DAT_overlay_3__0211edf0[];
extern void FUN_02071d0c(Draw *), FUN_020c32b4(Draw *, int);
#pragma thumb off
extern unsigned FUN_02009c84(int);
extern unsigned FUN_0200923c(unsigned, unsigned);
extern unsigned FUN_02009f00(unsigned, unsigned);
extern int FUN_02009c50(unsigned);
#pragma thumb on

void FUN_overlay_3__0211eb68(int *self)
{
    Draw d;
    int value;
    unsigned rounded;
    if (self[7] != -1) {
        FUN_02071d0c(&d);
        d.h[0] = 1;
        d.xy[0] = FUN_02009c50(FUN_0200923c(0x3f000000, FUN_02009c84(0x70000)));
        d.xy[1] = FUN_02009c50(FUN_0200923c(0x3f000000, FUN_02009c84(0x133000)));
        FUN_020c32b4(&d, 0);
        d.h[0] = 3;
        value = DAT_overlay_3__0211ede4[self[9]];
        if (value > 0) rounded = FUN_0200923c(0x3f000000, FUN_02009c84((int)((unsigned int)value << 12)));
        else rounded = FUN_02009f00(FUN_02009c84((int)((unsigned int)value << 12)), 0x3f000000);
        d.xy[0] = FUN_02009c50(rounded);
        value = DAT_overlay_3__0211edf0[self[9]];
        if (value > 0) rounded = FUN_0200923c(0x3f000000, FUN_02009c84((int)((unsigned int)value << 12)));
        else rounded = FUN_02009f00(FUN_02009c84((int)((unsigned int)value << 12)), 0x3f000000);
        d.xy[1] = FUN_02009c50(rounded);
        FUN_020c32b4(&d, 0);
    }
}
