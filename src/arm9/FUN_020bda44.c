// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xbc, exact bytes and relocation targets.
// flags: -O4,s
struct StateBDA44 {
    unsigned char pad0[0xc];
    signed char arr_c[4];
    unsigned char pad10[0x10];
    void *arr20[4];
    int f30;
    int f34;
    void *arr38[4];
    unsigned char pad48[0xed1];
    signed char f19;
    signed char f1a;
    unsigned char padf1b[5];
    int arr_f20[4];
};

extern int FUN_020e14b4(void);
extern int FUN_020e1508(int);
extern void *FUN_020ba894(int);
extern void *FUN_020ba948(void *, int, int);
extern void *FUN_020ba8a0(int);
extern void FUN_020e993c(int, void *, int);
extern void FUN_020bd1b0(void *, int);
extern void FUN_020c5b1c(int);

void FUN_020bda44(struct StateBDA44 *self) {
    self->f19 = FUN_020e14b4();
    self->f1a = -1;
    for (unsigned char i = 0; i < 4; i++) {
        if (i == self->f19 || FUN_020e1508(i) == 1) {
            if (self->f1a == -1) {
                self->f1a = i;
            }
            if (self->arr_c[i] == 0) {
                self->arr_c[i] = 1;
                self->arr_f20[i] = 0;
                if (i != self->f19) {
                    if (self->arr20[i] == 0) {
                        void *p = FUN_020ba894(0x24);
                        if (p != 0) {
                            p = FUN_020ba948(p, self->f30, 0x3fc);
                        }
                        self->arr20[i] = p;
                    }
                    if (self->arr38[i] == 0) {
                        self->arr38[i] = FUN_020ba8a0(0x5b4);
                    }
                    FUN_020e993c(i, self->arr38[i], 0x5b4);
                }
            }
        } else {
            self->arr_c[i] = 0;
            FUN_020bd1b0(self, i);
        }
    }
    FUN_020c5b1c(0);
}
