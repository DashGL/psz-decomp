// FUN_overlay_11__0211e988 @ 0x0211e988 (0x26, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch08.json; original draft retained for referenced provenance.
// FUN_overlay_11__0211e988 @ 0x0211e988 (code 0x26, pool extent 0x26, thumb)
// check: vers=2.0/sp2p3 target=0x26 candidate=0x26 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 11 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize receiver header, embedded storage and four slots.
 * Field identities remain provisional.
 */
extern void FUN_0200c938(void *,unsigned int);
void *FUN_overlay_11__0211e988(unsigned int *p) {int i;p[0]=0;FUN_0200c938(p+1,16);p[5]=0;for(i=0;i<4;i++)p[i+1]=0;return p;}
