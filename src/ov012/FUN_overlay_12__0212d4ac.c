// flags: -O4,s
typedef struct {
    unsigned short a, b, c, pad;
    int x, y;
} Draw;
extern void FUN_02071d0c(Draw *);
extern void FUN_02090b44(Draw *);
extern void FUN_020c32b4(Draw *, int);
extern int FUN_overlay_12__02131ad0(int);

void FUN_overlay_12__0212d4ac(int start, int end, int x, int *scroll) {
    Draw d;
    int count;
    int page;
    int span;
    int selection;
    int step;
    count = scroll[0];
    page = scroll[1];
    selection = scroll[3];
    if (count > page) {
        FUN_02071d0c(&d);
        FUN_02090b44(&d);
        d.x = x;
        span = count - page;
        step = (end - start) / span;
        d.a = 78;
        if (span <= selection) {
            d.y = end;
        } else {
            d.y = start + step * selection;
        }
        FUN_020c32b4(&d, FUN_overlay_12__02131ad0(0));
        d.a = 11;
        d.y = start;
        FUN_020c32b4(&d, FUN_overlay_12__02131ad0(4));
    }
}
