// FUN_overlay_12__021262c8 @ 0x021262c8 (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch47.json; original draft retained for referenced provenance.
// FUN_overlay_12__021262c8 @ 0x021262c8 (code 0x2c, pool extent 0x30, thumb)
// check: vers=2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * On first successful child completion set notification flag and dispatch event fourteen.
 * Field identities remain provisional.
 */
extern int FUN_overlay_12__02127bec(void *);
extern void FUN_02033400(void *,int);
void FUN_overlay_12__021262c8(unsigned int *p) {int ready;if(p[1])ready=FUN_overlay_12__02127bec((void *)p[1]);else ready=1;if(ready&&!p[2]) {p[2]=1;FUN_02033400(*(void **)0x02108c68,14);}}
