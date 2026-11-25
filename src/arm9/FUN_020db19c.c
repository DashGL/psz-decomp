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

void FUN_020db19c(int a, In *b, unsigned char c, char *d) {
    Entry *e = (Entry *)(d + 0x444 + a * 4);
    char *dst = d + 0x470 + a * 0xc0;
    unsigned int v;
    unsigned char v8;
    if (b->f2 & 2) {
        v = (unsigned char)(b->f2 >> 2);
    } else {
        v = (unsigned char)(((int)b->f2 >> 2) + 25);
    }
    v8 = (unsigned char)v;
    if (v8 > e->f2) {
        e->f2 = v8;
        e->f3 = (e->f3 & ~0x7f) | (c & 0x7f);
    }
    FUN_0206552c(b, dst, 0xc0);
}
