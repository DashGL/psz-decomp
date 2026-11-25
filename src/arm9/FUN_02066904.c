// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x7c, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern struct {
    char pad[0x28];
    int unk28;
} DAT_0211817c;
extern int FUN_020683d4(void);
extern void FUN_020668a8(void);
extern void FUN_02066d68(void);
extern void FUN_0206727c(int);
extern void FUN_02066980(int);
extern void FUN_020663ac(int, int);
extern void FUN_02066490(int);
extern void FUN_02066a2c(int);
extern void FUN_02066d9c(void);
extern void FUN_020683e8(int);
extern void FUN_02066ae4(void);

void FUN_02066904(int a) {
    int r4 = FUN_020683d4();
    if (DAT_0211817c.unk28 == a) {
        FUN_020668a8();
    }
    FUN_02066d68();
    FUN_0206727c(a);
    FUN_02066980(a);
    if (*(int *)(a + 0x78) != 0) {
        FUN_020663ac(*(int *)(a + 0x78), a);
    }
    FUN_02066490(a);
    *(int *)(a + 0x64) = 2;
    FUN_02066a2c(a + 0x9c);
    FUN_02066d9c();
    FUN_020683e8(r4);
    FUN_02066ae4();
}
