// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x24, exact bytes and relocation targets.
// Match recovery 2026-11-12: express global addresses from ROM literal-pool
// bases as relocatable symbols, preserving original base+field addressing.
extern unsigned char DAT_02108de0[];
// FUN_02045bb4 @ 0x02045bb4 (inventory code 0x1e, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 12.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b12/02045bb4.txt.
 */
extern int FUN_02078188(int);
int FUN_02045bb4(int id) { if(FUN_02078188(id) && ((void **)((unsigned int)DAT_02108de0 + 0u))[id]) return 1; return 0; }
