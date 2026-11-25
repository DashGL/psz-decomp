// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x90, exact bytes and relocation targets.
// flags: -O4,p -noThumb
struct S5fab0 {
    unsigned int f0;
    int f4;
    int f8;
    int fc;
    int f10;
};
extern struct S5fab0 DAT_021125d4;
extern unsigned int FUN_0205dd9c(void);

void FUN_0205fab0(void) {
    unsigned int r = FUN_0205dd9c();
    DAT_021125d4.f0 = r;
    switch (r) {
    case 2:
    case 3:
        DAT_021125d4.f10 = 0x06800000;
        break;
    case 8:
    case 12:
        DAT_021125d4.f10 = 0x06840000;
        break;
    case 1:
        DAT_021125d4.f10 = 0x067e0000;
        break;
    case 4:
        DAT_021125d4.f10 = 0x06820000;
        break;
    }
}
