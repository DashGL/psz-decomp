// FUN_02036eb8 @ 0x02036eb8 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch15-manifest.json; original draft retained for referenced provenance.
// FUN_02036eb8 @ 0x02036eb8 (inventory code 0x18, thumb)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 8.
 * Release optional child +c4 and clear slot after call.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b8/02036eb8.txt.
 */
extern void FUN_0204adbc(void *);
void FUN_02036eb8(char *self) { void *child=*(void **)(self+0xc4); if(child) { FUN_0204adbc(child); *(void **)(self+0xc4)=0; } }
