// FUN_0204030c @ 0x0204030c (0x12, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch13-manifest.json; original draft retained for referenced provenance.
// FUN_0204030c @ 0x0204030c (inventory code 0x12, thumb)
// check: 2.0/sp2p3 target=0x12 candidate=0x12 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 5.
 * Free slot +18 unconditionally, then clear it and adjacent word +1c.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b5/0204030c.txt.
 */
extern void FUN_020ba8c4(void *);
void FUN_0204030c(void **self) { FUN_020ba8c4(self[6]); self[6]=0; self[7]=0; }
