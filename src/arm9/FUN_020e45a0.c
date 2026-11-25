// flags: -O4,p
extern char DAT_020feb34[];
extern void FUN_02065510(int, void *, int);
extern int FUN_020e961c(void);
extern void FUN_020d7288(int, unsigned char *, int, void *);
extern int FUN_020015ac(unsigned char *, char *, int);
extern void FUN_020d62b0(unsigned char *, int, void *);

int FUN_020e45a0(int param_1, int param_2, int param_3, unsigned char *param_4, int param_5) {
    struct {
        unsigned char b0;
        unsigned char b1;
        unsigned short h2;
        int w4;
    } sp00;
    unsigned char r5;

    if (param_5 == 0 || param_4 == 0) {
        return 0;
    }
    FUN_02065510(0, &sp00, 8);
    sp00.b1 = 2;
    sp00.w4 = param_2;
    sp00.h2 = (unsigned char)(param_3 >> 8) | ((param_3 << 8) & 0xff00);
    r5 = param_4[0];
    if ((r5 == 0xfe && param_4[1] == 0xfd) || r5 == 0x5c) {
        if (*(int *)(FUN_020e961c() + 0x10) != 0) {
            FUN_020d7288(*(int *)(FUN_020e961c() + 0x10), param_4, param_5, &sp00);
        }
    } else if (FUN_020015ac(param_4, DAT_020feb34, 6) == 0) {
        FUN_020d62b0(param_4, param_5, &sp00);
    } else if (r5 == 0xfe) {
        if (param_1) {
            return 0;
        }
        return 0;
    } else {
        return 0;
    }
    return 1;
}
