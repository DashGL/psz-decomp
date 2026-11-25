// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x8c, exact bytes and relocation targets.
// flags: -O4,p
extern int FUN_020e961c(void);
extern const char DAT_0210174c[];
extern const char DAT_0210178c[];
extern const char DAT_02101790[];
extern const char DAT_02101758[];
extern void FUN_020662b4(char *, int, const char *, int);
extern void FUN_020e0a6c(const char *, char *, char *, int);
extern void FUN_020e0a94(const char *, char *, char *, int);
extern int FUN_020e2ab8(int, char *, int);

int FUN_020e5050(void) {
    char sp20[0xc];
    char sp0[0x20];
    if (*(unsigned char *)(FUN_020e961c() + 0x15) != 2) {
        return 0;
    }
    FUN_020662b4(sp20, 0xc, DAT_0210174c, *(unsigned char *)(FUN_020e961c() + 0x16) + 1);
    FUN_020e0a6c(DAT_0210178c, sp20, sp0, 0x2f);
    FUN_020662b4(sp20, 0xc, DAT_0210174c, *(unsigned char *)(FUN_020e961c() + 0xd) + 1);
    FUN_020e0a94(DAT_02101790, sp20, sp0, 0x2f);
    FUN_020662b4(sp20, 0xc, DAT_0210174c, 3);
    FUN_020e0a94(DAT_02101758, sp20, sp0, 0x2f);
    return FUN_020e2ab8(6, sp0, 0);
}
