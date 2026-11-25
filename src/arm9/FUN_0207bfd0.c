// flags: -O4,s
extern char DAT_020fa600[];
extern void *DAT_02108cf4;
extern int FUN_0207c6f0(void *);
extern int FUN_02078188(int);
extern void *FUN_020352a4(void *, int);
extern void *FUN_02039200(void *);
extern void FUN_0203c17c(void *);
extern void FUN_02047434(void *);

enum { E0 = 0, E1 = 1 };

void *FUN_0207bfd0(char *self) {
    *(void **)self = DAT_020fa600;
    if (((FUN_0207c6f0(self) == 0) ? E1 : E0) && FUN_02078188(*(int *)(self + 0xe8))) {
        void *p = FUN_02039200(FUN_020352a4(DAT_02108cf4, *(int *)(self + 0xe8)));
        if (p) FUN_0203c17c(p);
    }
    FUN_02047434(self);
    return self;
}
