// FUN_overlay_12__0212e01c @ 0x0212e01c (0x26, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch07.json; original draft retained for referenced provenance.
// FUN_overlay_12__0212e01c @ 0x0212e01c (code 0x26, pool extent 0x26, thumb)
// check: vers=2.0/sp2p3 target=0x26 candidate=0x26 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Release resource handle via local copy and reset member sentinel.
 * Field identities remain provisional.
 */
extern void *FUN_020c1fc8(void);
extern void FUN_020c2624(void *,int *);
void FUN_overlay_12__0212e01c(int *p) {if(p[25]!=-1) {int handle=p[25];FUN_020c2624(FUN_020c1fc8(),&handle);p[25]=-1;}}
