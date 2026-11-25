// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xc, exact bytes and relocation targets.
// Match recovery 2026-11-12: express global addresses from ROM literal-pool
// bases as relocatable symbols, preserving original base+field addressing.
extern unsigned char DAT_0211a3c4[];
// FUN_02037578 @ 0x02037578 (inventory code 0x8, thumb)
// check: 2.0/sp2p3 target=0xc candidate=0xc words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 2.
 * Read signed byte +d from fixed global context.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b2/02037578.txt.
 */
int FUN_02037578(void) { return *(signed char *)((unsigned int)DAT_0211a3c4 + 13u); }
