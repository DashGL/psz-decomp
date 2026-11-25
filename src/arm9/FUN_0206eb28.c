// flags: -O4,s
extern int FUN_02039108(char *, int, unsigned int, int);
extern void *FUN_0203b8ec(char *, int, int);
extern int FUN_020391cc(char *, int);
extern void FUN_02039050(char *, void (*)(void));
extern void FUN_0206ec38(void);

enum { E0 = 0, E1 = 1 };

void FUN_0206eb28(char *self, unsigned int value, unsigned int flag) {
    *(unsigned short *)(self + 0xc0) = value;
    if ((unsigned char)self[0x181] == 8 || (unsigned char)self[0x181] == 11) {
        if (*(int *)(self + 0x240) != 5 && *(int *)(self + 0x240) != 6) {
            if ((*(unsigned int *)(self + 0xf8) & 128) ? E1 : E0) {
                FUN_02039108(self, 14, *(unsigned int *)(self + 0xd4), 9);
                FUN_0203b8ec(self, 123, 0);
            } else {
                FUN_02039108(self, 14, *(unsigned int *)(self + 0xd4), 0);
            }
            *(unsigned int *)(self + 0x240) = 9;
        } else {
            if ((*(unsigned int *)(self + 0xf8) & 128) ? E1 : E0) {
                FUN_02039108(self, 14, *(unsigned int *)(self + 0xd4), 9);
                FUN_0203b8ec(self, 123, 0);
            }
            *(unsigned int *)(self + 0x240) = 9;
        }
    } else {
        if ((*(unsigned int *)(self + 0xf8) & 128) ? E1 : E0) {
            FUN_02039108(self, 14, *(unsigned int *)(self + 0xd4), 9);
            FUN_0203b8ec(self, 123, 0);
        } else {
            FUN_02039108(self, 14, *(unsigned int *)(self + 0xd4), 0);
        }
        *(unsigned int *)(self + 0x240) = 9;
    }
    FUN_020391cc(self, 0);
    self[0x141] = (unsigned char)flag;
    FUN_02039050(self, FUN_0206ec38);
}
