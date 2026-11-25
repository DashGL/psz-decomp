// FUN_0204dd2c @ 0x0204dd2c (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch08-manifest.json; original draft retained for referenced provenance.
// FUN_0204dd2c @ 0x0204dd2c (inventory code 0x22, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 14.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b14/0204dd2c.txt.
 */
extern int FUN_0204dd04(void *);
int FUN_0204dd2c(char *s,unsigned int value) { if(FUN_0204dd04(s)) { *(unsigned int *)(s+8)=(*(unsigned int *)(s+8)&0xfffc1fff)|(value<<13); return 1; } return 0; }
