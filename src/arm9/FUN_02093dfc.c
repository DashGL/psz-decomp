// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x64, exact bytes and relocation targets.
// flags: -O4,s
extern int DAT_0211a3c0;
extern char *DAT_02108d04;
extern void FUN_020328d8(void *);
extern void FUN_02032838(void *, void *);
extern void FUN_020345f0(void *, void *);
extern void FUN_020781e0(void *, void *, unsigned short);
extern void FUN_02078244(void *);
extern int FUN_0200d16c(void);
extern void FUN_0200d3a4(int, int, int);
void FUN_02093dfc(char *a, int b) {
    int spc[7];
    int sp0[3];
    char *r5;
    DAT_0211a3c0 = b;
    FUN_020328d8(spc);
    FUN_02032838(spc, a + 0x14);
    r5 = DAT_02108d04;
    if (r5 != 0) {
        FUN_020345f0(sp0, r5 + 0x9c);
        FUN_020781e0(spc, sp0, *(unsigned short *)(r5 + 0xc0));
    }
    FUN_02078244(spc);
    FUN_02032838(a + 0x10, a + 0x14);
    FUN_0200d3a4(FUN_0200d16c(), 8, 1);
}
