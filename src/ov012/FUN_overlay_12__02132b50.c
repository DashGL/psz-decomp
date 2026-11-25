// flags: -O4,s
typedef struct { unsigned short glyph, a, b, pad; int x, y; } Draw;
extern int FUN_overlay_12__02131ad0(int);
extern void FUN_02071d0c(void *), FUN_02090b44(void *), FUN_020c32b4(void *, int);
void FUN_overlay_12__02132b50(char *s) {
    int handle, glyph;
    Draw d;
    switch (*(int *)(s + 76)) {
    case 0: glyph = 6; handle = FUN_overlay_12__02131ad0(2); break;
    case 1: glyph = 5; handle = FUN_overlay_12__02131ad0(5); break;
    default: return;
    }
    FUN_02071d0c(&d);
    FUN_02090b44(&d);
    d.x = 0x42000;
    d.y = 0x35000;
    d.glyph = glyph;
    FUN_020c32b4(&d, handle);
}
