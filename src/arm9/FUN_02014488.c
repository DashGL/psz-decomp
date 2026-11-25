// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x68, exact bytes and relocation targets.
// flags: -O4,p -noThumb
typedef struct {
    char pad[0x80];
    int f80;
} Sub_14488;
typedef struct {
    int f0[2];
    Sub_14488 *f8;
} G_14488;
extern G_14488 DAT_02104754;
extern int FUN_02014e34(void);
extern void FUN_02014e00(int);
extern void FUN_02014e24(int);
extern void FUN_02013e0c(int);
extern void FUN_02014e10(void);
void FUN_02014488(int a) {
    if (DAT_02104754.f8->f80 != 0) {
        int r4 = FUN_02014e34();
        FUN_02014e00(1);
        FUN_02014e24(DAT_02104754.f8->f80);
        FUN_02013e0c(a);
        FUN_02014e00(0);
        FUN_02014e24(r4);
        FUN_02014e10();
        return;
    }
    FUN_02013e0c(a);
}
