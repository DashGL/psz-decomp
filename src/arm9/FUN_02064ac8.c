// flags: -O4,p -noThumb
typedef struct {
    unsigned char kind;
    unsigned char pad;
    unsigned short a;
    unsigned short b;
} Src;

unsigned char *FUN_02064ac8(Src *src, unsigned char *dst)
{
    unsigned char *p = dst;
    *p++ = src->kind;
    switch (src->kind) {
    case 1:
    case 2:
    case 3:
    case 5:
    case 6:
        break;
    case 4:
        p[0] = (unsigned char)src->a;
        p[1] = (unsigned char)((src->a & 0xff00) >> 8);
        p[2] = (unsigned char)src->b;
        p[3] = (unsigned char)((src->b & 0xff00) >> 8);
        p += 4;
        break;
    default:
        return 0;
    }
    return p;
}
