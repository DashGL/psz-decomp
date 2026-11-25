// flags: -O4,s
typedef struct { unsigned x, y; } Point;
typedef struct { unsigned short glyph, b, c, pad; unsigned x, y; } Draw;
extern const Point DAT_overlay_12__0213bc8c[];
extern const Point DAT_overlay_12__0213bcb4;
extern const Point DAT_overlay_12__0213bcbc;
extern const Point DAT_overlay_12__0213bccc;
extern int FUN_overlay_12__021341fc(void), FUN_overlay_12__0213220c(void), FUN_overlay_12__02131ad0(int);
extern char *FUN_02086e3c(void);
extern int *FUN_020870c4(void *);
extern int FUN_020b0494(void *);
extern void *FUN_02079114(void);
extern void FUN_02079160(void *, const Point *, int, int, int, int, int, int, int);
extern void FUN_02071d0c(Draw *), FUN_02090b44(Draw *), FUN_0208971c(void *, const void *), FUN_020c32b4(Draw *, int);

void FUN_overlay_12__02135338(void)
{
    int currency, used, capacity, handle;
    void *renderer;
    Point point;
    Draw draw;
    unsigned is_alt = (FUN_overlay_12__021341fc() == 4);
    if (is_alt) {
        currency = FUN_overlay_12__0213220c();
        point = DAT_overlay_12__0213bc8c[3];
        FUN_02071d0c(&draw);
        FUN_02090b44(&draw);
        draw.glyph = 14;
        FUN_0208971c(&draw.x, &point);
        FUN_020c32b4(&draw, FUN_overlay_12__02131ad0(5));
    } else currency = FUN_020870c4(FUN_02086e3c())[13];
    renderer = FUN_02079114();
    handle = FUN_overlay_12__02131ad0(1);
    FUN_02079160(renderer, &DAT_overlay_12__0213bcb4, 2, 8, currency, handle, -1, 8, 0);
    used = FUN_020b0494(FUN_02086e3c() + 16);
    capacity = *(short *)(FUN_02086e3c() + 24);
    renderer = FUN_02079114();
    handle = FUN_overlay_12__02131ad0(0);
    FUN_02079160(renderer, &DAT_overlay_12__0213bcbc, 0, 2, used, handle, 11, 8, 0);
    renderer = FUN_02079114();
    handle = FUN_overlay_12__02131ad0(0);
    FUN_02079160(renderer, &DAT_overlay_12__0213bccc, 0, 2, capacity, handle, 11, 8, 0);
}
