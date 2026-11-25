// FUN_overlay_12__02121fc8 @ 0x02121fc8 (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch19.json; original draft retained for referenced provenance.
// FUN_overlay_12__02121fc8 @ 0x02121fc8 (code 0x30, pool extent 0x38, thumb)
// check: vers=2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Resolve indexed resource from shared current receiver and valid stored handle.
 * Field identities remain provisional.
 */
extern void *FUN_0208f068(void);
extern void *FUN_0208efa8(void *,int,int,int);
void *FUN_overlay_12__02121fc8(int subindex,int index) {int *p=*(int **)0x0213ec98;if(p){void *m=FUN_0208f068();if(m){int h=p[813];if(h!=-1)return FUN_0208efa8(m,h,subindex,index);}}return 0;}
