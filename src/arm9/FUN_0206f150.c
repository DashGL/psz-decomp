// flags: -O4,s
enum { E0 = 0, E1 = 1 };
extern int FUN_020390f4(void *);
extern int FUN_02039140(void *, int, unsigned int, int);

void FUN_0206f150(unsigned char *self, int mode, int time) {
    *(int *)(self + 0x100) = time;
    if (FUN_020390f4(self)) return;
    if (((*(unsigned int *)(self + 0xf8) & 0x4000) ? E1 : E0) != 0) {
        *(int *)(self + 0x100) >>= 1;
    }
    if (mode == 1 && *(unsigned int *)(self + 0x240) != 5) {
        if (FUN_02039140(self, 5, *(unsigned int *)(self + 0xd4), 4)) {
            *(unsigned int *)(self + 0x240) = 5;
        }
    } else if (mode == 2 && *(unsigned int *)(self + 0x240) != 6) {
        if (FUN_02039140(self, 6, *(unsigned int *)(self + 0xd4), 4)) {
            *(unsigned int *)(self + 0x240) = 6;
        }
    }
}
