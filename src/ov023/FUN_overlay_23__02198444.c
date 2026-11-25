// FUN_overlay_23__02198444 @ 0x02198444 (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch9.json; original draft retained for referenced provenance.
// FUN_overlay_23__02198444 @ 0x02198444 (code 0x30, pool extent 0x34, thumb)
// check: vers=2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 23 reconstruction from extracted module bytes, 2026-11-04.
 * Store eligible identifier and initialize timer and embedded status.
 * Field identities remain provisional.
 */
extern int FUN_02078188(int);
extern int FUN_02078198(int);
extern void FUN_0208e67c(void *);
void FUN_overlay_23__02198444(int *p,int id) {if(FUN_02078188(id)||FUN_02078198(id))p[13]=id;p[12]=*(int *)0x0219d5e4;p[16]=0;FUN_0208e67c(p+8);}
