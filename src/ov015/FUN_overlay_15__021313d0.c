// flags: -O4,s
struct Tbl { unsigned char a[32]; };
extern unsigned char *DAT_0213e8bc;
extern struct Tbl DAT_0213a658;
extern int FUN_overlay_15__02136bc8(unsigned short *);
extern void FUN_overlay_15__02131518(int);
void FUN_overlay_15__021313d0(void) {
    unsigned short point[2];
    unsigned char *p;
    unsigned int span;
    int y;
    FUN_overlay_15__02136bc8(point);
    p = DAT_0213e8bc;
    span = DAT_0213a658.a[p[27]];
    y = (int)point[1] - *(unsigned short *)(p + 18) - (span >> 1);
    if (y < 0) y = 0;
    else if (y >= (int)(p[25] - span)) y = p[25] - span;
    FUN_overlay_15__02131518(y);
    DAT_0213e8bc[29] = 3;
}
