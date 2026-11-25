// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xb8, exact bytes and relocation targets.
// flags: -O4,p -noThumb

extern unsigned char DAT_021115a0[];
extern int FUN_02052fe4(int, int, int);
extern void FUN_020654dc(const void *, void *, unsigned int);
extern void FUN_020673f0(void *, unsigned int);
extern void FUN_02052de4(int, int);
extern int FUN_02052e54(int, int, void *, unsigned int, int, unsigned short, unsigned char);

int FUN_02055690(int a0, const void *a1, unsigned int a2, int a3, unsigned short a4, unsigned char a5) {
    int err = FUN_02052fe4(2, 7, 9);
    if (err != 0) {
        return err;
    }
    if (a1 == 0) {
        return 6;
    }
    if (a2 > 0x70) {
        return 6;
    }
    FUN_020654dc(a1, DAT_021115a0, a2);
    FUN_020673f0(DAT_021115a0, a2);
    FUN_02052de4(0x18, a0);
    err = FUN_02052e54(0x18, 5, DAT_021115a0, a2, a3, a4, a5);
    if (err == 0) {
        err = 2;
    }
    return err;
}
