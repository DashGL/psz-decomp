// flags: -O4,s
struct S { int f0; unsigned int f4, f8, fc, f10; unsigned short f14, pad16; unsigned short b0:1, b1:1, rest:14; unsigned short f1a; };
extern void FUN_02033b58(void *);
extern void FUN_02050d64(void *);
void FUN_020338a8(struct S *s) {
    FUN_02033b58(s);
    if (s->b0) FUN_02050d64((void *)s->f8);
    s->f8 = 0;
    s->fc = 0;
    s->f10 = 0;
    s->f4 = 0;
    s->f14 = 0;
    s->b0 = 0;
    s->b1 = 0;
    s->f1a = 0xffff;
}
