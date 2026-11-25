// FUN_overlay_12__02134b68 @ 0x02134b68 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch24.json; original draft retained for referenced provenance.
// FUN_overlay_12__02134b68 @ 0x02134b68 (code 0x22, pool extent 0x28, thumb)
// check: vers=2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize handle to missing then request category-eleven resource when manager exists.
 * Field identities remain provisional.
 */
extern void *FUN_0208f068(void);
extern int FUN_0208ef48(void *,void *,int);
void *FUN_overlay_12__02134b68(int *p) {void *manager;*p=-1;manager=FUN_0208f068();if(manager)*p=FUN_0208ef48(manager,*(void **)0x0213eb08,11);return p;}
