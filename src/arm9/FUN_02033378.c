// flags: -O4,s

struct S4 { unsigned char a[4]; };
struct Pair { int a; int b; };
struct Obj { struct S4 s; int f4; struct Pair p; };
struct Obj *FUN_02033378(struct Obj *dst, const struct Obj *src) {
    dst->s = src->s;
    dst->f4 = src->f4;
    dst->p = src->p;
    return dst;
}
