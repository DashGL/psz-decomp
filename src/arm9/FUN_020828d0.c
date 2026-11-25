// flags: -O4,p
typedef struct {
    unsigned char pad0[0x18];
    unsigned char b18, b19, b1a, b1b;
    unsigned char pad1c[8];
    int i24;
    unsigned char pad28[6];
    unsigned char b2e, b2f;
    int i30;
} Item52;
typedef struct {
    Item52 arr1[20];
    int f410, f414;
    Item52 arr2[4];
    int f4e8, f4ec, f4f0, f4f4;
} Obj020828d0;
extern void FUN_0206d178(Item52 *);
extern void FUN_0208286c(Item52 *);
extern void FUN_0206d1ec(Item52 *, int, int, int, int, int);

Obj020828d0 *FUN_020828d0(Obj020828d0 *s) {
    Item52 *p = s->arr1;
    do { FUN_0206d178(p); FUN_0208286c(p); p++; } while (p < &s->arr1[20]);
    s->f410 = 0; s->f414 = -1;
    p = s->arr2;
    do { FUN_0206d178(p); FUN_0208286c(p); p++; } while (p < (Item52 *)&s->f4e8);

    s->f4e8 = 0;
    s->f4ec = 0;
    s->f4f0 = 0;
    s->f4f4 = -1;

    FUN_0208286c(&s->arr2[0]);
    FUN_0206d1ec(&s->arr2[0], 0, 1, 5, 0, 1);
    s->arr2[0].b18 = 1;
    s->arr2[0].i24 = 0;
    s->arr2[0].b2e = 0;
    s->arr2[0].b2f = 3;

    FUN_0208286c(&s->arr2[1]);
    FUN_0206d1ec(&s->arr2[1], 0, 1, 5, 0, 2);
    s->arr2[1].b18 = 2;
    s->arr2[1].b1a = 0;
    s->arr2[1].i24 = 0;
    s->arr2[1].b2e = 0;
    s->arr2[1].b2f = 2;

    FUN_0208286c(&s->arr2[2]);
    FUN_0206d1ec(&s->arr2[2], 0, 1, 5, 0, 3);
    s->arr2[2].b1a = 1;
    s->arr2[2].i24 = 0;
    s->arr2[2].b2e = 0;
    s->arr2[2].b2f = 1;

    FUN_0208286c(&s->arr2[3]);
    FUN_0206d1ec(&s->arr2[3], 0, 1, 5, 0, 4);
    s->arr2[3].i24 = 0;
    s->arr2[3].b2e = 0;
    s->arr2[3].b2f = 0;

    s->f4e8 = 4;
    return s;
}
