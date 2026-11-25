// FUN_0204285c @ 0x0204285c (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch12-manifest.json; original draft retained for referenced provenance.
// FUN_0204285c @ 0x0204285c (inventory code 0x20, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 13.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b13/0204285c.txt.
 */
extern void FUN_0204022c(void *); extern void FUN_02051000(void *); extern void FUN_02042790(void *);
void FUN_0204285c(unsigned int *s) { FUN_0204022c(*(void **)0x02108d5c); FUN_02051000(*(void **)0x0210e24c); *s=0; FUN_02042790(s); }
