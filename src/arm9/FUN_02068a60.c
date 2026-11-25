// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x6c, exact bytes and relocation targets.
// flags: -O4,p -noThumb
typedef struct {
    unsigned short f0;
    unsigned short f2;
    int f4[2];
    int fc;
    int f10;
    int f14;
    int f18;
    int f1c[3];
    int f28;
} G_68a60;
extern G_68a60 DAT_021185a4;
extern void FUN_02068cd4(void);
extern void FUN_02068744(void);
extern int FUN_0206889c(int, int);
extern void FUN_02068850(int, void *);
void FUN_02068a60(void) {
    if (DAT_021185a4.f0 != 0) {
        return;
    }
    DAT_021185a4.f0 = 1;
    DAT_021185a4.fc = 0;
    DAT_021185a4.f10 = 0;
    DAT_021185a4.f28 = 0;
    DAT_021185a4.f14 = 0;
    DAT_021185a4.f18 = 0;
    FUN_02068744();
    do {
    } while (FUN_0206889c(5, 1) == 0);
    FUN_02068850(5, (void *)FUN_02068cd4);
}
