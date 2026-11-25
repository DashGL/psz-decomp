// flags: -O4,s
typedef struct {
    unsigned short v[8];
} Arr8;

typedef struct {
    Arr8 arr;
    signed char a;
    signed char b;
    short c;
} S_020bd57c;

S_020bd57c *FUN_020bd57c(S_020bd57c *out, const S_020bd57c *in) {
    out->arr = in->arr;
    out->a = in->a;
    out->b = in->b;
    out->c = in->c;
    return out;
}
