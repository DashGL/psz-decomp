// flags: -O4,s
typedef struct {
    int x, y;
} Point;
extern const volatile Point DAT_021384d0[];
extern int FUN_overlay_12__02131ad0(int);
extern void *FUN_02079114(void);
extern void FUN_02079160(void *, const Point *, int, int, int, int, int, int, int);

void FUN_overlay_12__021280a0(void *unused, int first, int second) {
    int h = FUN_overlay_12__02131ad0(1);
    Point a, b;
    int ax = DAT_021384d0[1].x;
    int ay = DAT_021384d0[1].y;
    a.x = ax;
    a.y = ay;
    b.x = DAT_021384d0[0].x;
    b.y = DAT_021384d0[0].y;
    void *r = FUN_02079114();
    FUN_02079160(r, &a, 2, 8, first, h, -1, 8, 0);
    FUN_02079160(r, &b, 2, 8, second, h, -1, 8, 0);
}
