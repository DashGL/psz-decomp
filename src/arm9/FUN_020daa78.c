// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x40, exact bytes and relocation targets.
extern int FUN_020dac74(int);
extern void FUN_02065774(const void *, void *, int);
extern void FUN_020656b8(void *, int, int);
extern int FUN_020daab8(int, int, int);

int FUN_020daa78(int a, int b, int c, const void *d, int e) {
    int p = FUN_020dac74(1);
    if (d != 0) {
        FUN_02065774(d, (void *)(p + 0x18), 10);
    } else {
        FUN_020656b8((void *)(p + 0x18), 0, 10);
    }
    *(unsigned char *)(p + 0x22) = e;
    return FUN_020daab8(a, b, c);
}
