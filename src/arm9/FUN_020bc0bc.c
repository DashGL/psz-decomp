// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x64, exact bytes and relocation targets.
// flags: -O4,s
extern int DAT_0211b378;
extern void FUN_0206aa10(char *);
extern void FUN_0206a998(void);
extern void FUN_0206aaa4(char *);
extern void FUN_0206ad64(int, int);
extern void FUN_0206b280(int);
extern int FUN_0206b298(int);
extern void FUN_0206abcc(int, int, int *, int);
extern void FUN_020bc150(void);
void FUN_020bc0bc(void) {
    char sp0[8];
    FUN_0206aa10(sp0);
    FUN_0206a998();
    FUN_0206aaa4(sp0);
    do {
        FUN_0206ad64(7, 0x1e);
        FUN_0206b280(8);
    } while (FUN_0206b298(8) != 0);
    do {
        FUN_0206abcc(0, 4, &DAT_0211b378, 5);
        FUN_0206b280(2);
    } while (FUN_0206b298(2) != 0);
    FUN_020bc150();
}
