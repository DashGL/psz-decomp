// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x7a, exact bytes and relocation targets.
// flags: -O4,s
extern void FUN_020c7bec(int);

void FUN_020ce044(int a) {
    if (*(int *)(a + 0x10) != 0) {
        FUN_020c7bec(*(int *)(*(int *)(a + 0x10) + 0));
        *(int *)(*(int *)(a + 0x10) + 0) = 0;
        FUN_020c7bec(*(int *)(*(int *)(a + 0x10) + 4));
        *(int *)(*(int *)(a + 0x10) + 4) = 0;
        FUN_020c7bec(*(int *)(*(int *)(a + 0x10) + 8));
        *(int *)(*(int *)(a + 0x10) + 8) = 0;
        FUN_020c7bec(*(int *)(*(int *)(a + 0x10) + 0xc));
        *(int *)(*(int *)(a + 0x10) + 0xc) = 0;
        FUN_020c7bec(*(int *)(*(int *)(a + 0x10) + 0x10));
        *(int *)(*(int *)(a + 0x10) + 0x10) = 0;
        FUN_020c7bec(*(int *)(*(int *)(a + 0x10) + 0x14));
        *(int *)(*(int *)(a + 0x10) + 0x14) = 0;
        FUN_020c7bec(*(int *)(*(int *)(a + 0x10) + 0xc8));
        *(int *)(*(int *)(a + 0x10) + 0xc8) = 0;
        FUN_020c7bec(*(int *)(a + 0x10));
        *(int *)(a + 0x10) = 0;
    }
}
