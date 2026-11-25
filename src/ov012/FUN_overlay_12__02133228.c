// FUN_overlay_12__02133228 @ 0x02133228 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch07.json; original draft retained for referenced provenance.
// FUN_overlay_12__02133228 @ 0x02133228 (code 0xe, pool extent 0x14, thumb)
// check: vers=2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Copy source words +c/+8 into destination +fa4/+fa8; return receiver.
 * Field identities and high-level API contracts remain provisional.
 */
void *FUN_overlay_12__02133228(char *self,unsigned int *source) { *(unsigned int *)(self+0xfa4)=source[3]; *(unsigned int *)(self+0xfa8)=source[2]; return self; }
