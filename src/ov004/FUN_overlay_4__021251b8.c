// FUN_overlay_4__021251b8 @ 0x021251b8 (0x22, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch09.json; original draft retained for referenced provenance.
// FUN_overlay_4__021251b8 @ 0x021251b8 (code 0x22, pool extent 0x22, thumb)
// check: vers=2.0/sp2p3 target=0x22 candidate=0x22 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 4 reconstruction from extracted module bytes, 2026-11-04.
 * Enter state three on input bit one unless receiver flag sixteen is set.
 * Field identities remain provisional.
 */
extern int FUN_020bbf6c(unsigned int);
extern void FUN_overlay_4__0212512c(void *,unsigned int);
void FUN_overlay_4__021251b8(unsigned int *p) {if(!(p[47]&16)&&FUN_020bbf6c(1))FUN_overlay_4__0212512c(p,3);}
