// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x56, exact bytes and relocation targets.
extern int FUN_02030700(void *);

int FUN_0209fc20(char *a, unsigned int b) {
    switch (b) {
    case 0:
        if (FUN_02030700(a + 0x34) != 0) {
            return 1;
        }
        break;
    case 2:
        if (FUN_02030700(a + 0x3c) != 0) {
            return 1;
        }
        break;
    case 1:
        if (FUN_02030700(a + 0x44) != 0) {
            return 1;
        }
        break;
    case 3:
        if (FUN_02030700(a + 0x4c) != 0) {
            return 1;
        }
        break;
    }
    return 0;
}
