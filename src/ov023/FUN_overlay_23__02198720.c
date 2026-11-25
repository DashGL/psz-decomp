// FUN_overlay_23__02198720 @ 0x02198720 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch12.json; original draft retained for referenced provenance.
// FUN_overlay_23__02198720 @ 0x02198720 (code 0x24, pool extent 0x24, thumb)
// check: vers=2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 23 reconstruction from extracted module bytes, 2026-11-04.
 * Enable three child component flags at index zero.
 * Field identities remain provisional.
 */
extern void FUN_02043ea4(void *,int,int);
extern void FUN_02044570(void *,int,int);
extern void FUN_020445a8(void *,int,int);
void FUN_overlay_23__02198720(void **p) {void *child=p[1];FUN_02043ea4(child,0,1);FUN_02044570(child,0,1);FUN_020445a8(child,0,1);}
