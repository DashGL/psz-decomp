// FUN_0204bb08 @ 0x0204bb08 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch09-manifest.json; original draft retained for referenced provenance.
// FUN_0204bb08 @ 0x0204bb08 (inventory code 0x24, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 16.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b16/0204bb08.txt.
 */
void FUN_0204bb08(char *s,unsigned int a,unsigned int b,unsigned int c) { *(unsigned int *)(s+0x78)=a; *(unsigned int *)(s+0x84)=a; *(unsigned int *)(s+0x7c)=b; *(unsigned int *)(s+0x88)=b; *(unsigned int *)(s+0x80)=c; *(unsigned int *)(s+0x8c)=*(unsigned int *)(s+0x80); }
