// flags: -O4,s
typedef struct { unsigned short glyph, a, b, pad; int x, y; } Draw;
typedef struct { unsigned short glyph, pad; int x, percent; } Row;
extern const Row DAT_0213c11c[];
extern void FUN_02071d0c(void *), FUN_02090b44(void *), FUN_020c32b4(void *, int), FUN_0207920c(void *, int, int, int, int, int, int), FUN_020c331c(int, int, int, int);
extern void *FUN_02079114(void), *FUN_02077f3c(void);
extern int FUN_02078038(void *);
void FUN_overlay_12__021370e0(char *s) {
    Draw d; void *renderer; int y; int i;
    FUN_02071d0c(&d); FUN_02090b44(&d); renderer = FUN_02079114();
    for (i = 0; i < 5; i++) {
        const Row *r = &DAT_0213c11c[i];
        y = i * 2;
        d.glyph = r->glyph; d.x = 0xb0000; d.y = y * 0xc000 + 0xfb000;
        FUN_020c32b4(&d, *(int *)(s + 0x48));
        y = (y + 1) * 0xc000;
        FUN_0207920c(renderer, r->x, y + 0xfb000, 2, 2, 0, 0);
        if (r->percent) FUN_020c331c(2, 0xf0000, y + 0xfb000, FUN_02078038(FUN_02077f3c()));
    }
}
