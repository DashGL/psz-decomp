// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x36, exact bytes and relocation targets.
extern unsigned int FUN_020c7824(void);

void FUN_020d7250(char *p) {
    int i = 0;
    unsigned int now = FUN_020c7824();
    for (; i < 200; i++, p += 0x10) {
        if (*(int *)(p + 0x118) != 0 && now - *(unsigned int *)(p + 0x120) > 0xfa0) {
            *(int *)(p + 0x118) = 0;
        }
    }
}
