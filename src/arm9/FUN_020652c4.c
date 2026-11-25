// flags: -noThumb
struct S27 {
    int f0;
    int f4;
    unsigned int f8;
    unsigned int fc;
};
extern struct S27 DAT_021180f8;
extern void FUN_02065370(void);
extern void FUN_02065d44(int, void (*)(void), int);
extern void FUN_01ff8000(int, unsigned int, int, unsigned int);
extern void FUN_02065e60(int);

void FUN_020652c4(void) {
    unsigned int r4;
    unsigned int r5 = DAT_021180f8.fc;
    if (r5 == 0) {
        return;
    }
    if (r5 >= 0x1d8) {
        r5 = 0x1d8;
    }
    r4 = DAT_021180f8.f8;
    DAT_021180f8.fc -= r5;
    DAT_021180f8.f8 = r4 + r5;
    if (DAT_021180f8.fc == 0) {
        FUN_02065d44(DAT_021180f8.f4, FUN_02065370, 0);
        FUN_01ff8000(DAT_021180f8.f4, r4, 0x04000400, 0xc4400000 | (r5 >> 2));
        FUN_02065e60(0x200000);
    } else {
        FUN_01ff8000(DAT_021180f8.f4, r4, 0x04000400, 0x84400000 | (r5 >> 2));
        FUN_02065e60(0x200000);
    }
}
