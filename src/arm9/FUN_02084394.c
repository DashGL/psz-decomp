// flags: -O4,s
extern int FUN_020c5c04(int);
extern void FUN_020843e8(void *);

typedef struct {
    int a, b;
} Sub;

typedef struct {
    Sub arr[8];
    int f40;
    signed char f44;
    unsigned char f45;
    signed char f46, f47;
} Obj;

Obj *FUN_02084394(Obj *a) {
    Sub *p = a->arr;
    do {
        p->a = 0;
        p->b = 0;
        p++;
    } while (p < a->arr + 8);
    a->f40 = 0;
    a->f44 = 0x1f;
    a->f45 = 0x1f;
    a->f46 = 0x1f;
    a->f47 = 0x1f;
    if (FUN_020c5c04(0) != 0) {
        a->f45 >>= 1;
    }
    FUN_020843e8(a);
    return a;
}
