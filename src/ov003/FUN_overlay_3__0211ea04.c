// FUN_overlay_3__0211ea04 @ 0x0211ea04 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch09.json; original draft retained for referenced provenance.
// FUN_overlay_3__0211ea04 @ 0x0211ea04 (code 0x18, pool extent 0x18, thumb)
// check: vers=2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 3 reconstruction from extracted module bytes, 2026-11-04.
 * Set receiver state five when selected global input bit is active.
 * Field identities remain provisional.
 */
extern int FUN_020bbf6c(unsigned int);
extern void FUN_overlay_3__0211ec3c(void *,int);
void FUN_overlay_3__0211ea04(void *p) {if(FUN_020bbf6c(1))FUN_overlay_3__0211ec3c(p,5);}
