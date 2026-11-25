// FUN_overlay_12__0212ec70 @ 0x0212ec70 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch22.json; original draft retained for referenced provenance.
// FUN_overlay_12__0212ec70 @ 0x0212ec70 (code 0x20, pool extent 0x20, thumb)
// check: vers=2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Clear global display and release two adjacent manager handles.
 * Field identities remain provisional.
 */
extern void FUN_overlay_12__0212ca04(void);
extern void *FUN_020c1fc8(void);
extern void FUN_020c2624(void *,void *);
void *FUN_overlay_12__0212ec70(char *p) {FUN_overlay_12__0212ca04();FUN_020c2624(FUN_020c1fc8(),p);FUN_020c2624(FUN_020c1fc8(),p+4);return p;}
