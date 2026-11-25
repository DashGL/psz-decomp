// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x54, exact bytes and relocation targets.
extern void FUN_0206557c(int, int, int);
extern void FUN_0205dfa0(void);

void FUN_0200cc70(void) {
    FUN_0206557c(0, 0x06800000, 0x000a4000);
    FUN_0205dfa0();
    FUN_0206557c(0xc0, 0x07000000, 0x400);
    FUN_0206557c(0xc0, 0x07000400, 0x400);
    FUN_0206557c(0, 0x05000000, 0x400);
    FUN_0206557c(0, 0x05000400, 0x400);
}
