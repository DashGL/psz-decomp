// flags: -O4,s
extern void *FUN_0209945c(unsigned int, int);
#pragma thumb off
extern void FUN_020654b4(int, void *, unsigned int);
#pragma thumb on
extern void FUN_0209ede8(void *);

struct A {
    short a;
    short b;
};

struct B {
    short a;
    short b;
    int c;
};

struct S {
    short x;
    short y;
    int z;
    int w;
    struct A arrA[3];
    struct B arrB[3];
    void *p1;
    void *p2;
};

void *FUN_0209f074(struct S *s) {
    struct A *pa;
    struct B *pb;
    int i;

    s->x = 0;
    s->y = 0;
    s->z = 15;
    s->w = 0;
    pa = s->arrA;
    do {
        pa->a = 0;
        pa->b = 0;
        pa++;
    } while (pa < s->arrA + 3);
    pb = s->arrB;
    do {
        pb->a = 0;
        pb->b = 0;
        pb++;
    } while (pb < s->arrB + 3);
    s->p1 = 0;
    s->p2 = 0;
    s->p1 = FUN_0209945c(0x90, 0x10);
    FUN_020654b4(0, s->p1, 0x90);
    s->p2 = FUN_0209945c(0x300, 0x10);
    for (i = 0; i < 3; i++) {
        FUN_0209ede8(&s->arrB[i]);
        s->arrB[i].c = 0;
    }
    return s;
}
