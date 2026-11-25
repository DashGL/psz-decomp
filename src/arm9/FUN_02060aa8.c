// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xac, exact bytes and relocation targets.
// flags: -noThumb
extern char *DAT_021180ac;
extern int DAT_021125f4;
extern unsigned short *FUN_0205375c(int, unsigned short);
extern void FUN_020605c4(unsigned short *, unsigned short);

void FUN_02060aa8(int param_1) {
    unsigned short i;

    for (i = 0; i < 0x10; i++) {
        char *p = DAT_021180ac + i * 0x5d4;
        if (*(unsigned char *)(p + 0x1d52) != 0) {
            *(unsigned short *)(p + 0x1d4a) = 0;
        }
    }
    DAT_021125f4 = 0;
    for (i = 1; i <= 0xf; i++) {
        unsigned short *p = FUN_0205375c(param_1, i);
        if (p != 0 && *p != 0xffff && *p != 0) {
            FUN_020605c4(p, i);
        }
    }
}
