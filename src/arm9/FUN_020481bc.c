// FUN_020481bc @ 0x020481bc (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch10-manifest.json; original draft retained for referenced provenance.
// FUN_020481bc @ 0x020481bc (inventory code 0x20, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 13.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b13/020481bc.txt.
 */
extern void FUN_0204734c(void *);
void *FUN_020481bc(char *s) { FUN_0204734c(s); *(unsigned int *)s=0x020f9154; *(unsigned int *)(s+0x104)=0; *(unsigned int *)(s+0x108)=31; return s; }
