// FUN_0203606c @ 0x0203606c (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch16-manifest.json; original draft retained for referenced provenance.
// FUN_0203606c @ 0x0203606c (inventory code 0x28, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 18.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b18/0203606c.txt.
 */
extern void FUN_02036094(void *); extern void FUN_020360a4(void *,int,int,int);
void *FUN_0203606c(char *s) { FUN_02036094(s); FUN_020360a4(s,4,3,12); *(unsigned int *)(s+4)=~0u; s[8]=-1; s[9]=-1; s[10]=0; s[11]=0; return s; }
