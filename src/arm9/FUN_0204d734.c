// flags: -O4,s
extern char DAT_020f91b8[];
extern void FUN_0204adbc(void *);
extern void FUN_020ba8ac(void *);
typedef struct { void *vtbl; int pad0; void *p[2]; } S;
S *FUN_0204d734(S *self) {
    int i;
    self->vtbl = DAT_020f91b8;
    for (i = 0; i < 2; i++) {
        if (self->p[i] != 0) {
            FUN_0204adbc(self->p[i]);
            self->p[i] = 0;
        }
    }
    FUN_020ba8ac(self);
    return self;
}
