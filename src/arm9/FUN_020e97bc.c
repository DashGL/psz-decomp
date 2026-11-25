// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x5e, exact bytes and relocation targets.
// flags: -O4,p
extern int FUN_020e0558(void);
extern int FUN_020e1508(int);
extern int FUN_020e16cc(int);
extern int FUN_020e9be4(int);
extern int FUN_020e9e80(int);
extern int FUN_020e99d0(int);
extern int FUN_020e9684(void);
int FUN_020e97bc(int a, int b) {
    if (FUN_020e0558() != 0 || (b == 1 && FUN_020e1508(a) == 0) || FUN_020e16cc(a) == 0) {
        return 0;
    }
    if (FUN_020e9be4(a) == 1) {
        return 0;
    }
    if (FUN_020e9e80(a) < FUN_020e99d0(b)) {
        return 0;
    }
    if (FUN_020e9684() != 0) {
        return 1;
    }
    return 0;
}
