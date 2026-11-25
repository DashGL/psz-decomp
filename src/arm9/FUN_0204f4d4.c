// FUN_0204f4d4 @ 0x0204f4d4 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch08-manifest.json; original draft retained for referenced provenance.
// FUN_0204f4d4 @ 0x0204f4d4 (inventory code 0x14, thumb)
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 6.
 * Read global receiver twice and invoke helper with first receiver selector byte.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b6/0204f4d4.txt.
 */
extern unsigned char *FUN_020b3d04(void);
extern void FUN_020b40a4(void *,unsigned int);
void FUN_0204f4d4(void) { unsigned char *first=FUN_020b3d04(); void *second=FUN_020b3d04(); FUN_020b40a4(second,first[12]); }
