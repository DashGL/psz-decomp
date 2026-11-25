// flags: -O4,p
#pragma opt_strength_reduction off
extern unsigned char *DAT_0213e7dc;
extern const unsigned short DAT_02139e68[][2];
extern void FUN_overlay_15__02126314(int, int, int);
extern void FUN_overlay_15__0212650c(int, int);

void FUN_overlay_15__021264a8(int bank) {
    int a, b, i, idx;
    *(volatile int *)&a = 0;
    *(volatile int *)&b = 0;
    *(volatile unsigned char *)(DAT_0213e7dc + 0x11d) = (unsigned char)bank;
    i = *(volatile int *)&a;
    idx = i;
    do {
        FUN_overlay_15__02126314(bank, i, DAT_02139e68[idx][1]);
        i++;
        idx += 12;
    } while (i < 4);
    if (bank == 2) {
        a = 1;
    } else if (bank == 1) {
        b = 1;
    }
    FUN_overlay_15__0212650c(47, a);
    FUN_overlay_15__0212650c(48, b);
}
