// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x3c, exact bytes and relocation targets.
// flags: -noThumb
extern void FUN_02000b9c(void *);
extern void FUN_02025c44(void);
extern int FUN_02025c04(void);
extern void FUN_02000bdc(void);
extern int D_020f6968;

int FUN_02025bc8(int a) {
    FUN_02000b9c((void *)FUN_02000bdc);
    if (D_020f6968 != 0) {
        return 0;
    }
    D_020f6968 = a;
    FUN_02025c44();
    return FUN_02025c04();
}
