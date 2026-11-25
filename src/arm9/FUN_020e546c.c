// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x8c, exact bytes and relocation targets.
// flags: -O4,s
extern void FUN_020e5138(int);
extern char *FUN_020e961c(void);
extern void FUN_020d77c0(int, void *);
extern char DAT_02101794[];
extern char DAT_0210179c[];
extern char DAT_021017a8[];
extern char DAT_021017b4[];
extern char DAT_021017c0[];
void FUN_020e546c(char a, char b, int c, int d) {
    FUN_020e5138(0);
    FUN_020e961c()[0x15] = a;
    FUN_020e961c()[0x16] = b;
    *(int *)(FUN_020e961c() + 0x464) = c;
    *(int *)(FUN_020e961c() + 0x468) = d;
    FUN_020e961c()[0x17d] = 0;
    FUN_020e961c()[0x2d0] = 0;
    FUN_020d77c0(0x32, DAT_02101794);
    FUN_020d77c0(0x33, DAT_0210179c);
    FUN_020d77c0(0x34, DAT_021017a8);
    FUN_020d77c0(0x35, DAT_021017b4);
    FUN_020d77c0(0x36, DAT_021017c0);
}
