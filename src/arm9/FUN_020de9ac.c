// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x50, exact bytes and relocation targets.
extern void FUN_020656b8(void *, int, int);
extern void FUN_02023f70(void *);

void FUN_020de9ac(int a) {
    FUN_020656b8((void *)(a + 0x1138), 0, 0x64);
    *(int *)(a + 0x1174) = 0xb68;
    *(int *)(a + 0x1178) = *(int *)(a + 0x19cc);
    *(int *)(a + 0x1180) = 0x5ea;
    *(int *)(a + 0x1184) = *(int *)(a + 0x19d0);
    FUN_02023f70((void *)(a + 0x1138));
}
