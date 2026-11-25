// flags: -O4,s
extern void FUN_0204adbc(void *);
extern void *DAT_020f8fa4;
typedef struct {
    void *vtable;
    int f4;
    void *a[3];
    void *b[3];
} S;
S *FUN_02048364(S *s) {
    int i;
    s->vtable = &DAT_020f8fa4;
    for (i = 0; i < 3; i++) {
        if (s->a[i] != 0) {
            FUN_0204adbc(s->a[i]);
            s->a[i] = 0;
        }
    }
    for (i = 0; i < 3; i++) {
        if (s->b[i] != 0) {
            FUN_0204adbc(s->b[i]);
            s->b[i] = 0;
        }
    }
    return s;
}
