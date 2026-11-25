// flags: -O4,s
typedef struct {
    void *vt;
    int f4;
    int a[6];
    int b[6];
} Obj;
extern unsigned int DAT_020fc3e8[];
#pragma thumb off
extern void FUN_0200c938(void *, unsigned int);
#pragma thumb reset
void *FUN_020a904c(Obj *self) {
    int i;
    self->vt = DAT_020fc3e8;
    self->f4 = 0;
    FUN_0200c938(self->a, 24);
    FUN_0200c938(self->b, 24);
    self->f4 = 4096;
    for (i = 0; i < 6; i++) {
        self->a[i] = 0;
        self->b[i] = 0;
    }
    return self;
}
