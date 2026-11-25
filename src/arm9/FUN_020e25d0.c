// Verified 2026-11-13: full88-byte body, pinned2.0/sp2p3, exactbytes andeveryrelocation; restoredconsumedarguments.
// flags: -O4,p
typedef struct { int f0[3]; int fc; } S_e25d0;
extern S_e25d0 DAT_0211de50;
extern int FUN_020e2454(void);
extern int FUN_020e02a8(int, int, char *, int);
extern int FUN_020e2ab8(int, void *, void *);
int FUN_020e25d0(int a, int b) {
    char buf[256];
    int n;
    if (DAT_0211de50.fc == 0 || FUN_020e2454() == 0) {
        return 0;
    }
    n = FUN_020e02a8(a, b, buf, 0xff);
    if (n == -1) {
        return 0;
    }
    buf[n] = 0;
    if (FUN_020e2ab8(-1, 0, buf) == 0) {
        return 1;
    }
    return 0;
}
