// flags: -O4,s
extern void FUN_0203041c(void *);
extern void FUN_020306cc(void *, unsigned int);
extern struct {
    unsigned char pad[0xd];
    signed char mode;
} DAT_0211a3c4;
void FUN_020aea2c(void *self) {
    FUN_0203041c(self);
    switch (DAT_0211a3c4.mode) {
    case 0: FUN_020306cc(self, 0x778c); break;
    case 1: FUN_020306cc(self, 0x171d); break;
    case 2: FUN_020306cc(self, 0x2d9e); break;
    }
}
