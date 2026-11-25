// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x74, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern char *DAT_02108c0c;
extern void FUN_0202e940(void);
extern int FUN_020683d4(void);
extern void FUN_020681f0(char *);
extern void FUN_02068114(char *, int, int, void *, int);
extern void FUN_020683e8(int);
void FUN_0202e8cc(void) {
    int r4 = FUN_020683d4();
    FUN_020681f0(DAT_02108c0c + 0x22cc);
    if (*(int *)(DAT_02108c0c + 0x2260) == 9) {
        FUN_02068114(DAT_02108c0c + 0x22cc, 0x022f5341, 0, (void *)FUN_0202e940, 0);
    }
    FUN_020683e8(r4);
}
