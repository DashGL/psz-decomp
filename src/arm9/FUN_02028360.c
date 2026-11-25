// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x38, exact bytes and relocation targets.
// flags: -noThumb
extern unsigned int FUN_02027d48(void);

unsigned int FUN_02028360(void) {
    unsigned int x = FUN_02027d48();
    return ((x >> 24) & 0xff) | ((x >> 8) & 0xff00) | ((x << 8) & 0xff0000) | ((x << 24) & 0xff000000);
}
