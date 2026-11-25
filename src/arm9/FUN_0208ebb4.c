// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x64, exact bytes and relocation targets.
// flags: -O4,s
extern int DAT_0211a51c;
extern int FUN_02084ce8(int *);
extern void FUN_0208eb54(unsigned char *, char *, int, signed char, unsigned char, unsigned char, signed char);
extern void *FUN_02031a74(void);
extern unsigned int FUN_020323fc(void *);
extern void FUN_020bce3c(unsigned char *);
void FUN_0208ebb4(char *a) {
    unsigned char spc[0x10];
    if (FUN_02084ce8(&DAT_0211a51c) != 0) {
        FUN_0208eb54(spc, a + 4, 1, (signed char)a[9], (unsigned char)a[0xa], (unsigned char)a[0xb], (signed char)a[0xc]);
        unsigned int r0 = FUN_020323fc(FUN_02031a74());
        if (r0 < 2) {
            if (r0 == 1) {
                if (spc[0xa] & 2) {
                    spc[0xa] &= ~1;
                }
            } else {
                spc[0xa] = 0;
            }
        }
        FUN_020bce3c(spc);
    }
}
