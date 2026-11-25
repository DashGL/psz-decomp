// FUN_overlay_12__02134b90 @ 0x02134b90 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch03.json; original draft retained for referenced provenance.
// FUN_overlay_12__02134b90 @ 0x02134b90 (code 0x1c, pool extent 0x1c, thumb)
// check: vers=2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Release handle through optional resident manager and restore sentinel.
 * Field identities remain provisional.
 */
extern void *FUN_0208f068(void);
extern void FUN_0208efd4(void *,int);
void *FUN_overlay_12__02134b90(int *p) {void *manager=FUN_0208f068();if(manager)FUN_0208efd4(manager,*p);*p=-1;return p;}
