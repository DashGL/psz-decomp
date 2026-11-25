// FUN_overlay_12__02125720 @ 0x02125720 (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch20.json; original draft retained for referenced provenance.
// FUN_overlay_12__02125720 @ 0x02125720 (code 0x30, pool extent 0x30, thumb)
// check: vers=2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Resolve indexed resource only for valid handle, manager and nonnegative index.
 * Field identities remain provisional.
 */
extern void *FUN_0208f068(void);
extern void *FUN_0208efa8(void *,int,int,int);
void *FUN_overlay_12__02125720(int *p,int index) {if(p[1]>=0){void *m=FUN_0208f068();if(!m)return 0;if(index>=0)return FUN_0208efa8(m,p[1],0,index);return 0;}return 0;}
