// FUN_02030f7c @ 0x02030f7c (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch19-manifest.json; original draft retained for referenced provenance.
// FUN_02030f7c @ 0x02030f7c (inventory code 0x24, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 15.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b15/02030f7c.txt.
 */
extern void FUN_02040368(void *); extern void FUN_02030fa0(void *); extern void FUN_020ba8b4(void *);
void FUN_02030f7c(char *s) { if(*(void **)(s+0x28)) FUN_02040368(*(void **)(s+0x28)); FUN_02030fa0(s); if(*(void **)(s+0x38)) { FUN_020ba8b4(*(void **)(s+0x38)); *(void **)(s+0x38)=0; } }
