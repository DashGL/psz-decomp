// flags: -O4,s
extern void FUN_02046920(void *);
struct Obj42154 {
    char pad0[4];
    char *next;
    char pad8[16];
    unsigned int flags;
    char pad1c[92];
    int v120;
    unsigned int v124;
    int v128;
    int v132;
    unsigned int v136;
    int v140;
    char pad90[60];
    char *arr[5];
    char pade0[12];
    unsigned int mode;
    int step;
};

void FUN_02042154(struct Obj42154 *s) {
    int i;
    char *next;
    for (i = 0; i < 5; i++) {
        if (s->arr[i]) {
            FUN_02046920(s->arr[i]);
        }
    }
    switch (s->mode) {
    case 0:
        break;
    case 1:
        s->flags &= ~1u;
        break;
    case 2:
        if (s->step <= 8) {
            s->v120 = s->v132 >> s->step;
            s->v124 = s->v136 << s->step;
            s->v128 = s->v140 >> s->step;
            s->step++;
        } else {
            s->flags &= ~1u;
            s->mode = 1;
        }
        break;
    case 3:
        if (s->step <= 8) {
            s->v120 = s->v132 >> (8 - s->step);
            s->v124 = s->v136 * (9 - s->step);
            s->v128 = s->v140 >> (8 - s->step);
            s->step++;
        } else {
            s->mode = 0;
        }
        break;
    }
    next = s->next;
    if (next) {
        ((void (*)(void *))(*(void ***)next)[3])(next);
    }
}
