// flags: -O4,p -noThumb
typedef unsigned short u16;

extern unsigned char *DAT_021180ac;
extern void FUN_020654b4(int, void *, int);
extern int FUN_02060b54(unsigned char, int);
extern int FUN_02060b94(void);
extern int FUN_02060dd0(void);

void FUN_0206106c(void) {
    u16 arr[5];
    u16 i;
    int res;
    unsigned char *base;
    FUN_020654b4(0, arr, 10);
    base = DAT_021180ac;
    for (i = 1; i <= 0xf; i++) {
        switch (*(int *)(base + i * 4 + 0x14e4)) {
        case 2:
            arr[0] |= (1 << i);
            break;
        case 5:
            arr[1] |= (1 << i);
            break;
        case 4:
            arr[2] |= (1 << i);
            break;
        case 8:
            arr[3] |= (1 << i);
            break;
        case 11:
            arr[4] |= (1 << i);
            break;
        }
    }
    if (arr[3] != 0) {
        res = FUN_02060b54(5, arr[3]);
    } else if (arr[0] != 0) {
        res = FUN_02060b54(1, arr[0]);
    } else if (arr[4] != 0) {
        res = FUN_02060b54(6, arr[4]);
    } else if (arr[2] != 0) {
        res = FUN_02060b54(2, arr[2]);
    } else if (arr[1] != 0) {
        res = FUN_02060b94();
    } else {
        res = FUN_02060dd0();
    }
    if (res == 0x15) {
        FUN_02060b54(0, 0xffff);
    }
}
