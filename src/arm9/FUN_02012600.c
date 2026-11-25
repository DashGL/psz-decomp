// flags: -O4,p -noThumb
extern unsigned int FUN_020125bc(unsigned int);
extern unsigned int FUN_02059678(unsigned int);
extern unsigned int FUN_02003c70(unsigned int);
extern unsigned int FUN_020596e4(unsigned int, unsigned int, unsigned int);
extern unsigned int FUN_0205981c(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
extern unsigned int FUN_02059798(unsigned int);

unsigned int FUN_02012600(unsigned int self, unsigned int name, unsigned int archive) {
    unsigned int fat = 0;
    unsigned int names = 0;
    unsigned int image = 0;
    int i;
    unsigned int p;
    int count;
    unsigned int base;
    unsigned int length;

    if (!FUN_020125bc(archive)) {
        return 0;
    }
    p = archive + *(unsigned short *)(archive + 12);
    count = *(unsigned short *)(archive + 14);
    for (i = 0; i < count; i++) {
        switch (*(unsigned int *)p) {
        case 0x46415442:
            fat = p;
            break;
        case 0x46494d47:
            image = p;
            break;
        case 0x464e5442:
            names = p;
            break;
        }
        p += *(unsigned int *)(p + 4);
    }
    FUN_02059678(self);
    *(unsigned int *)(self + 92) = archive;
    *(unsigned int *)(self + 96) = fat;
    base = image + 8;
    *(unsigned int *)(self + 100) = base;
    length = FUN_02003c70(name);
    if (!FUN_020596e4(self, name, length)) {
        return 0;
    }
    if (FUN_0205981c(self, base, fat + 12 - base, *(unsigned int *)(fat + 4) - 12, names + 8 - base, *(unsigned int *)(names + 4) - 8, 0, 0)) {
        return 1;
    }
    FUN_02059798(self);
    return 0;
}
