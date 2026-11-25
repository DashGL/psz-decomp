// flags: -O4,s
extern char DAT_020f8fa4[];
extern void FUN_0204adbc(void *);
extern void FUN_020ba8ac(void *);

typedef struct {
    void *vtable;
    int pad;
    void *a[3];
    void *b[3];
} Obj;

Obj *FUN_020483a8(Obj *s) {
    int i;
    s->vtable = DAT_020f8fa4;
    for (i = 0; i < 3; i++) {
        if (s->a[i]) {
            FUN_0204adbc(s->a[i]);
            s->a[i] = 0;
        }
    }
    for (i = 0; i < 3; i++) {
        if (s->b[i]) {
            FUN_0204adbc(s->b[i]);
            s->b[i] = 0;
        }
    }
    FUN_020ba8ac(s);
    return s;
}
