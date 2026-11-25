// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x74, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern int DAT_021181a0[];
extern int DAT_021072bc[];
extern int FUN_02022d00(int);
extern void FUN_0202235c(int, int, void *, int, int);
extern int FUN_0202153c(int);
extern void FUN_02021ad8(int);
void FUN_02022d1c(char *a, int b, int c) {
    if (FUN_02022d00(*(int *)(a + 0x1c)) != 0 || DAT_021181a0[1] != (int)DAT_021072bc) {
        FUN_0202235c(0, 0, a, b, c);
    } else {
        FUN_02021ad8(FUN_0202153c(*(int *)(a + 0x1c)));
    }
}
