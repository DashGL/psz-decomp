// FUN_overlay_15__02136d24 @ 0x02136d24 (0x22, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch18.json; original draft retained for referenced provenance.
// FUN_overlay_15__02136d24 @ 0x02136d24 (code 0x22, pool extent 0x22, thumb)
// check: vers=2.0/sp2p3 target=0x22 candidate=0x22 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Unlink doubly linked node under interrupt mask protection and clear its links.
 * Field identities remain provisional.
 */
extern unsigned int FUN_02065e30(unsigned int);
extern unsigned int FUN_02065e00(unsigned int);
void FUN_overlay_15__02136d24(unsigned int *p) {unsigned int mask=FUN_02065e30(1);((unsigned int *)p[0])[1]=p[1];((unsigned int *)p[1])[0]=p[0];p[1]=0;p[0]=0;FUN_02065e00(mask);}
