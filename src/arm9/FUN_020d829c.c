// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x38, exact bytes and relocation targets.
extern int FUN_02003e24(int, int);
extern const struct S2 { int a[2]; } D_020f5f34;

int FUN_020d829c(int a) {
    struct S2 arr = D_020f5f34;
    for (unsigned int i = 0; i < 2; i++) {
        if (FUN_02003e24(a, arr.a[i]) == 0) {
            return 0;
        }
    }
    return 1;
}
