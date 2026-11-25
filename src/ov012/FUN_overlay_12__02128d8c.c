// FUN_overlay_12__02128d8c @ 0x02128d8c (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch20.json; original draft retained for referenced provenance.
// FUN_overlay_12__02128d8c @ 0x02128d8c (code 0x30, pool extent 0x34, thumb)
// check: vers=2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Release resource and embedded manager handles, optionally freeing receiver.
 * Field identities remain provisional.
 */
extern void *FUN_0208f068(void);
extern void FUN_0208efd4(void *,int);
extern void FUN_overlay_12__02128dc0(void *);
extern void FUN_overlay_12__02128df4(void *);
extern void FUN_020ba8ac(void *);
int *FUN_overlay_12__02128d8c(int *p) {void *m;p[0]=0x0213dfb4;m=FUN_0208f068();if(m && p[1]>=0){FUN_0208efd4(m,p[1]);p[1]=-1;}FUN_overlay_12__02128dc0(p);FUN_overlay_12__02128df4(p);return p;}
