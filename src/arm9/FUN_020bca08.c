// flags: -O4,s
enum { E0 = 0, E1 = 1 };
typedef struct { int x, y; } Vec;
extern int UNK_020fc988;
extern void FUN_020bc8fc(void *, void *, void *), FUN_020bc9c0(int *, void *, void *);

int FUN_020bca08(Vec *point, Vec *a, Vec *b, Vec *c, Vec *d) {
    int ar;
    Vec a1, a2;
    int br;
    Vec b1, b2;
    int cr;
    Vec c1, c2;
    int dr;
    Vec d1, d2;
    int threshold = UNK_020fc988;
    FUN_020bc8fc(&a1, point, a);
    FUN_020bc8fc(&a2, b, a);
    FUN_020bc9c0(&ar, &a1, &a2);
    if ((ar < threshold) ? E1 : E0) return 0;
    FUN_020bc8fc(&b1, point, b);
    FUN_020bc8fc(&b2, c, b);
    FUN_020bc9c0(&br, &b1, &b2);
    if ((br < threshold) ? E1 : E0) return 0;
    FUN_020bc8fc(&c1, point, c);
    FUN_020bc8fc(&c2, d, c);
    FUN_020bc9c0(&cr, &c1, &c2);
    if ((cr < threshold) ? E1 : E0) return 0;
    FUN_020bc8fc(&d1, point, d);
    FUN_020bc8fc(&d2, a, d);
    FUN_020bc9c0(&dr, &d1, &d2);
    if ((dr >= threshold) ? E1 : E0) return 1;
    return 0;
}
