// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xa0, exact bytes and relocation targets.
// flags: -noThumb
struct S5f41c {
    int f00;
    int f04;
    int f08;
    int f0c;
    int f10;
    int f14;
};
extern struct S5f41c DAT_021125b8;
extern int FUN_0205dd2c(void);

void FUN_0205f41c(void) {
    int v = FUN_0205dd2c();
    DAT_021125b8.f14 = v;
    switch (v) {
    case 0:
        break;
    case 0x10:
        DAT_021125b8.f10 = 0x06880000;
        DAT_021125b8.f0c = 0;
        break;
    case 0x40:
        DAT_021125b8.f10 = 0x06894000;
        DAT_021125b8.f0c = 0x4000;
        break;
    case 0x20:
    case 0x60:
        DAT_021125b8.f10 = 0x06890000;
        DAT_021125b8.f0c = 0;
        break;
    }
}
