// flags: -O4,s
typedef struct Self6FE30 {
    unsigned char pad0[0xfc];
    unsigned int f_fc;
    unsigned char pad100[0x14a - 0x100];
    unsigned char f_14a;
    unsigned char pad14b[0x1b8 - 0x14b];
    char *f_1b8;
    char *f_1bc;
    unsigned char pad1c0[0x1d4 - 0x1c0];
    unsigned int arr[4];
    unsigned char pad1e4[0x240 - 0x1e4];
    unsigned int f_240;
} Self6FE30;

extern int FUN_020390f4(void *);
extern void FUN_020472bc(void *);
extern char *FUN_0203b8a0(void *, int, const void *, int);
extern void FUN_020c193c(int, int, int, unsigned int, int);

void FUN_0206fe30(Self6FE30 *self, const void *position, unsigned int unused, unsigned int mode) {
    int i;
    if (mode < 1 || mode >= 5) return;
    if (FUN_020390f4(self)) return;
    self->f_14a = (unsigned char)mode;
    if (self->f_1b8) {
        FUN_020472bc(self->f_1b8);
        self->f_1b8 = 0;
    }
    self->f_1b8 = FUN_0203b8a0(self, 70, position, 0);
    if (self->f_1b8) *(unsigned int *)(self->f_1b8 + 0x108) = mode;
    if (self->f_1bc) {
        FUN_020472bc(self->f_1bc);
        self->f_1bc = 0;
    }
    self->f_1bc = FUN_0203b8a0(self, 71, position, 0);
    if (self->f_1bc) *(unsigned int *)(self->f_1bc + 0x108) = mode;
    FUN_020c193c(0, 19, 0, 0, -1);
    for (i = 0; i < 4; i++) {
        unsigned int cur = self->arr[i];
        if (cur != self->f_fc) {
            if (cur == ~0u) {
                self->arr[i] = self->f_fc;
                break;
            }
        } else {
            break;
        }
    }
    self->f_240 = 19;
}
