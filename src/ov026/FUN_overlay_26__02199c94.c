//cpp
// flags: -O4,s
extern "C" {
extern void FUN_02037390(int *, void *);
extern unsigned int FUN_02037208(void *, unsigned int);
}
struct Cfg { int a; int thresh; };
extern "C" Cfg DAT_0219b5e8;
extern "C" int FUN_overlay_26__02199c94(int *p, void *v) {
    int *c = (int *)p[1];
    int square;
    int ok1 = (c[53] == 0) ? 1 : 0;
    if (ok1 == 1) return 0;
    FUN_02037390(&square, v);
    int ok2 = (square > DAT_0219b5e8.thresh) ? 1 : 0;
    if (ok2) return 0;
    return FUN_02037208(c, 10) < 1;
}
