// FUN_0203bb38 @ 0x0203bb38 (0x2e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch14-manifest.json; original draft retained for referenced provenance.
// FUN_0203bb38 @ 0x0203bb38 (inventory code 0x2e, thumb)
// check: 2.0/sp2p3 target=0x2e candidate=0x2e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 22.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b22/0203bb38.txt.
 */
void FUN_0203bb38(char *s,unsigned int multiplier,unsigned int value) { *(int *)(s+0xd4)=((int)(*(unsigned int *)(s+0xd4)*multiplier))>>12; *(unsigned int *)(s+0x1f8)=value; s[0x247]=0; *(unsigned int *)(s+0xf8)|=0x20000; }
