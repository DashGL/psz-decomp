// FUN_0203d53c @ 0x0203d53c (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch13-manifest.json; original draft retained for referenced provenance.
// FUN_0203d53c @ 0x0203d53c (inventory code 0x20, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 13.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b13/0203d53c.txt.
 */
extern char *FUN_020ac3cc(void *); extern void FUN_02033580(unsigned int);
int FUN_0203d53c(void *arg) { char *p=FUN_020ac3cc(arg); if(p && (*(unsigned int *)(p+0x34)&2)) { FUN_02033580(*(unsigned int *)(p+0x40)); return 1; } return 0; }
