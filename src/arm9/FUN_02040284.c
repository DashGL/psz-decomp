// FUN_02040284 @ 0x02040284 (0x1e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch13-manifest.json; original draft retained for referenced provenance.
// FUN_02040284 @ 0x02040284 (inventory code 0x1e, thumb)
// check: 2.0/sp2p3 target=0x1e candidate=0x1e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 11.
 * Destroy optional child +14, clear it, then free receiver buffer through helper.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b11/02040284.txt.
 */
extern void FUN_0204030c(void *);
void FUN_02040284(void **self) { void *child=self[5]; if(child) { if(child) { void (**table)(void *)=*(void (***)(void *))child; table[1](child); } self[5]=0; } FUN_0204030c(self); }
