// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x70, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern char DAT_02108bf8[];
extern unsigned char DAT_02108a80;
extern void FUN_0202c694(char *);
extern int FUN_020683d4(void);
extern void FUN_0202c6e8(char *, void *, int);
extern void FUN_0202c7a0(char *, void *);
extern void FUN_020683e8(int);
void FUN_0202ac1c(void *a, int b) {
    char sp0[0x5c];
    FUN_0202c694(sp0);
    int r4 = FUN_020683d4();
    FUN_0202c6e8(sp0, DAT_02108bf8, 0x14);
    FUN_0202c6e8(sp0, a, b);
    FUN_0202c7a0(sp0, DAT_02108bf8);
    FUN_020683e8(r4);
    DAT_02108a80 = 1;
}
