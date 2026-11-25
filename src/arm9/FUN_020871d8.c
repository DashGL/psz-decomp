// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x74, exact bytes and relocation targets.
// flags: -O4,s
extern int FUN_020c4848(void);
extern void FUN_020ba8c4(void *);
extern void *FUN_020ba8bc(int, int);
extern void FUN_020655d8(void *, void *, int);
extern int FUN_020c4870(void *, void *, int);
int FUN_020871d8(char *a, void *b) {
    if (FUN_020c4848()) {
        if (*(void **)(a + 0x1928) != 0) {
            FUN_020ba8c4(*(void **)(a + 0x1928));
            *(void **)(a + 0x1928) = 0;
        }
        *(void **)(a + 0x1928) = FUN_020ba8bc(0xb78, 0x10);
        if (*(void **)(a + 0x1928) != 0) {
            FUN_020655d8(a + 0xdb0, *(void **)(a + 0x1928), 0xb78);
            if (FUN_020c4870(b, *(void **)(a + 0x1928), 0)) {
                return 1;
            }
            if (*(void **)(a + 0x1928) != 0) {
                FUN_020ba8c4(*(void **)(a + 0x1928));
                *(void **)(a + 0x1928) = 0;
            }
            return 0;
        }
    }
    return 0;
}
