// FUN_overlay_12__02135118 @ 0x02135118 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch47.json; original draft retained for referenced provenance.
// FUN_overlay_12__02135118 @ 0x02135118 (code 0x28, pool extent 0x28, thumb)
// check: vers=2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Resolve indexed manager resource when stored handle is valid.
 * Field identities remain provisional.
 */
extern void *FUN_0208f068(void);
extern void *FUN_0208efa8(void *,int,int,int);
void *FUN_overlay_12__02135118(const int *p,int index) {if(*p!=-1) {void *manager=FUN_0208f068();if(manager)return FUN_0208efa8(manager,*p,0,index);}return 0;}
