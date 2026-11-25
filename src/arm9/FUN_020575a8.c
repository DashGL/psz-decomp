// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x5c, exact bytes and relocation targets.
// flags: -noThumb
typedef struct {
    int f0[3];
    int fc;
    int f10[2];
    int (*f18)(int);
} G_575a8;
extern G_575a8 DAT_02111f20;
extern void FUN_02057604(void);
extern void FUN_02068728(void);
void FUN_020575a8(int a, int b) {
    if ((b & 0x3f) == 0x11) {
        if (DAT_02111f20.fc != 0) {
            return;
        }
        if ((DAT_02111f20.f18 != 0 ? DAT_02111f20.f18(0) : 0) != 0) {
            FUN_02057604();
        }
        DAT_02111f20.fc = 1;
        return;
    }
    FUN_02068728();
}
