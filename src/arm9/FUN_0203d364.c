// FUN_0203d364 @ 0x0203d364 (0x22, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch13-manifest.json; original draft retained for referenced provenance.
// FUN_0203d364 @ 0x0203d364 (inventory code 0x22, thumb)
// check: 2.0/sp2p3 target=0x22 candidate=0x22 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 14.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b14/0203d364.txt.
 */
extern int FUN_0203d34c(void *); extern void FUN_02034680(void *,void *);
int FUN_0203d364(char *s,void *out) { if(FUN_0203d34c(s)==1) { FUN_02034680(out,s+0xaf0); return 1; } return 0; }
