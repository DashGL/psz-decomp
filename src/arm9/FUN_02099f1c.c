// flags: -O4,s
extern void *FUN_020be450(void);
extern int FUN_020be4d8(void *, int);
extern void FUN_020be490(void *, int);
struct S {
    int id;
    int pad[19];
    int a[15];
    int pad2;
    int b[15];
};
void FUN_02099f1c(struct S *self) {
    int i;
    for (i = 0; i < 15; i++) {
        self->a[i] = -1;
        self->b[i] = 0;
    }
    if (!FUN_020be4d8(FUN_020be450(), self->id)) {
        FUN_020be490(FUN_020be450(), self->id);
    }
}
