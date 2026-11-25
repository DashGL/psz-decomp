// FUN_02046a4c @ 0x02046a4c (0x2a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch11-manifest.json; original draft retained for referenced provenance.
// FUN_02046a4c @ 0x02046a4c (inventory code 0x2a, thumb)
// check: 2.0/sp2p3 target=0x2a candidate=0x2a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 20.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b20/02046a4c.txt.
 */
extern void FUN_02018cec(void *,void *);
int FUN_02046a4c(char *s) { if(*(unsigned int *)(s+4)&2) { FUN_02018cec(*(void **)(s+0x10),*(void **)(s+0x14)); *(unsigned int *)(s+0x18)=0; *(unsigned int *)(s+0x20)=0; *(unsigned int *)(s+4)&=~2u; return 1; } return 0; }
