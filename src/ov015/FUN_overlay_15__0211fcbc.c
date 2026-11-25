// FUN_overlay_15__0211fcbc @ 0x0211fcbc (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch49.json; original draft retained for referenced provenance.
// FUN_overlay_15__0211fcbc @ 0x0211fcbc (code 0x30, pool extent 0x30, thumb)
// check: vers=2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Validate packet length and tag, then copy payload.
 * Field identities remain provisional.
 */
extern unsigned short FUN_overlay_15__021207dc(unsigned short);
extern void FUN_overlay_15__021206c0(void *,const void *,int);
int FUN_overlay_15__0211fcbc(const unsigned char *p,void *out) {const unsigned char *h=p+6;int n=FUN_overlay_15__021207dc(*(const unsigned short *)(h+2));if(n<=0)return -1;if(*h!=112)return -1;FUN_overlay_15__021206c0(out,h+6,n);return 0;}
