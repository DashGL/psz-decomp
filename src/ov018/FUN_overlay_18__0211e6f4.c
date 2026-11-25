// FUN_overlay_18__0211e6f4 @ 0x0211e6f4 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch12.json; original draft retained for referenced provenance.
// FUN_overlay_18__0211e6f4 @ 0x0211e6f4 (code 0x18, pool extent 0x18, thumb)
// check: vers=2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 18 reconstruction from extracted module bytes, 2026-11-04.
 * Clamp signed index and return eight-byte record.
 * Field identities remain provisional.
 */
void *FUN_overlay_18__0211e6f4(unsigned int *p,int index) {if(index<0)index=0;else if(index>=(int)p[1])index=p[1]-1;return (char *)p[2]+index*8;}
