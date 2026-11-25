// flags: -O4,s
typedef struct {
    int a[5];
    int b[5];
    struct { int x; short y, pad; } c[5];
    int d[5];
    int f64, f68, f6c;
    short f70, f72, f74, f76;
    char sub78[120];
    char subf0[56];
    int f128;
} S97b98;
#pragma thumb off
extern void FUN_0200c938(void *, unsigned int);
#pragma thumb reset
extern void FUN_02097b90(void *);
extern void FUN_0209c588(void *);
extern void FUN_0209ec60(void *);
void *FUN_02097b98(S97b98 *s) {
    int i;
    FUN_0200c938(s->a, 20);
    FUN_0200c938(s->b, 20);
    FUN_0200c938(s->d, 20);
    s->f64 = 0;
    s->f68 = 6;
    s->f6c = 0;
    s->f70 = 0;
    s->f72 = 0;
    s->f74 = 150;
    s->f76 = 0;
    FUN_02097b90(s->subf0);
    s->f128 = 0;
    for (i = 0; i < 5; i++) {
        s->a[i] = 0;
        s->b[i] = 0;
        s->c[i].x = -1;
        s->c[i].y = 0;
        s->d[i] = 0;
    }
    FUN_0209c588(s->sub78);
    FUN_0209ec60(&s->f128);
    return s;
}
