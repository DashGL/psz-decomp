// flags: -O4,s
extern void FUN_020c2b50(void *);
#pragma thumb off
extern void FUN_0200c938(void *, unsigned int);
#pragma thumb on
extern void FUN_020a4454(void *);
extern void FUN_020a452c(void *);

typedef struct {
    unsigned short a;
    unsigned short pad[8];
    unsigned short b;
} Slot20;

typedef struct {
    unsigned char data[12];
} Slot12;

typedef struct {
    int f0;
    int f4;
    int f8;
    int a[4];
    int b[4];
    Slot20 s20[4];
    Slot12 s12[4];
} Container;

void *FUN_020a4478(Container *s) {
    Slot20 *p;
    Slot12 *q;
    int i;

    FUN_020c2b50(s);
    s->f4 = 0;
    s->f8 = 0;
    FUN_0200c938(s->a, 16);
    FUN_0200c938(s->b, 16);
    p = s->s20;
    do {
        p->a = 0;
        p->b = 0;
        p++;
    } while (p < &s->s20[4]);
    q = s->s12;
    do {
        FUN_020a4454(q);
        q++;
    } while (q < &s->s12[4]);
    for (i = 0; i < 4; i++) {
        s->b[i] = 0;
        s->a[i] = 0;
    }
    FUN_020a452c(s);
    return s;
}
