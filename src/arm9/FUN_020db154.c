// flags: -O4,s
typedef struct {
    unsigned short f0;
    unsigned short f2;
} In;

typedef struct {
    unsigned char f0, f1, f2, f3;
} Entry;

#pragma thumb off
extern void FUN_0206552c(In *, char *, int);
#pragma thumb on

void FUN_020db154(unsigned char a, In *b, unsigned char c, char *d) {
    Entry *e = (Entry *)(d + 0x46c);
    char *dst = d + 0xbf0;
    unsigned int v;
    e->f1 = a;
    if (b->f2 & 2) {
        v = (unsigned char)(b->f2 >> 2);
    } else {
        v = (unsigned char)(((int)b->f2 >> 2) + 25);
    }
    e->f2 = (unsigned char)v;
    e->f3 = (e->f3 & ~0x7f) | (c & 0x7f);
    FUN_0206552c(b, dst, 0xc0);
}
