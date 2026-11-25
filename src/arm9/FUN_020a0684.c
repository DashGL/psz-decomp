// flags: -O4,s
extern int FUN_02030700(void *);
int FUN_020a0684(unsigned char *self, int mode) {
    switch (mode) {
    case 0:
        if (FUN_02030700(self + 0x34)) return 1;
        break;
    case 2:
        if (FUN_02030700(self + 0x3c)) return 1;
        break;
    }
    return 0;
}
