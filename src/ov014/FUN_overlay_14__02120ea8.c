// FUN_overlay_14__02120ea8 @ 0x02120ea8 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_overlay_14__02120ea8 @ 0x02120ea8 (code 0x14, pool extent 0x18, thumb)
// check: vers=2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 14 reconstruction from extracted module bytes, 2026-11-04.
 * Destroy three embedded array elements in reverse order with proven receiver-only destructor.
 * Field identities remain provisional.
 */
extern void FUN_0200c4d4(void *,unsigned int,unsigned int,void *);
void *FUN_overlay_14__02120ea8(char *p) {FUN_0200c4d4(p+16,3,72,(void *)0x02120861);return p;}
