// FUN_overlay_12__021345c4 @ 0x021345c4 (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch24.json; original draft retained for referenced provenance.
// FUN_overlay_12__021345c4 @ 0x021345c4 (code 0x2e, pool extent 0x34, thumb)
// check: vers=2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Select descriptor entry by record category with shared fallback for absent entries.
 * Field identities remain provisional.
 */
extern int FUN_overlay_12__0213417c(const void *);
void *FUN_overlay_12__021345c4(unsigned int *p,const unsigned char *r) {int i;if(FUN_overlay_12__0213417c(r))i=r[3];else i=r[2];if(p[1] && i<*(short *)p)return (char *)p[1]+i*8;return (void *)0x0213bc5c;}
