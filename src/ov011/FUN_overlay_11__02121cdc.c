// flags: -O4,s
extern void *FUN_020af01c(void *, int, int);
extern void *FUN_020c2b50(void *);
#pragma thumb off
extern void FUN_0200c938(void *, unsigned int);
#pragma thumb on
extern void FUN_overlay_11__02121f84(void *);

struct App_1cdc {
    unsigned char pad[0x20];
    signed char kind;
    unsigned char pad2[3];
    unsigned char val;
};

struct Self_1cdc {
    void *vtbl;
    unsigned int f04;
    unsigned int f08;
    unsigned int f0c;
    unsigned int f10;
    int arr[4];
    unsigned int f24;
};

extern unsigned int DAT_02124700[];
extern signed char DAT_02156b58;
extern struct App_1cdc DAT_02156b38;
extern unsigned int DAT_02123940[];
extern unsigned int DAT_020f4b04[];
extern unsigned int DAT_020f4b10[];

void *FUN_overlay_11__02121cdc(struct Self_1cdc *self) {
    int i;
    struct App_1cdc *app;
    FUN_020af01c(self, 3, 1);
    self->vtbl = DAT_02124700;
    FUN_020c2b50(&self->f10);
    FUN_0200c938(self->arr, 16);
    self->f24 = 0;
    for (i = 0; i < 4; i++) {
        self->arr[i] = -1;
    }
    app = &DAT_02156b38;
    if (DAT_02156b58 >= 0) {
        int k = ((volatile struct App_1cdc *)app)->kind;
        if (k < 3 && ((volatile struct App_1cdc *)app)->val != 255) {
            self->f24 = DAT_02123940[k] + 1;
            {
                int kind = app->kind;
                unsigned int val = app->val - DAT_020f4b04[kind];
                self->f08 = DAT_020f4b10[kind];
                self->f04 = val;
            }
        }
    }
    FUN_overlay_11__02121f84(self);
    return self;
}
