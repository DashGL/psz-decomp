// FUN_overlay_12__0212ca54 @ 0x0212ca54 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch07.json; original draft retained for referenced provenance.
// FUN_overlay_12__0212ca54 @ 0x0212ca54 (code 0x14, pool extent 0x18, thumb)
// check: vers=2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Reset embedded +40 of optional global owner through resident helper.
 * Field identities and high-level API contracts remain provisional.
 */
extern void FUN_020c38f0(void *,int);
void FUN_overlay_12__0212ca54(void) { char *object=*(char **)0x0213f2c8; if(object) FUN_020c38f0(object+0x40,0); }
