// FUN_overlay_4__021282b4 @ 0x021282b4 (0x16, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch09.json; original draft retained for referenced provenance.
// FUN_overlay_4__021282b4 @ 0x021282b4 (code 0x16, pool extent 0x16, thumb)
// check: vers=2.0/sp2p3 target=0x16 candidate=0x16 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 4 reconstruction from extracted module bytes, 2026-11-04.
 * Set receiver state when no global handle is active.
 * Field identities remain provisional.
 */
extern int FUN_020c2e38(void);
extern void FUN_overlay_4__0212826c(void *,int);
void FUN_overlay_4__021282b4(void *p) {if(!FUN_020c2e38())FUN_overlay_4__0212826c(p,1);}
