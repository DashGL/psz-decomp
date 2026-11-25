// FUN_020480b8 @ 0x020480b8 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch10-manifest.json; original draft retained for referenced provenance.
// FUN_020480b8 @ 0x020480b8 (inventory code 0x24, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 16.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b16/020480b8.txt.
 */
void FUN_020480b8(char *s,int value) { if(value) *(unsigned int *)(s+0xe4)&=~1u; else *(unsigned int *)(s+0xe4)|=1; }
