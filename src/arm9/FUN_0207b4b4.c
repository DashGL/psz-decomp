// flags: -O4,s
typedef struct {
    char pad[260];
    int f260, f264, f268, f272, f276;
    short f280, f282;
    int f284, f288;
    int a[8];
    int f324;
    short b[8];
    int c[8];
    int d[8];
    int f408, f412, f416, f420, f424;
} Obj;
extern char DAT_020fa620[];
extern void FUN_0204734c(void *);
#pragma thumb off
extern void FUN_0200c938(void *, int);
#pragma thumb reset
void *FUN_0207b4b4(Obj *s) {
    int i;
    FUN_0204734c(s);
    *(void **)s = DAT_020fa620;
    s->f260 = 0;
    s->f264 = 0;
    s->f268 = 0;
    s->f272 = 0;
    s->f276 = 0;
    s->f280 = 0;
    s->f282 = 0;
    s->f284 = 0;
    s->f288 = 0;
    FUN_0200c938(s->a, 32);
    s->f324 = 0;
    FUN_0200c938(s->b, 16);
    FUN_0200c938(s->c, 32);
    FUN_0200c938(s->d, 32);
    s->f408 = 0;
    s->f412 = 0;
    s->f416 = 0;
    s->f420 = -1;
    s->f424 = 0;
    for (i = 0; i < 8; i++) {
        s->a[i] = 0;
        s->b[i] = 0;
        s->c[i] = 0;
        s->d[i] = 0;
    }
    return s;
}
