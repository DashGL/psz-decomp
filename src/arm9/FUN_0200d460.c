// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x88, exact bytes and relocation targets.
// flags: -O4,p -noThumb
struct G_d460 {
    char f0;
    char pad[3];
    int f4;
    int f8;
    int fc;
    void *f10;
    int f14;
    int f18;
    void *f1c;
    int f20;
};
extern void FUN_0206992c(void);
extern void FUN_0206beb8(void *);
extern void FUN_0206bed0(void *);
extern void FUN_0200d664(void);
extern void FUN_0200e5d8(void);
extern void FUN_0200d978(void);
extern void FUN_0200d524(void);
extern void FUN_0200d55c(void);
extern struct G_d460 DAT_02101dfc;
extern char DAT_02101e0c[];
extern char DAT_02101e18[];
void FUN_0200d460(void) {
    if (DAT_02101dfc.fc != 0) {
        return;
    }
    DAT_02101dfc.fc = 1;
    FUN_0206992c();
    DAT_02101dfc.f10 = (void *)FUN_0200d524;
    DAT_02101dfc.f14 = 0;
    DAT_02101dfc.f1c = (void *)FUN_0200d55c;
    DAT_02101dfc.f20 = 0;
    FUN_0206beb8(DAT_02101e0c);
    FUN_0206bed0(DAT_02101e18);
    FUN_0200d664();
    FUN_0200e5d8();
    FUN_0200d978();
    DAT_02101dfc.f0 = -1;
    DAT_02101dfc.f4 = 1;
}
