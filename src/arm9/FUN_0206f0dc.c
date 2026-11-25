// flags: -O4,s
extern int FUN_020390f4(void *);
extern int FUN_02039140(void *, int, unsigned int, int);

enum { E0 = 0, E1 = 1 };

void FUN_0206f0dc(unsigned char *self, unsigned int value, int time) {
    *(int *)(self + 0x100) = time;
    if (((*(unsigned int *)(self + 0xf8) & 0x4000) ? E1 : E0) != 0) {
        *(int *)(self + 0x100) >>= 1;
    }
    *(unsigned short *)(self + 0xc2) = value;
    if (*(unsigned int *)(self + 0x240) != 3 && !FUN_020390f4(self)) {
        if (FUN_02039140(self, 2, *(unsigned int *)(self + 0xd4), 4)) {
            *(unsigned int *)(self + 0x240) = 3;
            self[0x245] = 1;
            self[0x246] = 1;
        }
    }
    ((signed char *)self)[0x1ff] = -1;
}
