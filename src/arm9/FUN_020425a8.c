// FUN_020425a8 @ 0x020425a8 (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch12-manifest.json; original draft retained for referenced provenance.
// FUN_020425a8 @ 0x020425a8 (inventory code 0x2a, thumb)
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 20.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b20/020425a8.txt.
 */
void FUN_020425a8(char *s,int value) { char *p; if(value>=255) value=255; s[0xe4]=value; p=*(char **)(s+0xcc); if(p) { *(unsigned int *)(p+4)|=0x20; *(unsigned int *)(p+0x28)=(*(unsigned int *)(p+0x28)&0xfff)|((unsigned int)value<<24); } }
