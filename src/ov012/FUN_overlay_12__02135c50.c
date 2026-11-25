// FUN_overlay_12__02135c50 @ 0x02135c50 (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch24.json; original draft retained for referenced provenance.
// FUN_overlay_12__02135c50 @ 0x02135c50 (code 0x32, pool extent 0x38, thumb)
// check: vers=2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Resolve shared resource subindex one when receiver and handle are available.
 * Field identities remain provisional.
 */
extern void *FUN_0208f068(void);
extern void *FUN_0208efa8(void *,int,int,int);
void *FUN_overlay_12__02135c50(int index) {int *p=*(int **)0x0213f320;if(p){if(p[3]!=-1){void *m=FUN_0208f068();if(m)return FUN_0208efa8(m,p[3],1,index);}return 0;}return 0;}
