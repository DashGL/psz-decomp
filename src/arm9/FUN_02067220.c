// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x5c, exact bytes and relocation targets.
// flags: -noThumb
typedef struct { int f0; void *f4; } G_67220;
extern G_67220 DAT_021181a0;
extern int FUN_020683d4(void);
extern void FUN_02067350(void *, void *);
extern void FUN_02066a2c(void *);
extern void FUN_020683e8(int);
typedef struct {
    int f0;
    int f4;
    void *f8;
    int fc;
} S_67220;
void FUN_02067220(S_67220 *r5) {
    int r4 = FUN_020683d4();
    void *owner = DAT_021181a0.f4;
    if (r5->f8 == owner && --r5->fc == 0) {
        FUN_02067350(owner, r5);
        r5->f8 = 0;
        FUN_02066a2c(r5);
    }
    FUN_020683e8(r4);
}
