// FUN_overlay_17__021223cc @ 0x021223cc (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_overlay_17__021223cc @ 0x021223cc (code 0x28, pool extent 0x28, thumb)
// check: vers=2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 17 reconstruction from extracted module bytes, 2026-11-04.
 * Clamp negative index to zero and resolve actor resource from manager.
 * Field identities remain provisional.
 */
extern void *FUN_0208f068(void);
extern void *FUN_0208efa8(void *,int,int,int);
void *FUN_overlay_17__021223cc(int *p,int index) {void *manager;if(index<0)index=0;manager=FUN_0208f068();if(!manager)return 0;return FUN_0208efa8(manager,p[67],p[66],index);}
