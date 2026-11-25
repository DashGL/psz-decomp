// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x62, exact bytes and relocation targets.
// flags: -O4,p
typedef struct {
    int f0[3];
    int fc;
    char pad[0x8c];
    int f9c;
} S_d38ec;
extern int FUN_020c6e0c(int);
extern int FUN_020d2f8c(S_d38ec *, int, int, int, int);
extern int FUN_020d2d78(S_d38ec *, int, int, int);
int FUN_020d38ec(S_d38ec *a, int b, int c) {
    if (a->fc != 5 && a->fc != 6) {
        return 1;
    }
    if (FUN_020c6e0c(a->f9c) != 0) {
        if (FUN_020d2f8c(a, 0, b, c, 0) != 0) {
            return 1;
        }
        return 0;
    } else {
        if (FUN_020d2d78(a, b, c, 0) != 0) {
            return 1;
        }
        return 0;
    }
}
