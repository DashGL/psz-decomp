// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x48, exact bytes and relocation targets.
extern int FUN_020b6c68(int, int, int);

int FUN_020b6d34(int a, int b, int c) {
    switch (c) {
    case 0:
        return FUN_020b6c68(a, b, 1);
    case 1:
        return FUN_020b6c68(a, b, 2);
    case 2:
        return FUN_020b6c68(a, b, 3);
    case 3:
        return FUN_020b6c68(a, b, 4);
    case 4:
        return FUN_020b6c68(a, b, 5);
    }
    return 0;
}
