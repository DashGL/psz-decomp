// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x68, exact bytes and relocation targets.
// flags: -O4,p
typedef struct {
    char pad[0x1d];
    unsigned char f1d;
} Sub_e2de4;
typedef struct {
    int f0[3];
    Sub_e2de4 *fc;
} G_e2de4;
extern G_e2de4 DAT_0211de50;
extern int FUN_020e2a24(int);
extern int FUN_020dd270(void *);
extern void FUN_020e2db0(void *, int, int);
int FUN_020e2de4(char *a, int b, int c) {
    int r4;
    for (r4 = 0; r4 < b; r4++) {
        int r0 = FUN_020e2a24(r4);
        if (r0 != 0 && r0 == c) {
            if (FUN_020dd270(a + b * 0xc) != 0 && FUN_020dd270(a + r4 * 0xc) == 0) {
                FUN_020e2db0(a, r4, b);
            } else {
                FUN_020e2db0(a, b, r4);
            }
            DAT_0211de50.fc->f1d = 1;
            return 1;
        }
    }
    return 0;
}
