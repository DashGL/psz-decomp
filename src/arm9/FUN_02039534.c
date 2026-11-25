// flags: -O4,s
struct Prefix { unsigned char b[4]; };
struct Values { unsigned int w[3]; };
struct Record { struct Prefix p; struct Values v; };
struct Record *FUN_02039534(struct Record *dst, const struct Record *src) {
    dst->p = src->p;
    dst->v = src->v;
    return dst;
}
