// FUN_0203bb14 @ 0x0203bb14 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch14-manifest.json; original draft retained for referenced provenance.
// FUN_0203bb14 @ 0x0203bb14 (inventory code 0x24, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 15.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b15/0203bb14.txt.
 */
void FUN_0203bb14(char *s,unsigned int a,unsigned int b) { *(unsigned int *)(s+0x1ec)=a; *(unsigned int *)(s+0x1f8)=b; s[0x247]=0; *(unsigned int *)(s+0xf8)|=0x10000; }
