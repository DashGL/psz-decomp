// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x44, exact bytes and relocation targets; argument/return contract corrected.
// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x44, exact bytes and relocation targets.
extern int FUN_020e0558(int);
extern int FUN_020e15cc(int);
extern void FUN_020d36d4(int);
extern int *D_0211dcbc;

int FUN_020e143c(int a) {
    if (D_0211dcbc == 0 || FUN_020e0558((int)D_0211dcbc) != 0 ||
        (D_0211dcbc[9] != 5 && D_0211dcbc[9] != 6)) {
        return -1;
    }
    int connection = FUN_020e15cc(a);
    if (connection == 0) {
        return -2;
    }
    FUN_020d36d4(connection);
    return 0;
}
