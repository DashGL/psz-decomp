// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x48, exact bytes and relocation targets.
extern int FUN_020db958(int);
extern char FUN_020dbd90(int);
extern int FUN_020dbf48(int);

int FUN_020dc264(int a) {
    if (*(unsigned short *)(a + 0xd16) != 0 && FUN_020db958(2) != 0) {
        *(char *)(a + 0xd11) = FUN_020dbd90(0);
        return 5;
    }
    if ((((unsigned int)*(unsigned char *)(a + 0xd0b) << 24) >> 28) < 1) {
        return FUN_020dbf48(a);
    }
    return 6;
}
