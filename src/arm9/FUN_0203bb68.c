// FUN_0203bb68 @ 0x0203bb68 (0x1e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch14-manifest.json; original draft retained for referenced provenance.
// FUN_0203bb68 @ 0x0203bb68 (inventory code 0x1e, thumb)
// check: 2.0/sp2p3 target=0x1e candidate=0x1e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 11.
 * Store word +1f8, clear byte +247 and set word +f8 bit 25.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b11/0203bb68.txt.
 */
void FUN_0203bb68(char *self,unsigned int value) { *(unsigned int *)(self+0x1f8)=value; self[0x247]=0; *(unsigned int *)(self+0xf8)|=0x2000000; }
