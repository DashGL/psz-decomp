// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x42, exact bytes and relocation targets.
extern short FUN_0205c9e4(int, int);
extern void FUN_0203454c(int);

void FUN_02084284(int a) {
    *(int *)(a + 0x18) = *(int *)(a + 0x88);
    *(int *)(a + 0x1c) = *(int *)(a + 0x8c);
    *(int *)(a + 0x20) = *(int *)(a + 0x90);
    *(int *)(a + 0x24) = *(int *)(a + 0x6c);
    *(int *)(a + 0x28) = *(int *)(a + 0x70);
    *(int *)(a + 0x2c) = *(int *)(a + 0x74);
    *(short *)(a + 0x94) = FUN_0205c9e4(*(int *)(a + 0x18) - *(int *)(a + 0x24), *(int *)(a + 0x20) - *(int *)(a + 0x2c));
    FUN_0203454c(a);
}
