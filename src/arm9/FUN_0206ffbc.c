// flags: -O4,s
extern int FUN_020390f4(void *);
extern int FUN_02039140(void *, int, unsigned int, int);
extern void FUN_020472bc(void *);

typedef struct {
    unsigned char pad0[0xd8];
    unsigned int f_d8;
    unsigned char pad1[0x1c];
    unsigned int f_f8;
    unsigned char pad2[0xbc];
    void *slots[3];
    unsigned char pad3[0x3c];
    signed char f_200;
    unsigned char pad4[0x3f];
    unsigned int f_240;
} S_0206ffbc;

void FUN_0206ffbc(S_0206ffbc *self) {
    int i;
    if (!FUN_020390f4(self)) {
        if (FUN_02039140(self, 0, self->f_d8, 4)) {
            for (i = 0; i < 3; ++i) {
                if (self->slots[i] != 0) {
                    FUN_020472bc(self->slots[i]);
                    self->slots[i] = 0;
                }
            }
            self->f_200 = -10;
            self->f_f8 &= ~0x40u;
            self->f_240 = 0;
        }
    }
}
