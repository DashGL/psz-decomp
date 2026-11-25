// flags: -O4,s
typedef struct {
    unsigned char a;
    unsigned char b;
    unsigned char c;
    unsigned char pad3[5];
    unsigned char f8[0x10];
    unsigned char f18[0x24];
} Item;

typedef struct {
    unsigned char data[0x48];
} Sub;

typedef struct {
    unsigned int vtable;
    int f4;
    int f8;
    int fc;
    Sub subs[3];
    int fe8;
} Self14;

extern void FUN_020af01c(void *, int, int);
extern void FUN_0200c394(void *, int, int, void *, void *);
extern void *FUN_overlay_14__02120078(void);
extern void *FUN_0205e0c4(void);
extern void FUN_0206557c(int, void *, int);
extern void FUN_020c4434(void *);
extern void FUN_overlay_14__021200f0(void *);
extern void FUN_overlay_14__0212072c(void *);
extern void *FUN_02086e3c(void);
extern int FUN_02086e48(void *, int);
extern void *FUN_020870c4(void *);
extern void FUN_overlay_14__02120764(void *, void *);
extern void FUN_overlay_14__02120d68(void *, const void *);
extern void *FUN_0209081c(void);
extern void FUN_overlay_14__02120840(void);
extern void FUN_overlay_14__02120860(void);
extern unsigned char data_0212210c[];

void *FUN_overlay_14__02120dc4(Self14 *self) {
    Item stk[3];
    void *ctx;
    int i;

    FUN_020af01c(self, 5, 1);
    self->vtable = (unsigned int)data_0212210c;
    FUN_0200c394(self->subs, 3, 0x48, (void *)FUN_overlay_14__02120840, (void *)FUN_overlay_14__02120860);
    self->fe8 = -1;
    ctx = FUN_overlay_14__02120078();
    if (ctx != 0) {
        int val = *(int *)((unsigned char *)ctx + 0x4c);
        if (val >= 0 && val < 5) {
            self->f8 = 5;
            self->f4 = val;
        }
    }
    FUN_0206557c(0, FUN_0205e0c4(), 0x800);
    FUN_020c4434(stk[0].f8);
    FUN_020c4434(stk[0].f18);
    FUN_overlay_14__021200f0(&stk[1]);
    FUN_overlay_14__021200f0(&stk[2]);
    for (i = 0; i < 3; i++) {
        FUN_overlay_14__0212072c(&stk[i]);
        if (FUN_02086e48(FUN_02086e3c(), i) != 0) {
            FUN_overlay_14__02120764(&stk[i], FUN_020870c4(FUN_02086e3c()));
        }
        stk[i].a = (unsigned char)i;
        stk[i].b = 0x80;
        stk[i].c = (unsigned char)(i * 0x1b + 0x2c);
        FUN_overlay_14__02120d68(&self->subs[i], &stk[i]);
    }
    *(int *)((unsigned char *)FUN_0209081c() + 0x14) = 4;
    return self;
}
