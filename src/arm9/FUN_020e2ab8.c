// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x70, exact bytes and relocation targets.
// flags: -O4,p
typedef struct {
    int f0;
    char *f4;
} Sub_e2ab8;
typedef struct {
    int f0[3];
    Sub_e2ab8 *fc;
} G_e2ab8;
extern G_e2ab8 DAT_0211de50;
extern int FUN_020e2454(void);
extern int FUN_020c8f64(void *, int, void *, void *);
int FUN_020e2ab8(int a, void *b, void *c) {
    if (DAT_0211de50.fc == 0 || FUN_020e2454() == 0) {
        return 0;
    }
    if (a == -1) {
        a = ((int *)(*(char **)DAT_0211de50.fc->f4))[0x8f];
    }
    if (b == 0) {
        b = (*(char **)DAT_0211de50.fc->f4) + 0x3b8;
    }
    if (c == 0) {
        c = (*(char **)DAT_0211de50.fc->f4) + 0x4b8;
    }
    return FUN_020c8f64(DAT_0211de50.fc->f4, a, b, c);
}
