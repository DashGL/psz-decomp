// flags: -O4,p -noThumb
typedef unsigned char u8;
typedef unsigned short u16;
extern int FUN_02029894(int, int);
extern void FUN_02065774(void *, void *, int);
extern void FUN_02028804(int);
extern int FUN_02029834(u8 *, int, int);

void FUN_0202996c(int param_1, u8 *param_2) {
    u8 len;
    u8 *p0;
    u16 res;
    if (FUN_02029894(param_2[0], param_2[1]) == 0) {
        return;
    }
    FUN_02065774(param_2 + 2, (void *)(param_1 + 0x34), 0x20);
    len = param_2[0x22];
    p0 = param_2 + 0x23;
    if (len != 0x20) {
        *(u8 *)(param_1 + 0x30) = 0;
    } else {
        FUN_02065774(p0, (void *)(param_1 + 0x74), 0x20);
        FUN_02028804(param_1);
    }
    param_2 = p0 + len;
    res = FUN_02029834(param_2 + 2, ((param_2[0] << 8) + param_2[1]) / 2, 2);
    *(u16 *)(param_1 + 0x32) = res;
    if (res != 0) {
        *(u8 *)(param_1 + 0x455) = 1;
    }
}
