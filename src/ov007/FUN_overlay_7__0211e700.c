// flags: -O4,s
extern void FUN_overlay_7__0211e750(void *);
typedef struct {
    int f0, f1, f2, f3, f4, f5, f6;
    int a[64];
    int b[64];
    int c[64];
    int t0, t1, t2, t3;
    int tail;
} Obj;
void FUN_overlay_7__0211e700(Obj *self) {
    int i;
    self->f0 = 0;
    self->f1 = 0;
    self->f2 = 0;
    self->f3 = 0;
    self->f4 = 0;
    self->f5 = -1;
    self->f6 = 0;
    i = 0;
    do {
        self->a[i] = 0;
        self->b[i] = 0;
        self->c[i] = 0;
        i++;
    } while (i < 64);
    self->t0 = 0;
    self->t1 = 0;
    self->t2 = 0;
    self->t3 = 0;
    FUN_overlay_7__0211e750(&self->tail);
}
