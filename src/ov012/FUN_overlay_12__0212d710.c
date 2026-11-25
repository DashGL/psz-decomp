// flags: -O4,s
typedef struct { unsigned short a, b, c, pad; int x, y; } Draw;
extern int FUN_02084bf8(void *);
extern int FUN_02084c1c(void *);
extern void FUN_02071d0c(Draw *);
extern void FUN_02090b44(Draw *);
extern void FUN_020c32b4(Draw *, int);
#pragma thumb off
extern unsigned FUN_02053860(void);
#pragma thumb on
extern int DAT_0213e20c[];
void FUN_overlay_12__0212d710(void) {
    Draw d;
    unsigned int glyph;
    if (FUN_02084bf8((void *)0x0211a51c)) {
        FUN_02071d0c(&d);
        FUN_02090b44(&d);
        d.x = 0x1000;
        d.y = 0xaf000;
        if (!DAT_0213e20c[4]) d.y += 0xc0000;
        glyph = (unsigned short)FUN_02053860();
        if (FUN_02084c1c((void *)0x0211a51c)) d.a = (unsigned short)glyph;
        else d.a = (unsigned short)(glyph + 4);
        FUN_020c32b4(&d, DAT_0213e20c[3]);
    }
}
