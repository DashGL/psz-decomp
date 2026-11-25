// FUN_overlay_12__02131c30 @ 0x02131c30 (0x26, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch23.json; original draft retained for referenced provenance.
// FUN_overlay_12__02131c30 @ 0x02131c30 (code 0x26, pool extent 0x26, thumb)
// check: vers=2.0/sp2p3 target=0x26 candidate=0x26 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Release resource handle via local copy and reset receiver sentinel.
 * Field identities remain provisional.
 */
extern void *FUN_020c1fc8(void);
extern void FUN_020c2624(void *,int *);
void FUN_overlay_12__02131c30(int *p) {int handle=*p;if(handle!=-1) {FUN_020c2624(FUN_020c1fc8(),&handle);*p=-1;}}
