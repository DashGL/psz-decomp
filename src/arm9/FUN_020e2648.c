// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x60, exact bytes and relocation targets.
// flags: -O4,p
typedef struct {
    int f0;
    int f4;
} Sub_e2648;
typedef struct {
    int f0[3];
    Sub_e2648 *fc;
} G_e2648;
extern G_e2648 DAT_0211de50;
extern int FUN_020e2454(void);
extern int FUN_020e1ea8(void);
extern int FUN_020dd83c(int, void *);
extern int FUN_020c8ec8(int, int);
extern void FUN_020c8f20(int, int);
extern void FUN_020656b8(void *, int, int);
void FUN_020e2648(void *a) {
    int r4;
    if (DAT_0211de50.fc != 0 && FUN_020e2454() != 0 && FUN_020e1ea8() != 0) {
        r4 = FUN_020dd83c(FUN_020e1ea8(), a);
        if (r4 != 0 && r4 != -1 && FUN_020c8ec8(DAT_0211de50.fc->f4, r4) != 0) {
            FUN_020c8f20(DAT_0211de50.fc->f4, r4);
        }
    }
    FUN_020656b8(a, 0, 0xc);
}
