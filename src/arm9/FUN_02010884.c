// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x98, exact bytes and relocation targets.
// flags: -noThumb
typedef struct {
    int f0;
    char *f4;
} G_1091c;
extern int DAT_02103148;
extern G_1091c DAT_021028b4;
extern void FUN_0206719c(void *);
extern void FUN_0200e300(void *);
extern void FUN_0201091c(void *);
extern void FUN_02067220(void *);

void FUN_02010884(char *a) {
    FUN_0206719c(&DAT_02103148);
    if (DAT_021028b4.f4 != 0) {
        FUN_0206719c(DAT_021028b4.f4 + 0x4c8);
    }
    if ((*(int *)(a + 0x110) << 30) >> 31 != 0) {
        FUN_0200e300(a);
    }
    if ((*(int *)(a + 0x110) << 31) >> 31 != 0) {
        (*(void (**)(char *))(a + 0x170))(a);
    }
    FUN_0201091c(a);
    FUN_02067220(&DAT_02103148);
    if (DAT_021028b4.f4 != 0) {
        FUN_02067220(DAT_021028b4.f4 + 0x4c8);
    }
}
