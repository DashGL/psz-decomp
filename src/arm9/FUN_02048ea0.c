// FUN_02048ea0 @ 0x02048ea0 (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch10-manifest.json; original draft retained for referenced provenance.
// FUN_02048ea0 @ 0x02048ea0 (inventory code 0x2e, thumb)
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 23.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b23/02048ea0.txt.
 */
extern void FUN_0204adbc(void *); extern void FUN_0204b130(void *); extern void FUN_020ba8ac(void *);
void *FUN_02048ea0(char *s) { *(unsigned int *)s=0x020f9094; if(*(void **)(s+0x104)) { FUN_0204adbc(*(void **)(s+0x104)); *(void **)(s+0x104)=0; } FUN_0204b130(s); FUN_020ba8ac(s); return s; }
