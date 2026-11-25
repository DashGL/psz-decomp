// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x5a, exact bytes and relocation targets.
// flags: -O4,p
extern void FUN_020c7bec(void *);
extern void FUN_020c6de0(void *);
void FUN_020d3454(char *a) {
    if (*(void **)(a + 0x38) != 0) {
        FUN_020c7bec(*(void **)(a + 0x38));
    }
    if (*(void **)(a + 0x44) != 0) {
        FUN_020c7bec(*(void **)(a + 0x44));
    }
    if (*(void **)(a + 0x50) != 0) {
        FUN_020c7bec(*(void **)(a + 0x50));
    }
    if (*(void **)(a + 0x5c) != 0) {
        FUN_020c6de0(*(void **)(a + 0x5c));
    }
    if (*(void **)(a + 0x60) != 0) {
        FUN_020c6de0(*(void **)(a + 0x60));
    }
    if (*(void **)(a + 0x98) != 0) {
        FUN_020c6de0(*(void **)(a + 0x98));
    }
    if (*(void **)(a + 0x9c) != 0) {
        FUN_020c6de0(*(void **)(a + 0x9c));
    }
    FUN_020c7bec(a);
}
