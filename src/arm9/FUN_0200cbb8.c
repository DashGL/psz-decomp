// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x8c, exact bytes and relocation targets; argument/return contract corrected.
// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x8c, exact bytes and relocation targets; argument/return contract corrected.
// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x8c, exact bytes and relocation targets.
// flags: -O4,s
extern int DAT_02101dd4;
extern void FUN_0200d064(void);
extern int FUN_0200cee8(void);
extern void FUN_02067e0c(void);
extern void FUN_020c31b4(void);
extern void FUN_020bbea4(void);
extern void FUN_020bc150(void);
extern void FUN_020c1654(void);
extern void FUN_02034464(void);
extern void FUN_020b9ebc(int);
extern void FUN_020ba258(void);
extern void *FUN_0200d16c(void);
extern void FUN_0200d1d4(void *);
extern void *FUN_02086e3c(void);
extern void FUN_020874b8(void *);
extern void FUN_020c31ec(void);
extern void FUN_0200d024(int);
extern void FUN_020c2e5c(void);
extern void FUN_02050db4(void);
extern void FUN_0203401c(void);
extern void FUN_02033e98(void);
extern void FUN_020343fc(void);
extern int FUN_0200d3f8(void *);

int FUN_0200cbb8(void) {
    FUN_0200d064();
    if (FUN_0200cee8() == 1) {
        return 1;
    }
    FUN_02067e0c();
    FUN_020c31b4();
    FUN_020bbea4();
    FUN_020bc150();
    FUN_020c1654();
    FUN_02034464();
    FUN_020b9ebc(DAT_02101dd4);
    FUN_020ba258();
    FUN_0200d1d4(FUN_0200d16c());
    FUN_020874b8(FUN_02086e3c());
    FUN_020c31ec();
    FUN_0200d024(2);
    FUN_02067e0c();
    FUN_020c2e5c();
    FUN_02050db4();
    FUN_0203401c();
    FUN_02033e98();
    FUN_020343fc();
    if (FUN_0200d3f8(FUN_0200d16c()) == 1) {
        *(volatile int *)0x04000540 = 1;
    } else {
        *(volatile int *)0x04000540 = 3;
    }
    return 1;
}
