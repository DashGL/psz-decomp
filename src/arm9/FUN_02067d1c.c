// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x78, exact bytes and relocation targets.
// flags: -O4,p -noThumb
typedef struct {
    unsigned short f0;
    unsigned short f2;
    int f4;
    int f8;
    int fc;
} S_67d1c;
extern S_67d1c DAT_021184d4;
extern void FUN_02067ce0(int);
extern void FUN_02067da4(void);
extern void FUN_02065c30(int, void (*)(void));
extern void FUN_02065e00(int);
void FUN_02067d1c(void) {
    if (DAT_021184d4.f0 != 0) {
        return;
    }
    DAT_021184d4.f0 = 1;
    FUN_02067ce0(0);
    DAT_021184d4.f8 = 0;
    DAT_021184d4.fc = 0;
    *(volatile unsigned short *)0x04000102 = 0;
    *(volatile unsigned short *)0x04000100 = 0;
    *(volatile unsigned short *)0x04000102 = 0xc1;
    FUN_02065c30(8, FUN_02067da4);
    FUN_02065e00(8);
    DAT_021184d4.f4 = 0;
}
