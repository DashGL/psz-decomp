// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x40, exact bytes and relocation targets.
extern int FUN_020e2a24(int);
extern struct { char pad[0xc]; int p0c; } D_0211de50;

int FUN_020e2a58(int a) {
    int i;
    if (D_0211de50.p0c == 0 || a == 0) {
        return -1;
    }
    for (i = 0; i < *(int *)(D_0211de50.p0c + 0x14); i++) {
        if (a == FUN_020e2a24(i)) {
            return i;
        }
    }
    return -1;
}
