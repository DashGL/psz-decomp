// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x64, exact bytes and relocation targets.
// flags: -noThumb
typedef struct {
    int f0;
    char *f4;
} G_1091c;
extern int DAT_02103160;
extern G_1091c DAT_021028b4;
extern void FUN_020109b8(void *);
extern void FUN_02010a3c(void *, void *);
extern void FUN_02010590(void *);
void FUN_0201091c(char *a) {
    if ((*(int *)(a + 0x110) << 31) >> 31 == 0) {
        return;
    }
    FUN_020109b8(a);
    (*(void (**)(char *))(a + 0x168))(a);
    FUN_02010a3c(&DAT_02103160, a);
    if (DAT_021028b4.f4 != 0) {
        FUN_02010a3c(DAT_021028b4.f4 + 0x4e0, a);
    }
    FUN_02010590(a);
}
