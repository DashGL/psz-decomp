// flags: -O4,s
typedef struct { unsigned short glyph, unused, z, pad; int x, y; } Draw;
extern int DAT_0212dfc4[];
extern char DAT_0212dfdc[];
extern int FUN_020bbf6c(unsigned), FUN_overlay_16__0212087c(void *);
extern void FUN_02079308(int), FUN_overlay_16__02120404(void *), FUN_overlay_16__021201b8(void *), FUN_020c324c(Draw *, int);
extern void *FUN_overlay_16__0212030c(void);
void FUN_overlay_16__02120000(void) {
    Draw draw;
    int h;
    if (FUN_020bbf6c(8) == 1) { FUN_02079308(1); return; }
    if (!FUN_overlay_16__0212087c(FUN_overlay_16__0212030c())) { FUN_02079308(1); return; }
    FUN_overlay_16__02120404(FUN_overlay_16__0212030c());
    if (DAT_0212dfc4[0] == 1) { FUN_overlay_16__021201b8(DAT_0212dfdc); return; }
    h = DAT_0212dfc4[2];
    if (h == -1) return;
    draw.glyph = 0; draw.unused = 0; draw.z = 0; draw.glyph = 0;
    draw.y = 0x16c000; draw.x = 0;
    FUN_020c324c(&draw, h);
}
