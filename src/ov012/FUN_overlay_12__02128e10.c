// FUN_overlay_12__02128e10 @ 0x02128e10 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch20.json; original draft retained for referenced provenance.
// FUN_overlay_12__02128e10 @ 0x02128e10 (code 0x24, pool extent 0x28, thumb)
// check: vers=2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Load category-eleven resource only when receiver handle is missing and manager exists.
 * Field identities remain provisional.
 */
extern void *FUN_0208f068(void);
extern int FUN_0208ef48(void *,void *,int);
void FUN_overlay_12__02128e10(int *p) {if(p[1]==-1){void *manager=FUN_0208f068();if(manager)p[1]=FUN_0208ef48(manager,*(void **)0x0213df98,11);}}
