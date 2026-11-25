// FUN_0204267c @ 0x0204267c (0x3a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch12-manifest.json; original draft retained for referenced provenance.
// FUN_0204267c @ 0x0204267c (inventory code 0x3a, thumb)
// check: 2.0/sp2p3 target=0x3a candidate=0x3a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 30.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b30/0204267c.txt.
 */
void FUN_0204267c(char *s) { *(unsigned int *)(s+0x18)|=1; *(unsigned int *)(s+0xf0)=0; *(int *)(s+0x78)=*(int *)(s+0x84)>>8; *(unsigned int *)(s+0x7c)=*(unsigned int *)(s+0x88)<<3; *(int *)(s+0x80)=*(int *)(s+0x8c)>>8; *(unsigned int *)(s+0xec)=3; }
