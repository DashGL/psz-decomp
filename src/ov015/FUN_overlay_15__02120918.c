// FUN_overlay_15__02120918 @ 0x02120918 (0x22, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch17.json; original draft retained for referenced provenance.
// FUN_overlay_15__02120918 @ 0x02120918 (code 0x22, pool extent 0x22, thumb)
// check: vers=2.0/sp2p3 target=0x22 candidate=0x22 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Clear output payload, store truncated input length and copy that many bytes.
 * Field identities remain provisional.
 */
extern void FUN_020654b4(unsigned int,void *,unsigned int);
extern void FUN_02065774(const void *,void *,unsigned int);
void FUN_overlay_15__02120918(unsigned int *source,char *out) {FUN_020654b4(0,out+12,32);*(unsigned short *)(out+10)=source[0];FUN_02065774(source+1,out+12,*(unsigned short *)(out+10));}
