// flags: -O4,s
extern int FUN_02039108(void *, int, unsigned int, int);
extern int FUN_0203b8ec(void *, int, int);
extern int FUN_020391cc(void *, int);
extern void FUN_02039050(void *, void *);
extern void FUN_0206ef60(void);

void FUN_0206eef0(unsigned char *self, unsigned short value, unsigned char arg) {
    unsigned int flag;
    *(unsigned short *)(self + 0xc0) = value;
    flag = (*(unsigned int *)(self + 0xf8) & 0x80) != 0;
    if (flag) {
        FUN_02039108(self, 12, *(unsigned int *)(self + 0xd4), 9);
        FUN_0203b8ec(self, 123, 0);
    } else {
        FUN_02039108(self, 12, *(unsigned int *)(self + 0xd4), 0);
    }
    FUN_020391cc(self, 0);
    self[0x141] = arg;
    *(unsigned int *)(self + 0x240) = 9;
    FUN_02039050(self, (void *)FUN_0206ef60);
}
