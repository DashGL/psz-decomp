// flags: -O4,p -noThumb
struct Sub { char pad[0xf8]; int size; void *buf; volatile unsigned short f100; volatile unsigned short f102; };
struct S { char pad[0x68]; struct Sub *sub; };
int FUN_020271f8(struct S *s) {
    struct Sub *p = s->sub;
    int size = p->size;
    int a = p->f100;
    int b = p->f102;
    int n = b - a - 1;
    if (n < 0) n += size;
    return n;
}
