// flags: -O4,p -noThumb
extern unsigned int DAT_02102708;
extern unsigned int DAT_0210270c;
extern void FUN_0200e51c(void);
extern void FUN_0200e568(void);
extern void FUN_02011974(void *, unsigned int);

typedef struct {
    unsigned int pad0[2];
    void (*fn1)(void);
    void *arg1;
    unsigned int pad1;
    void (*fn2)(void);
    void *arg2;
    unsigned int pad2[2];
    unsigned int f0 : 1;
    unsigned int f1 : 1;
    unsigned int rest : 30;
    unsigned int pad3[7];
    unsigned int f44;
    unsigned int f48;
} S_0200e00c;

void FUN_0200e00c(S_0200e00c *self) {
    if (!DAT_02102708) {
        FUN_02011974(&DAT_0210270c, 0);
        DAT_02102708 = 1;
    }
    self->fn1 = FUN_0200e51c;
    self->arg1 = self;
    self->fn2 = FUN_0200e568;
    self->arg2 = self;
    self->f44 = 0;
    self->f48 = 0;
    self->f0 = 0;
    self->f1 = 0;
}
