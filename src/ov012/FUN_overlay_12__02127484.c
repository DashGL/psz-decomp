// FUN_overlay_12__02127484 @ 0x02127484 (0x1a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch20.json; original draft retained for referenced provenance.
// FUN_overlay_12__02127484 @ 0x02127484 (code 0x1a, pool extent 0x1a, thumb)
// check: vers=2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Preserve old state, install new state, call exit then entry handlers; exit ignores forwarded old value.
 * Field identities remain provisional.
 */
extern void FUN_overlay_12__02127468(void *,unsigned int);
extern void FUN_overlay_12__02127330(void *,unsigned int);
void FUN_overlay_12__02127484(unsigned int *p,unsigned int state) {p[2]=p[1];p[1]=state;FUN_overlay_12__02127468(p,p[2]);FUN_overlay_12__02127330(p,p[1]);}
