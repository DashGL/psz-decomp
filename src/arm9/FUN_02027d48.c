// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x68, exact bytes and relocation targets.
// flags: -noThumb
extern int DAT_021070a4;
extern int DAT_02108888;
extern int DAT_02108884;
extern int FUN_02068438(void);
extern void FUN_02066c68(int);
int FUN_02027d48(void) {
    int r2 = DAT_021070a4;
    if (r2 == 0) {
        if ((DAT_02108888 & 3) == 1 && FUN_02068438() != 0x12) {
            FUN_02066c68(0xa);
        }
    } else if (DAT_02108884 == 0) {
        DAT_02108884 = r2;
    }
    return DAT_021070a4;
}
