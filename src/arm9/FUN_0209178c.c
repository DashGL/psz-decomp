#pragma opt_dead_assignments off
extern int FUN_02091814(void *);
extern void *FUN_02077f3c(void);
extern void *FUN_02077fec(void *);
extern void FUN_020c32b4(void *, void *);
void FUN_0209178c(unsigned char *item) {
    struct {
        short f0, f2, f4, f6;
        int f8, fc;
    } d;
    int icon = FUN_02091814(item);
    d.f0 = 0;
    d.f2 = 0;
    d.f4 = 0;
    if (icon > 0) {
        d.f0 = icon;
        if (item[0] == 4) {
            d.f8 = 0x8000;
            d.fc = 0x139000;
        } else {
            d.f8 = 0x8000;
            d.fc = 0x133000;
        }
        FUN_020c32b4(&d, FUN_02077fec(FUN_02077f3c()));
    }
    if (item[0] != 4 && !(item[0] == 0 && item[1] == 17)) {
        d.f0 = 41;
        d.f8 = 0x13000;
        d.fc = 0x13f000;
        FUN_020c32b4(&d, FUN_02077fec(FUN_02077f3c()));
    }
}
