//cpp
// flags: -O4,s
struct Vec2 { int x, y; };
struct Sub { int f0[5]; unsigned short *f14; };
struct S { int f0; Sub *f4; };
extern "C" {
extern void FUN_020bc894(void *, int, Vec2 *, Vec2 *, Vec2 *);
extern int FUN_020bc910(void *, const Vec2 *, const Vec2 *, const Vec2 *);
bool FUN_020bcb60(S *a, int b, int c, void *d, void *e, bool (*f)(void *, const int &, void *), void *g) {
    
    unsigned short *r4 = &a->f4->f14[c];
    for (; b != 0; r4++) {
        b--;
        int idx = *r4;
        Vec2 v0, v1, v2;
        FUN_020bc894(e, idx, &v0, &v1, &v2);
        if (FUN_020bc910(d, &v0, &v1, &v2)) {
            int tmp = idx;
            if (!f(e, tmp, g)) return false;
        }
    }
    return true;

}
}
