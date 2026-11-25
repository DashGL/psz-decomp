// Verified 2026-11-13: full132-byte body, pinned2.0/sp2p3, exactbytes andeveryrelocation; restoredconsumedarguments.
// Evidence: notes/reference/resume2-root-20261112/FUN_0209f7b0-additional-argument-correction.json
// flags: -O4,p
extern int DAT_02108c68;
extern int FUN_02030700(int);
extern int FUN_02033430(int, int, int, int);

static inline int bit0(unsigned char *p) {
    return (*p & 1) ? 1 : 0;
}

int FUN_0209f7b0(int a, int b) {
    switch (b) {
    case 0:
        if (FUN_02030700(a + 0x4c) != 0) {
            return 1;
        }
        break;
    case 1:
        if (*(int *)(a + 0x68) != 0 || bit0(*(unsigned char **)(a + 0x48)) != 0) {
            return 1;
        }
        break;
    case 2:
        if (FUN_02030700(a + 0x54) != 0) {
            return 1;
        }
        break;
    case 3:
        if (**(int **)(a + 0x44) != -1) {
            if (*(int *)(a + 0x6c) <= 0 && FUN_02033430(DAT_02108c68, 5, 2, **(int **)(a + 0x44)) != 0) {
                return 1;
            }
        } else {
            return 1;
        }
        break;
    }
    return 0;
}
