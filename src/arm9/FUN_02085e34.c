// flags: -O4,s
typedef struct Slot {
    unsigned char a[100];
    unsigned char b[16];
    unsigned char c[16];
    int f84;
    int f88;
    unsigned char pad[4];
    unsigned char f90;
    unsigned char f91;
    unsigned char pad2[2];
} Slot;

typedef struct Entry8 {
    int f0;
    int f4;
    unsigned char f8;
    unsigned char f9;
    short fa;
} Entry8;

typedef struct S85e34 {
    int f0;
    Slot slots[4];
    int f254;
    int f258;
    short f25c;
    short f25e;
    unsigned char arr8[4][8];
    unsigned char arr12[4][12];
    Entry8 e8[8];
    int arr4[4];
} S85e34;

extern void FUN_02038a84(void *), FUN_0203955c(void *);
#pragma thumb off
extern void FUN_0206557c(int, void *, int);
#pragma thumb on

void FUN_02085e34(S85e34 *s) {
    int i;
    for (i = 0; i < 4; i++) {
        s->slots[i].f84 = -1;
        s->slots[i].f88 = 0;
        s->slots[i].f90 = 0;
        s->slots[i].f91 = 0;
        FUN_02038a84(s->slots[i].a);
        FUN_0203955c(s->slots[i].b);
        FUN_0203955c(s->slots[i].c);
    }
    s->f254 = -1;
    s->f258 = 0;
    for (i = 0; i < 8; i++) {
        s->e8[i].f0 = -1;
        s->e8[i].f4 = -1;
        s->e8[i].f9 = 0;
        s->e8[i].fa = 0;
        s->e8[i].f8 = 0;
    }
    s->f25c = 0;
    s->f25e = 0;
    for (i = 0; i < 4; i++) {
        FUN_0206557c(0, s->arr8[i], 8);
        s->arr4[i] = 0;
        FUN_0206557c(0, s->arr12[i], 12);
    }
}
