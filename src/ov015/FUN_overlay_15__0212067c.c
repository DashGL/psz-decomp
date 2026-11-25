// FUN_overlay_15__0212067c @ 0x0212067c (0x22, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch17.json; original draft retained for referenced provenance.
// FUN_overlay_15__0212067c @ 0x0212067c (code 0x22, pool extent 0x22, thumb)
// check: vers=2.0/sp2p3 target=0x22 candidate=0x22 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Reject negative resident status, otherwise report pending cleanup as negative boolean.
 * Field identities remain provisional.
 */
extern int FUN_02028620(void);
extern int FUN_overlay_15__02120ad0(void);
int FUN_overlay_15__0212067c(void) {if(FUN_02028620()<0)return -1;return -(FUN_overlay_15__02120ad0()!=0);}
