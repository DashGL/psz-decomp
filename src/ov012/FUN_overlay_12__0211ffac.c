// flags: -O4,s
typedef struct {
    unsigned x, y;
} Point;

typedef struct {
    Point points[2];
} Positions;

typedef struct {
    unsigned short glyph, a, z, pad;
    Point pos;
} Draw;

extern const Positions DAT_02137c04;
extern const Positions DAT_02137c14;
extern unsigned FUN_overlay_12__02131ad0(unsigned);
extern void FUN_02071d0c(Draw *);
extern void FUN_02090b44(Draw *);
extern void FUN_0208971c(Point *, const Point *);
extern void FUN_020c32b4(Draw *, unsigned);

void FUN_overlay_12__0211ffac(char *self)
{
    unsigned handle, first, second, value;
    Draw b, a;
    Positions pa, pb;

    if (*(int *)(self + 3020) <= *(int *)(self + 3024)) {
        return;
    }
    handle = FUN_overlay_12__02131ad0(7);
    first = 0;
    second = 0;
    value = *(unsigned *)(self + 28);
    if (value < 20 && value != 0) {
        value++;
        second = 1;
        *(unsigned *)(self + 28) = value;
        if (value >= 13) {
            *(unsigned *)(self + 28) = 0;
            second = 0;
        }
    } else if (value >= 20) {
        value = *(volatile unsigned *)(self + 28) + 1;
        first = 1;
        *(unsigned *)(self + 28) = value;
        if (value >= 23) {
            first = 0;
            *(unsigned *)(self + 28) = 0;
        }
    }
    FUN_02071d0c(&a);
    FUN_02071d0c(&b);
    FUN_02090b44(&a);
    FUN_02090b44(&b);
    a.glyph = 5;
    b.glyph = 6;
    pa = DAT_02137c04;
    pb = DAT_02137c14;
    FUN_0208971c(&a.pos, &pa.points[second]);
    FUN_0208971c(&b.pos, &pb.points[first]);
    FUN_020c32b4(&a, handle);
    FUN_020c32b4(&b, handle);
}
