// FUN_02044024 @ 0x02044024 (0x3a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch11-manifest.json; original draft retained for referenced provenance.
// FUN_02044024 @ 0x02044024 (inventory code 0x3a, thumb)
// check: 2.0/sp2p3 target=0x3a candidate=0x3a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 30.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b30/02044024.txt.
 */
void FUN_02044024(char *s) { int i; *(unsigned int *)(s+0x94)&=~1u; for(i=0;i<*(int *)(s+0x9c);i++) { char *p=*(char **)(*(char **)(s+0x98)+112*i); *(unsigned int *)(p+0x18)&=~1u; } }
