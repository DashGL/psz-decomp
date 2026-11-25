// flags: -O4,s
enum { E0 = 0, E1 = 1 };
extern int FUN_02039108(void *, int, unsigned int, int);
extern int FUN_0203b8ec(void *, int, int);
extern int FUN_020391cc(void *, int);
void FUN_0206eff0(unsigned char *self, unsigned int value, unsigned int arg) {
    *(unsigned short *)(self + 0xc0) = value;
    if (((*(unsigned int *)(self + 0xf8) & 0x80) ? E1 : E0) != 0) {
        FUN_02039108(self, 14, *(unsigned int *)(self + 0xd4), 9);
        FUN_0203b8ec(self, 123, 0);
    } else {
        FUN_02039108(self, 14, *(unsigned int *)(self + 0xd4), 0);
    }
    FUN_020391cc(self, 0);
    self[0x141] = arg;
    *(unsigned int *)(self + 0x240) = 9;
}
