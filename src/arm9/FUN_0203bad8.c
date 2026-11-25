// FUN_0203bad8 @ 0x0203bad8 (0x3a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch14-manifest.json; original draft retained for referenced provenance.
// FUN_0203bad8 @ 0x0203bad8 (inventory code 0x3a, thumb)
// check: 2.0/sp2p3 target=0x3a candidate=0x3a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 30.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b30/0203bad8.txt.
 */
void FUN_0203bad8(char *s,const unsigned char *src,unsigned int value) { s[0x1e8]=src[0]; s[0x1e9]=src[1]; s[0x1ea]=src[2]; s[0x1eb]=src[3]; *(unsigned int *)(s+0x1f8)=value; s[0x247]=0; *(unsigned int *)(s+0xf8)|=0x8000; }
