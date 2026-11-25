// FUN_02033224 @ 0x02033224 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch18-manifest.json; original draft retained for referenced provenance.
// FUN_02033224 @ 0x02033224 (inventory code 0x24, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 15.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b15/02033224.txt.
 */
extern void FUN_0207f3fc(void *); extern void FUN_02032838(void *,void *);
void *FUN_02033224(char *s,unsigned int a,unsigned int b,unsigned int c) { FUN_0207f3fc(s); *(unsigned int *)(s+4)=a; *(unsigned int *)(s+8)=b; *(unsigned int *)(s+0xc)=c; FUN_02032838(s,*(char **)0x02108c64+0x14); return s; }
