// FUN_02051038 @ 0x02051038 (0x16, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch33-manifest.json; original draft retained for referenced provenance.
// FUN_02051038 @ 0x02051038 (inventory code 0x16, thumb)
// check: 2.0/sp2p3 target=0x16 candidate=0x16 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 7.
 * Exit current state, run cleanup helper, then invalidate word +4c.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b7/02051038.txt.
 */
extern void FUN_02051314(void *),FUN_02051128(void *);
void FUN_02051038(char *self) { FUN_02051314(self); FUN_02051128(self); *(unsigned int *)(self+76)=~0u; }
