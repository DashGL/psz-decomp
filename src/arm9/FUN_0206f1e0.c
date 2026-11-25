// flags: -O4,s
extern int FUN_020390f4(void *);
extern int FUN_02039108(void *, int, unsigned int, int);
extern int FUN_020391cc(void *, int);
extern void FUN_0203aa58(void *, int, void *);

typedef struct {
    unsigned char pad0[0x24];
    unsigned int f_24;
    unsigned char pad1[0x98];
    unsigned short f_c0;
    unsigned short f_c2;
    unsigned char pad2[0x14];
    unsigned int f_d8;
    unsigned char pad3[0x1c];
    unsigned int f_f8;
    unsigned char pad4[0x144];
    unsigned int state;
} S_6f1e0;

void FUN_0206f1e0(S_6f1e0 *self, unsigned short value) {
    unsigned int state = self->state;
    if (state != 16 && state != 14 && !FUN_020390f4(self)) {
        self->f_c0 = value;
        self->f_c2 = value;
        if (FUN_02039108(self, 3, self->f_d8, 0)) {
            self->f_f8 &= ~0x100u;
            FUN_0203aa58(self, 1, &self->f_24);
            FUN_020391cc(self, 0);
            self->state = 15;
        }
    }
}
