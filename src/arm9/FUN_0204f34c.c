// FUN_0204f34c @ 0x0204f34c (0xc, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch08-manifest.json; original draft retained for referenced provenance.
// FUN_0204f34c @ 0x0204f34c (inventory code 0xc, thumb)
// check: 2.0/sp2p3 target=0xc candidate=0xc words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 3.
 * Clear manager word +60.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b3/0204f34c.txt.
 */
extern char *FUN_0204a580(void);
void FUN_0204f34c(void) { *(unsigned int *)(FUN_0204a580()+0x60)=0; }
