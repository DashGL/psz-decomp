// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x5c, exact bytes and relocation targets.
// flags: -noThumb
typedef struct {
    int f0[2];
    void **f8;
} G_668a8;
extern G_668a8 DAT_0211817c;
extern void FUN_02066d68(void);
extern void FUN_0206727c(void *);
extern void FUN_020663ac(int, void *);
extern void FUN_02066490(void *);
extern void FUN_02066a2c(void *);
extern void FUN_02066d9c(void);
extern void FUN_02066ae4(void);
extern void FUN_02068728(void);
void FUN_020668a8(void) {
    char *r4 = (char *)*DAT_0211817c.f8;
    FUN_02066d68();
    FUN_0206727c(r4);
    if (*(int *)(r4 + 0x78) != 0) {
        FUN_020663ac(*(int *)(r4 + 0x78), r4);
    }
    FUN_02066490(r4);
    *(int *)(r4 + 0x64) = 2;
    FUN_02066a2c(r4 + 0x9c);
    FUN_02066d9c();
    FUN_02066ae4();
    FUN_02068728();
}
