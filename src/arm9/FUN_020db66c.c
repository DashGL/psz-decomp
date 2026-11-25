// flags: -O4,p
#pragma thumb off
extern void FUN_02065774(void *, void *, int);
#pragma thumb reset
extern void FUN_020dc734(void *, void *);
extern void FUN_020dc6d4(void *, void *);

struct Bits {
    unsigned char v : 2;
};

int FUN_020db66c(unsigned char *param_1, int param_2, unsigned char *param_3) {
    switch (param_2) {
    case 2:
        param_1 += 0x100;
    case 1:
        param_1 += 0x100;
    case 0:
        param_3[0] = ((struct Bits *)(param_1 + 0xe6))->v;
        FUN_02065774(param_1 + 0x80, param_3 + 2, 0x10);
        break;
    case 5:
        param_1 += 0x100;
    case 4:
        param_1 += 0x100;
    case 3:
        param_3[0] = 1;
        FUN_02065774(param_1 + 0xd1, param_3 + 2, 5);
        break;
    case 6:
        param_3[0] = 2;
        FUN_020dc734(param_1 + 0x47c + param_1[0xd13] * 0xc0, param_3 + 2);
        break;
    case 7:
        param_3[0] = 2;
        FUN_020dc6d4(param_1 + 0x47c + param_1[0xd13] * 0xc0, param_3 + 2);
        break;
    case 8:
    case 9:
    default:
        break;
    }
    if (param_3[0] == 0) {
        return 0;
    }
    return 1;
}
