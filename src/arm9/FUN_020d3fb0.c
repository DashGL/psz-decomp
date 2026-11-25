// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x34, exact bytes and relocation targets.
extern int FUN_020d3828(int);
extern int FUN_020d37a4(int, int);
extern int FUN_020d3850(int, int);

int FUN_020d3fb0(int a, int b, int c) {
    if (c != 2) {
        if (FUN_020d3828(a) != 0) {
            return 1;
        }
        return 0;
    }
    if (FUN_020d3850(a, FUN_020d37a4(b, 0)) != 0) {
        return 1;
    }
    return 0;
}
