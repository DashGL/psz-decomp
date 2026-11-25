// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x1c, exact bytes and relocation targets.
// FUN_02078310 @ 0x02078310
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern unsigned short D_0211a3b8[];
extern char D_0211a3e4[];
/* USA ROM reconstruction, 2026-11-04.
 * Return global record only when pending bit zero set.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02078310.txt.
 */
void *FUN_02078310(void) { if(*D_0211a3b8&1) return D_0211a3e4; return 0; }
